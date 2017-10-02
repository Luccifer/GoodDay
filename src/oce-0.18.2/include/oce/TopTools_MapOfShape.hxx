// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopTools_MapOfShape_HeaderFile
#define _TopTools_MapOfShape_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <TCollection_BasicMap.hxx>
#include <Handle_TopTools_StdMapNodeOfMapOfShape.hxx>
#include <Standard_Integer.hxx>
#include <Standard_Boolean.hxx>
class TopoDS_Shape;
class TopTools_ShapeMapHasher;
class TopTools_StdMapNodeOfMapOfShape;
class TopTools_MapIteratorOfMapOfShape;



class TopTools_MapOfShape  : public TCollection_BasicMap
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TopTools_MapOfShape(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT TopTools_MapOfShape(const TopTools_MapOfShape& Other);
  
  Standard_EXPORT   TopTools_MapOfShape& Assign (const TopTools_MapOfShape& Other) ;
  TopTools_MapOfShape& operator = (const TopTools_MapOfShape& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void ReSize (const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT   void Clear() ;
~TopTools_MapOfShape()
{
  Clear();
}
  
  Standard_EXPORT   Standard_Boolean Add (const TopoDS_Shape& aKey) ;
  
  Standard_EXPORT   Standard_Boolean Contains (const TopoDS_Shape& aKey)  const;
  
  Standard_EXPORT   Standard_Boolean Remove (const TopoDS_Shape& aKey) ;




protected:





private:





};







#endif // _TopTools_MapOfShape_HeaderFile