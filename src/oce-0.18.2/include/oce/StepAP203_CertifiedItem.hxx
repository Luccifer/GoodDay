// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepAP203_CertifiedItem_HeaderFile
#define _StepAP203_CertifiedItem_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <StepData_SelectType.hxx>
#include <Standard_Integer.hxx>
#include <Handle_Standard_Transient.hxx>
#include <Handle_StepRepr_SuppliedPartRelationship.hxx>
class Standard_Transient;
class StepRepr_SuppliedPartRelationship;


//! Representation of STEP SELECT type CertifiedItem
class StepAP203_CertifiedItem  : public StepData_SelectType
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Empty constructor
  Standard_EXPORT StepAP203_CertifiedItem();
  
  //! Recognizes a kind of CertifiedItem select type
  //! 1 -> SuppliedPartRelationship from StepRepr
  //! 0 else
  Standard_EXPORT   Standard_Integer CaseNum (const Handle(Standard_Transient)& ent)  const;
  
  //! Returns Value as SuppliedPartRelationship (or Null if another type)
  Standard_EXPORT   Handle(StepRepr_SuppliedPartRelationship) SuppliedPartRelationship()  const;




protected:





private:





};







#endif // _StepAP203_CertifiedItem_HeaderFile