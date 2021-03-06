/*=========================================================================

  Program:   Insight Segmentation & Registration Toolkit
  Module:    $RCSfile: itkCenteredEuler3DTransform.txx,v $
  Language:  C++
  Date:      $Date: 2009-04-09 09:23:20 $
  Version:   $Revision: 1.13 $

  Copyright (c) Insight Software Consortium. All rights reserved.
  See ITKCopyright.txt or http://www.itk.org/HTML/Copyright.htm for details.

     This software is distributed WITHOUT ANY WARRANTY; without even 
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR 
     PURPOSE.  See the above copyright notices for more information.

=========================================================================*/
#ifndef __itkCenteredEuler3DTransform_txx
#define __itkCenteredEuler3DTransform_txx

#include "itkCenteredEuler3DTransform.h"


namespace itk
{

// Constructor with default arguments
template<class TScalarType>
CenteredEuler3DTransform<TScalarType>::
CenteredEuler3DTransform() :
  Superclass(OutputSpaceDimension, ParametersDimension)
{
}
 
// Constructor with default arguments
template<class TScalarType>
CenteredEuler3DTransform<TScalarType>::
CenteredEuler3DTransform(unsigned int spaceDimension, 
                         unsigned int parametersDimension) :
  Superclass(spaceDimension,parametersDimension)
{
}

// Constructor with default arguments
template<class TScalarType>
CenteredEuler3DTransform<TScalarType>::
CenteredEuler3DTransform(const MatrixType & matrix,
                         const OutputPointType & offset) :
  Superclass(matrix, offset)
{
}


// Destructor
template<class TScalarType>
CenteredEuler3DTransform<TScalarType>::
~CenteredEuler3DTransform()
{
}


//
// Set Parameters
// 
// Parameters are ordered as:
//
// p[0:2] = rotations about x, y and z axes
// p[3:5} = center of rotation
// p[6:8] = translation
//
//
template <class TScalarType>
void
CenteredEuler3DTransform<TScalarType>
::SetParameters( const ParametersType & parameters )
{
  itkDebugMacro( << "Setting parameters " << parameters );

  this->SetVarRotation(parameters[0], parameters[1], parameters[2]);

  CenterType newCenter;
  newCenter[0] = parameters[3];
  newCenter[1] = parameters[4];
  newCenter[2] = parameters[5];
  this->SetVarCenter(newCenter);
  this->ComputeMatrix();

  TranslationType newTranslation;
  newTranslation[0] = parameters[6];
  newTranslation[1] = parameters[7];
  newTranslation[2] = parameters[8];
  this->SetVarTranslation(newTranslation);
  this->ComputeOffset();

  // Modified is always called since we just have a pointer to the
  // parameters and cannot know if the parameters have changed.
  this->Modified();

  itkDebugMacro(<<"After setting parameters ");
}

//
// Get Parameters
// 
// Parameters are ordered as:
//
// p[0:2] = rotations about x, y and z axes
// p[3:5} = center of rotation
// p[6:8] = translation
//

template <class TScalarType>
const typename CenteredEuler3DTransform<TScalarType>::ParametersType &
CenteredEuler3DTransform<TScalarType>
::GetParameters( void ) const
{
  ParametersType parameters;

  this->m_Parameters[0] = this->GetAngleX();
  this->m_Parameters[1] = this->GetAngleY();
  this->m_Parameters[2] = this->GetAngleZ();

  this->m_Parameters[3] = this->GetCenter()[0];
  this->m_Parameters[4] = this->GetCenter()[1];
  this->m_Parameters[5] = this->GetCenter()[2];

  this->m_Parameters[6] = this->GetTranslation()[0];
  this->m_Parameters[7] = this->GetTranslation()[1];
  this->m_Parameters[8] = this->GetTranslation()[2];

  return this->m_Parameters;
}


// Get jacobian
template<class TScalarType>
const typename CenteredEuler3DTransform<TScalarType>::JacobianType &
CenteredEuler3DTransform<TScalarType>::
GetJacobian( const InputPointType & p ) const
{
  // need to check if angles are in the right order
  const double cx = vcl_cos(this->GetAngleX());
  const double sx = vcl_sin(this->GetAngleX());
  const double cy = vcl_cos(this->GetAngleY());
  const double sy = vcl_sin(this->GetAngleY()); 
  const double cz = vcl_cos(this->GetAngleZ());
  const double sz = vcl_sin(this->GetAngleZ());

  this->m_Jacobian.Fill(0.0);

  const double px = p[0] - this->GetCenter()[0];
  const double py = p[1] - this->GetCenter()[1];
  const double pz = p[2] - this->GetCenter()[2];


  if ( this->GetComputeZYX() )
    {
    this->m_Jacobian[0][0] = (cz*sy*cx+sz*sx)*py+(-cz*sy*sx+sz*cx)*pz;
    this->m_Jacobian[1][0] = (sz*sy*cx-cz*sx)*py+(-sz*sy*sx-cz*cx)*pz;
    this->m_Jacobian[2][0] = (cy*cx)*py+(-cy*sx)*pz;  
    
    this->m_Jacobian[0][1] = (-cz*sy)*px+(cz*cy*sx)*py+(cz*cy*cx)*pz;
    this->m_Jacobian[1][1] = (-sz*sy)*px+(sz*cy*sx)*py+(sz*cy*cx)*pz;
    this->m_Jacobian[2][1] = (-cy)*px+(-sy*sx)*py+(-sy*cx)*pz;
    
    this->m_Jacobian[0][2] = (-sz*cy)*px+(-sz*sy*sx-cz*cx)*py
                                        +(-sz*sy*cx+cz*sx)*pz;
    this->m_Jacobian[1][2] = (cz*cy)*px+(cz*sy*sx-sz*cx)*py
                                                        +(cz*sy*cx+sz*sx)*pz;  
    this->m_Jacobian[2][2] = 0;
    }
  else
    {
    this->m_Jacobian[0][0] = (-sz*cx*sy)*px + (sz*sx)*py + (sz*cx*cy)*pz;
    this->m_Jacobian[1][0] = (cz*cx*sy)*px + (-cz*sx)*py + (-cz*cx*cy)*pz;
    this->m_Jacobian[2][0] = (sx*sy)*px + (cx)*py + (-sx*cy)*pz;  
    
    this->m_Jacobian[0][1] = (-cz*sy-sz*sx*cy)*px + (cz*cy-sz*sx*sy)*pz;
    this->m_Jacobian[1][1] = (-sz*sy+cz*sx*cy)*px + (sz*cy+cz*sx*sy)*pz;
    this->m_Jacobian[2][1] = (-cx*cy)*px + (-cx*sy)*pz;
    
    this->m_Jacobian[0][2] = (-sz*cy-cz*sx*sy)*px + (-cz*cx)*py 
                                                  + (-sz*sy+cz*sx*cy)*pz;
    this->m_Jacobian[1][2] = (cz*cy-sz*sx*sy)*px + (-sz*cx)*py 
                                                 + (cz*sy+sz*sx*cy)*pz;
    this->m_Jacobian[2][2] = 0;
    }
 
  // compute derivatives for the center of rotation part
  unsigned int blockOffset = 3;  
  for(unsigned int dim=0; dim < SpaceDimension; dim++ ) 
    {
    this->m_Jacobian[ dim ][ blockOffset + dim ] = 1.0;
    }
  blockOffset += SpaceDimension;

  // compute derivatives for the translation part
  for(unsigned int dim=0; dim < SpaceDimension; dim++ ) 
    {
    this->m_Jacobian[ dim ][ blockOffset + dim ] = 1.0;
    }

  return this->m_Jacobian;
}

// Get an inverse of this transform
template<class TScalarType>
bool
CenteredEuler3DTransform<TScalarType>
::GetInverse(Self* inverse) const
{
  return this->Superclass::GetInverse(inverse);
}
   
// Return an inverse of this transform
template<class TScalarType>
typename CenteredEuler3DTransform<TScalarType>::InverseTransformBasePointer
CenteredEuler3DTransform<TScalarType>
::GetInverseTransform() const
{
  Pointer inv = New();
  return this->GetInverse(inv) ? inv.GetPointer() : NULL;
}


// Print self
template<class TScalarType>
void
CenteredEuler3DTransform<TScalarType>::
PrintSelf(std::ostream &os, Indent indent) const
{

  Superclass::PrintSelf(os,indent);
}

} // namespace

#endif
