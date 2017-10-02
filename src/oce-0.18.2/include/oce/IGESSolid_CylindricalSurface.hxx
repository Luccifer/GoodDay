// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESSolid_CylindricalSurface_HeaderFile
#define _IGESSolid_CylindricalSurface_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_IGESSolid_CylindricalSurface.hxx>

#include <Handle_IGESGeom_Point.hxx>
#include <Handle_IGESGeom_Direction.hxx>
#include <Standard_Real.hxx>
#include <IGESData_IGESEntity.hxx>
#include <Standard_Boolean.hxx>
class IGESGeom_Point;
class IGESGeom_Direction;


//! defines CylindricalSurface, Type <192> Form Number <0,1>
//! in package IGESSolid
class IGESSolid_CylindricalSurface : public IGESData_IGESEntity
{

public:

  
  Standard_EXPORT IGESSolid_CylindricalSurface();
  
  //! This method is used to set the fields of the class
  //! CylindricalSurface
  //! - aLocation : the location of the point on axis
  //! - anAxis    : the direction of the axis
  //! - aRadius   : the radius at the axis point
  //! - aRefdir   : the reference direction (parametrised surface)
  //! default NULL (unparametrised surface)
  Standard_EXPORT   void Init (const Handle(IGESGeom_Point)& aLocation, const Handle(IGESGeom_Direction)& anAxis, const Standard_Real aRadius, const Handle(IGESGeom_Direction)& aRefdir) ;
  
  //! returns the point on the axis
  Standard_EXPORT   Handle(IGESGeom_Point) LocationPoint()  const;
  
  //! returns the direction on the axis
  Standard_EXPORT   Handle(IGESGeom_Direction) Axis()  const;
  
  //! returns the radius at the axis point
  Standard_EXPORT   Standard_Real Radius()  const;
  
  //! returns whether the surface is parametrised or not
  Standard_EXPORT   Standard_Boolean IsParametrised()  const;
  
  //! returns the reference direction only for parametrised surface
  //! else returns NULL
  Standard_EXPORT   Handle(IGESGeom_Direction) ReferenceDir()  const;




  DEFINE_STANDARD_RTTI(IGESSolid_CylindricalSurface)

protected:




private: 


  Handle(IGESGeom_Point) theLocationPoint;
  Handle(IGESGeom_Direction) theAxis;
  Standard_Real theRadius;
  Handle(IGESGeom_Direction) theRefDir;


};







#endif // _IGESSolid_CylindricalSurface_HeaderFile