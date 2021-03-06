/*
 For more information, please see: http://software.sci.utah.edu

 The MIT License

 Copyright (c) 2009 Scientific Computing and Imaging Institute,
 University of Utah.


 Permission is hereby granted, free of charge, to any person obtaining a
 copy of this software and associated documentation files (the "Software"),
 to deal in the Software without restriction, including without limitation
 the rights to use, copy, modify, merge, publish, distribute, sublicense,
 and/or sell copies of the Software, and to permit persons to whom the
 Software is furnished to do so, subject to the following conditions:

 The above copyright notice and this permission notice shall be included
 in all copies or substantial portions of the Software.

 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 DEALINGS IN THE SOFTWARE.
 */

#ifndef APPLICATION_LAYER_LabelLAYER_H
#define APPLICATION_LAYER_LabelLAYER_H

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

// Application includes
#include <Application/Layer/Layer.h>

namespace Seg3D
{

// CLASS LabelLayer

// Forward declarations
class LabelLayer;
typedef boost::shared_ptr< LabelLayer > LabelLayerHandle;

// Class definition
class LabelLayer : public Layer
{

	// -- constructor/destructor --
public:

	LabelLayer( const std::string& name, const Core::VolumeHandle& volume );
	virtual ~LabelLayer();

	// -- Layer properties --
public:

	// TYPE
	// Get the type of the layer
	virtual Core::VolumeType get_type() const { return Core::VolumeType::LABEL_E; }
	
	// GET_GRID_TRANSFORM:
	// Get the transform of the layer
	virtual Core::GridTransform get_grid_transform() const = 0;

	// HAS_VALID_DATA:
	// Check whether the layer has valid data
	virtual bool has_valid_data() const = 0;

public:

	// TODO: Need to generate this class
};

} // end namespace Seg3D

#endif
