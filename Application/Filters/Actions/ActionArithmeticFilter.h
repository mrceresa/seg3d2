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

#ifndef APPLICATION_FILTERS_ACTIONS_ACTIONARITHMETICFILTER_H
#define APPLICATION_FILTERS_ACTIONS_ACTIONARITHMETICFILTER_H

// Core includes
#include <Core/Action/Actions.h>

// Application includes
#include <Application/Layer/LayerAction.h>

namespace Seg3D
{
	
class ActionArithmeticFilterPrivate;
typedef boost::shared_ptr< ActionArithmeticFilterPrivate > ActionArithmeticFilterPrivateHandle;

class ActionArithmeticFilter : public LayerAction
{

CORE_ACTION( 
	CORE_ACTION_TYPE( "ArithmeticFilter", "Apply boolean/arithmetic expressions to input layers." )
	CORE_ACTION_ARGUMENT( "layerids", "The layerids on which this tool needs to be run." )
	CORE_ACTION_ARGUMENT( "expressions", "The expressions" )
	CORE_ACTION_ARGUMENT( "output_type",  "The type of the output layer" )
	CORE_ACTION_OPTIONAL_ARGUMENT( "replace", "false", "Whether to replace the first input layer with the output" )
	CORE_ACTION_OPTIONAL_ARGUMENT( "preserve_data_format", "false", "Whether to use the same data type as the "
		"first input layer for the output" ) 
	CORE_ACTION_OPTIONAL_ARGUMENT( "sandbox", "-1", "The sandbox in which to run the action." )
	CORE_ACTION_ARGUMENT_IS_NONPERSISTENT( "sandbox" )	
	CORE_ACTION_CHANGES_PROJECT_DATA()
	CORE_ACTION_IS_UNDOABLE()
)
	
	// -- Constructor/Destructor --
public:
	ActionArithmeticFilter();
	
	// -- Functions that describe action --
public:
	virtual bool validate( Core::ActionContextHandle& context );
	virtual bool run( Core::ActionContextHandle& context, Core::ActionResultHandle& result );
	
private:
	ActionArithmeticFilterPrivateHandle private_;
	
public:
	static void Dispatch( Core::ActionContextHandle context, 
		const std::vector< std::string >& layer_ids, const std::string& expressions, 
		const std::string& output_type, bool replace, bool preserve_data_format );

public:
	const static std::string MASK_C;
	const static std::string DATA_C;
	const static std::string RESULT_C;
};
	
} // end namespace Seg3D

#endif
