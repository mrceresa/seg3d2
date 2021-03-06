/*=========================================================================

  Program:   Insight Segmentation & Registration Toolkit
  Module:    $RCSfile: itkBinaryImageToLabelMapFilter.h,v $
  Language:  C++
  Date:      $Date: 2009-07-22 21:25:55 $
  Version:   $Revision: 1.3 $

  Copyright (c) Insight Software Consortium. All rights reserved.
  See ITKCopyright.txt or http://www.itk.org/HTML/Copyright.htm for details.

     This software is distributed WITHOUT ANY WARRANTY; without even 
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR 
     PURPOSE.  See the above copyright notices for more information.

=========================================================================*/

#ifndef __itkBinaryImageToLabelMapFilter_h
#define __itkBinaryImageToLabelMapFilter_h

#include "itkImageToImageFilter.h"
#include "itkImage.h"
#include "itkConceptChecking.h"
#include <vector>
#include <map>
#include "itkProgressReporter.h"
#include "itkBarrier.h"

namespace itk
{

/**
 * \class BinaryImageToLabelMapFilter
 * \brief Label the connected components in a binary image and produce a
 * collection of label objects.
 *
 * BinaryImageToLabelMapFilter labels the objects in a binary image.
 * Each distinct object is assigned a unique label. 
 * The final object labels start with 1 and are consecutive. Objects
 * that are reached earlier by a raster order scan have a lower
 * label.
 *
 * This implementation was taken from the Insight Journal paper:
 * http://hdl.handle.net/1926/584  or 
 * http://www.insight-journal.org/browse/publication/176
 *
 * \author Gaetan Lehmann. Biologie du Developpement et de la Reproduction, INRA de Jouy-en-Josas, France.
 *
 * \sa ConnectedComponentImageFilter, LabelImageToLabelMapFilter, LabelMap
 */

template <class TInputImage, 
  class TOutputImage = 
    LabelMap< LabelObject< unsigned long, ::itk::GetImageDimension<TInputImage>::ImageDimension> > >
class ITK_EXPORT BinaryImageToLabelMapFilter : 
    public ImageToImageFilter< TInputImage, TOutputImage > 
{
public:
  /**
   * Standard "Self" & Superclass typedef.
   */
  typedef BinaryImageToLabelMapFilter                       Self;
  typedef ImageToImageFilter< TInputImage, TOutputImage >   Superclass;
  typedef SmartPointer<Self>                                Pointer;
  typedef SmartPointer<const Self>                          ConstPointer;
  
  /**
   * Method for creation through the object factory.
   */
  itkNewMacro(Self);

  /**
   * Run-time type information (and related methods)
   */
  itkTypeMacro(BinaryImageToLabelMapFilter, ImageToImageFilter);

  /**
   * Types from the Superclass
   */
  typedef typename Superclass::InputImagePointer InputImagePointer;

  /**
   * Extract some information from the image types.  Dimensionality
   * of the two images is assumed to be the same.
   */
  typedef typename TOutputImage::PixelType        OutputPixelType;
  typedef typename TInputImage::PixelType         InputPixelType;
  typedef typename TInputImage::SizeValueType     SizeValueType;
  typedef typename TInputImage::OffsetValueType   OffsetValueType;
  itkStaticConstMacro(ImageDimension, unsigned int, TOutputImage::ImageDimension);
  itkStaticConstMacro(OutputImageDimension, unsigned int, TOutputImage::ImageDimension);
  itkStaticConstMacro(InputImageDimension, unsigned int, TInputImage::ImageDimension);
  
  /**
   * Image typedef support
   */
  typedef TInputImage                       InputImageType;
  typedef typename TInputImage::IndexType   IndexType;
  typedef typename TInputImage::SizeType    SizeType;
  typedef typename TInputImage::OffsetType  OffsetType;

  typedef TOutputImage                      OutputImageType;
  typedef typename TOutputImage::RegionType RegionType;
  typedef typename TOutputImage::IndexType  OutputIndexType;
  typedef typename TOutputImage::SizeType   OutputSizeType;
  typedef typename TOutputImage::OffsetType OutputOffsetType;
  typedef typename TOutputImage::PixelType  OutputImagePixelType;

  typedef std::list<IndexType>              ListType;

  /**
   * Set/Get whether the connected components are defined strictly by
   * face connectivity or by face+edge+vertex connectivity.  Default is
   * FullyConnectedOff.  For objects that are 1 pixel wide, use
   * FullyConnectedOn.
   */
  itkSetMacro(FullyConnected, bool);
  itkGetConstReferenceMacro(FullyConnected, bool);
  itkBooleanMacro(FullyConnected);
  
  // only set after completion
  itkGetConstReferenceMacro( NumberOfObjects, unsigned long);

  /**
   * Set/Get the value used as "background" in the output image.
   * Defaults to NumericTraits<OutputPixelType>::NonpositiveMin().
   */
  itkSetMacro(OutputBackgroundValue, OutputPixelType);
  itkGetConstMacro(OutputBackgroundValue, OutputPixelType);

  /**
   * Set/Get the value to be consider "foreground" in the input image.
   * Defaults to NumericTraits<InputPixelType>::max().
   */
  itkSetMacro(InputForegroundValue, InputPixelType);
  itkGetConstMacro(InputForegroundValue, InputPixelType);


#ifdef ITK_USE_CONCEPT_CHECKING
  // Concept checking -- input and output dimensions must be the same
  itkConceptMacro(SameDimension,
    (Concept::SameDimension<itkGetStaticConstMacro(InputImageDimension),
       itkGetStaticConstMacro(OutputImageDimension)>));
#endif


protected:
  BinaryImageToLabelMapFilter();
  virtual ~BinaryImageToLabelMapFilter() {}
  void PrintSelf(std::ostream& os, Indent indent) const;

  /**
   * Standard pipeline method. 
   */
  void BeforeThreadedGenerateData ();
  void AfterThreadedGenerateData ();
  void ThreadedGenerateData (const RegionType& outputRegionForThread, int threadId);

  /** BinaryImageToLabelMapFilter needs the entire input. Therefore
   * it must provide an implementation GenerateInputRequestedRegion().
   * \sa ProcessObject::GenerateInputRequestedRegion(). */
  void GenerateInputRequestedRegion();

  /** BinaryImageToLabelMapFilter will produce all of the output.
   * Therefore it must provide an implementation of
   * EnlargeOutputRequestedRegion().
   * \sa ProcessObject::EnlargeOutputRequestedRegion() */
  void EnlargeOutputRequestedRegion(DataObject *itkNotUsed(output));

private:
  BinaryImageToLabelMapFilter(const Self&); //purposely not implemented
  void operator=(const Self&); //purposely not implemented

  // some additional types
  typedef typename TOutputImage::RegionType::SizeType OutSizeType;

  // types to support the run length encoding of lines
  class runLength
    {
    public:
    // run length information - may be a more type safe way of doing this
    long int length;
    typename InputImageType::IndexType where; // Index of the start of the run
    unsigned long int label; // the initial label of the run
    };

  typedef std::vector<runLength> lineEncoding;

  // the map storing lines
  typedef std::vector<lineEncoding> LineMapType;
  
  typedef std::vector<long>         OffsetVectorType;

  // the types to support union-find operations
  typedef std::vector<unsigned long int> UnionFindType;
  UnionFindType m_UnionFind;
  UnionFindType m_Consecutive;
  // functions to support union-find operations
  void InitUnion(const unsigned long int size) 
    {
    m_UnionFind = UnionFindType(size + 1);
    }

  void InsertSet(const unsigned long int label);
  unsigned long int LookupSet(const unsigned long int label);
  void LinkLabels(const unsigned long int lab1, const unsigned long int lab2);
  unsigned long int CreateConsecutive();
  //////////////////
  bool CheckNeighbors(const OutputIndexType &A, 
                      const OutputIndexType &B);

  void CompareLines(lineEncoding &current, const lineEncoding &Neighbour);

  void FillOutput(const LineMapType &LineMap,
                  ProgressReporter &progress);

  void SetupLineOffsets( OffsetVectorType & LineOffsets );

  void Wait()
    {
    // use m_NumberOfLabels.size() to get the number of thread used
    if( m_NumberOfLabels.size() > 1 )
      {
      m_Barrier->Wait();
      }
    }

  OutputPixelType                   m_OutputBackgroundValue;
  InputPixelType                    m_InputForegroundValue;

  SizeValueType                     m_NumberOfObjects;

  bool                              m_FullyConnected;
  
  typename std::vector< SizeValueType >   m_NumberOfLabels;
  typename std::vector< SizeValueType >   m_FirstLineIdToJoin;
  typename Barrier::Pointer               m_Barrier;

#if !defined(CABLE_CONFIGURATION)
  LineMapType                       m_LineMap;
#endif
};
  
} // end namespace itk

#ifndef ITK_MANUAL_INSTANTIATION
#if !defined(CABLE_CONFIGURATION)
#include "itkBinaryImageToLabelMapFilter.txx"
#endif
#endif

#endif
