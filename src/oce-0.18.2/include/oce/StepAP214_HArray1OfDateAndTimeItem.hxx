// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepAP214_HArray1OfDateAndTimeItem_HeaderFile
#define _StepAP214_HArray1OfDateAndTimeItem_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepAP214_HArray1OfDateAndTimeItem.hxx>

#include <StepAP214_Array1OfDateAndTimeItem.hxx>
#include <MMgt_TShared.hxx>
#include <Standard_Integer.hxx>
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class StepAP214_DateAndTimeItem;
class StepAP214_Array1OfDateAndTimeItem;



class StepAP214_HArray1OfDateAndTimeItem : public MMgt_TShared
{

public:

  
    StepAP214_HArray1OfDateAndTimeItem(const Standard_Integer Low, const Standard_Integer Up);
  
    StepAP214_HArray1OfDateAndTimeItem(const Standard_Integer Low, const Standard_Integer Up, const StepAP214_DateAndTimeItem& V);
  
      void Init (const StepAP214_DateAndTimeItem& V) ;
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
      Standard_Integer Upper()  const;
  
      void SetValue (const Standard_Integer Index, const StepAP214_DateAndTimeItem& Value) ;
  
     const  StepAP214_DateAndTimeItem& Value (const Standard_Integer Index)  const;
  
      StepAP214_DateAndTimeItem& ChangeValue (const Standard_Integer Index) ;
  
     const  StepAP214_Array1OfDateAndTimeItem& Array1()  const;
  
      StepAP214_Array1OfDateAndTimeItem& ChangeArray1() ;




  DEFINE_STANDARD_RTTI(StepAP214_HArray1OfDateAndTimeItem)

protected:




private: 


  StepAP214_Array1OfDateAndTimeItem myArray;


};

#define ItemHArray1 StepAP214_DateAndTimeItem
#define ItemHArray1_hxx <StepAP214_DateAndTimeItem.hxx>
#define TheArray1 StepAP214_Array1OfDateAndTimeItem
#define TheArray1_hxx <StepAP214_Array1OfDateAndTimeItem.hxx>
#define TCollection_HArray1 StepAP214_HArray1OfDateAndTimeItem
#define TCollection_HArray1_hxx <StepAP214_HArray1OfDateAndTimeItem.hxx>
#define Handle_TCollection_HArray1 Handle_StepAP214_HArray1OfDateAndTimeItem
#define TCollection_HArray1_Type_() StepAP214_HArray1OfDateAndTimeItem_Type_()

#include <TCollection_HArray1.lxx>

#undef ItemHArray1
#undef ItemHArray1_hxx
#undef TheArray1
#undef TheArray1_hxx
#undef TCollection_HArray1
#undef TCollection_HArray1_hxx
#undef Handle_TCollection_HArray1
#undef TCollection_HArray1_Type_




#endif // _StepAP214_HArray1OfDateAndTimeItem_HeaderFile