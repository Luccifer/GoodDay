// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopoDS_HShape_HeaderFile
#define _TopoDS_HShape_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_TopoDS_HShape.hxx>

#include <TopoDS_Shape.hxx>
#include <MMgt_TShared.hxx>
class TopoDS_Shape;


//! Class to manipulate a Shape with  handle.
class TopoDS_HShape : public MMgt_TShared
{

public:

  
  //! Constructs an empty shape object
    TopoDS_HShape();
  
  //! Constructs a shape object defined by the shape aShape.
    TopoDS_HShape(const TopoDS_Shape& aShape);
  
  //! Loads this shape with the shape aShape
      void Shape (const TopoDS_Shape& aShape) ;
  
  //! Returns a reference to a constant TopoDS_Shape based on this shape.
     const  TopoDS_Shape& Shape()  const;
  

  //! Exchanges the TopoDS_Shape object defining this
  //! shape for another one referencing the same underlying shape
  //! Accesses the list of shapes within the underlying
  //! shape referenced by the TopoDS_Shape object.
  //! Returns a reference to a TopoDS_Shape based on
  //! this shape. The TopoDS_Shape can be modified.
      TopoDS_Shape& ChangeShape() ;




  DEFINE_STANDARD_RTTI(TopoDS_HShape)

protected:




private: 


  TopoDS_Shape myShape;


};


#include <TopoDS_HShape.lxx>





#endif // _TopoDS_HShape_HeaderFile