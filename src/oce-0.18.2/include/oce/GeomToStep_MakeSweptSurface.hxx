// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomToStep_MakeSweptSurface_HeaderFile
#define _GeomToStep_MakeSweptSurface_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Handle_StepGeom_SweptSurface.hxx>
#include <GeomToStep_Root.hxx>
#include <Handle_Geom_SweptSurface.hxx>
class StepGeom_SweptSurface;
class StdFail_NotDone;
class Geom_SweptSurface;


//! This class implements the mapping between classes
//! SweptSurface from Geom and the class SweptSurface from
//! StepGeom which describes a SweptSurface from prostep.
//! As SweptSurface is an abstract SweptSurface this class
//! is an access to the sub-class required.
class GeomToStep_MakeSweptSurface  : public GeomToStep_Root
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT GeomToStep_MakeSweptSurface(const Handle(Geom_SweptSurface)& S);
  
  Standard_EXPORT  const  Handle(StepGeom_SweptSurface)& Value()  const;




protected:





private:



  Handle(StepGeom_SweptSurface) theSweptSurface;


};







#endif // _GeomToStep_MakeSweptSurface_HeaderFile