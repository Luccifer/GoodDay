// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESAppli_HArray1OfFlow_HeaderFile
#define _IGESAppli_HArray1OfFlow_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_IGESAppli_HArray1OfFlow.hxx>

#include <IGESAppli_Array1OfFlow.hxx>
#include <MMgt_TShared.hxx>
#include <Handle_IGESAppli_Flow.hxx>
#include <Standard_Integer.hxx>
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class IGESAppli_Flow;
class IGESAppli_Array1OfFlow;



class IGESAppli_HArray1OfFlow : public MMgt_TShared
{

public:

  
    IGESAppli_HArray1OfFlow(const Standard_Integer Low, const Standard_Integer Up);
  
    IGESAppli_HArray1OfFlow(const Standard_Integer Low, const Standard_Integer Up, const Handle(IGESAppli_Flow)& V);
  
      void Init (const Handle(IGESAppli_Flow)& V) ;
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
      Standard_Integer Upper()  const;
  
      void SetValue (const Standard_Integer Index, const Handle(IGESAppli_Flow)& Value) ;
  
     const  Handle(IGESAppli_Flow)& Value (const Standard_Integer Index)  const;
  
      Handle(IGESAppli_Flow)& ChangeValue (const Standard_Integer Index) ;
  
     const  IGESAppli_Array1OfFlow& Array1()  const;
  
      IGESAppli_Array1OfFlow& ChangeArray1() ;




  DEFINE_STANDARD_RTTI(IGESAppli_HArray1OfFlow)

protected:




private: 


  IGESAppli_Array1OfFlow myArray;


};

#define ItemHArray1 Handle(IGESAppli_Flow)
#define ItemHArray1_hxx <IGESAppli_Flow.hxx>
#define TheArray1 IGESAppli_Array1OfFlow
#define TheArray1_hxx <IGESAppli_Array1OfFlow.hxx>
#define TCollection_HArray1 IGESAppli_HArray1OfFlow
#define TCollection_HArray1_hxx <IGESAppli_HArray1OfFlow.hxx>
#define Handle_TCollection_HArray1 Handle_IGESAppli_HArray1OfFlow
#define TCollection_HArray1_Type_() IGESAppli_HArray1OfFlow_Type_()

#include <TCollection_HArray1.lxx>

#undef ItemHArray1
#undef ItemHArray1_hxx
#undef TheArray1
#undef TheArray1_hxx
#undef TCollection_HArray1
#undef TCollection_HArray1_hxx
#undef Handle_TCollection_HArray1
#undef TCollection_HArray1_Type_




#endif // _IGESAppli_HArray1OfFlow_HeaderFile