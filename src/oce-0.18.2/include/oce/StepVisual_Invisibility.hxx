// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepVisual_Invisibility_HeaderFile
#define _StepVisual_Invisibility_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepVisual_Invisibility.hxx>

#include <Handle_StepVisual_HArray1OfInvisibleItem.hxx>
#include <MMgt_TShared.hxx>
#include <Standard_Integer.hxx>
class StepVisual_HArray1OfInvisibleItem;
class StepVisual_InvisibleItem;



class StepVisual_Invisibility : public MMgt_TShared
{

public:

  
  //! Returns a Invisibility
  Standard_EXPORT StepVisual_Invisibility();
  
  Standard_EXPORT virtual   void Init (const Handle(StepVisual_HArray1OfInvisibleItem)& aInvisibleItems) ;
  
  Standard_EXPORT   void SetInvisibleItems (const Handle(StepVisual_HArray1OfInvisibleItem)& aInvisibleItems) ;
  
  Standard_EXPORT   Handle(StepVisual_HArray1OfInvisibleItem) InvisibleItems()  const;
  
  Standard_EXPORT   StepVisual_InvisibleItem InvisibleItemsValue (const Standard_Integer num)  const;
  
  Standard_EXPORT   Standard_Integer NbInvisibleItems()  const;




  DEFINE_STANDARD_RTTI(StepVisual_Invisibility)

protected:




private: 


  Handle(StepVisual_HArray1OfInvisibleItem) invisibleItems;


};







#endif // _StepVisual_Invisibility_HeaderFile