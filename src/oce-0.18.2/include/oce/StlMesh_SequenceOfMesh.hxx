// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StlMesh_SequenceOfMesh_HeaderFile
#define _StlMesh_SequenceOfMesh_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <TCollection_BaseSequence.hxx>
#include <Handle_StlMesh_Mesh.hxx>
#include <Handle_StlMesh_SequenceNodeOfSequenceOfMesh.hxx>
#include <Standard_Integer.hxx>
class Standard_NoSuchObject;
class Standard_OutOfRange;
class StlMesh_Mesh;
class StlMesh_SequenceNodeOfSequenceOfMesh;



class StlMesh_SequenceOfMesh  : public TCollection_BaseSequence
{
public:

  DEFINE_STANDARD_ALLOC

  
    StlMesh_SequenceOfMesh();
  
  Standard_EXPORT StlMesh_SequenceOfMesh(const StlMesh_SequenceOfMesh& Other);
  
  Standard_EXPORT   void Clear() ;
~StlMesh_SequenceOfMesh()
{
  Clear();
}
  
  Standard_EXPORT  const  StlMesh_SequenceOfMesh& Assign (const StlMesh_SequenceOfMesh& Other) ;
 const  StlMesh_SequenceOfMesh& operator = (const StlMesh_SequenceOfMesh& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void Append (const Handle(StlMesh_Mesh)& T) ;
  
      void Append (StlMesh_SequenceOfMesh& S) ;
  
  Standard_EXPORT   void Prepend (const Handle(StlMesh_Mesh)& T) ;
  
      void Prepend (StlMesh_SequenceOfMesh& S) ;
  
      void InsertBefore (const Standard_Integer Index, const Handle(StlMesh_Mesh)& T) ;
  
      void InsertBefore (const Standard_Integer Index, StlMesh_SequenceOfMesh& S) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer Index, const Handle(StlMesh_Mesh)& T) ;
  
      void InsertAfter (const Standard_Integer Index, StlMesh_SequenceOfMesh& S) ;
  
  Standard_EXPORT  const  Handle(StlMesh_Mesh)& First()  const;
  
  Standard_EXPORT  const  Handle(StlMesh_Mesh)& Last()  const;
  
      void Split (const Standard_Integer Index, StlMesh_SequenceOfMesh& Sub) ;
  
  Standard_EXPORT  const  Handle(StlMesh_Mesh)& Value (const Standard_Integer Index)  const;
 const  Handle(StlMesh_Mesh)& operator() (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
  Standard_EXPORT   void SetValue (const Standard_Integer Index, const Handle(StlMesh_Mesh)& I) ;
  
  Standard_EXPORT   Handle(StlMesh_Mesh)& ChangeValue (const Standard_Integer Index) ;
  Handle(StlMesh_Mesh)& operator() (const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT   void Remove (const Standard_Integer Index) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer FromIndex, const Standard_Integer ToIndex) ;




protected:





private:





};

#define SeqItem Handle(StlMesh_Mesh)
#define SeqItem_hxx <StlMesh_Mesh.hxx>
#define TCollection_SequenceNode StlMesh_SequenceNodeOfSequenceOfMesh
#define TCollection_SequenceNode_hxx <StlMesh_SequenceNodeOfSequenceOfMesh.hxx>
#define Handle_TCollection_SequenceNode Handle_StlMesh_SequenceNodeOfSequenceOfMesh
#define TCollection_SequenceNode_Type_() StlMesh_SequenceNodeOfSequenceOfMesh_Type_()
#define TCollection_Sequence StlMesh_SequenceOfMesh
#define TCollection_Sequence_hxx <StlMesh_SequenceOfMesh.hxx>

#include <TCollection_Sequence.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _StlMesh_SequenceOfMesh_HeaderFile