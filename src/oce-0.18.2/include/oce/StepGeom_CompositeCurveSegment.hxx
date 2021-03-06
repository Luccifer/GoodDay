// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepGeom_CompositeCurveSegment_HeaderFile
#define _StepGeom_CompositeCurveSegment_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepGeom_CompositeCurveSegment.hxx>

#include <StepGeom_TransitionCode.hxx>
#include <Standard_Boolean.hxx>
#include <Handle_StepGeom_Curve.hxx>
#include <MMgt_TShared.hxx>
class StepGeom_Curve;



class StepGeom_CompositeCurveSegment : public MMgt_TShared
{

public:

  
  //! Returns a CompositeCurveSegment
  Standard_EXPORT StepGeom_CompositeCurveSegment();
  
  Standard_EXPORT virtual   void Init (const StepGeom_TransitionCode aTransition, const Standard_Boolean aSameSense, const Handle(StepGeom_Curve)& aParentCurve) ;
  
  Standard_EXPORT   void SetTransition (const StepGeom_TransitionCode aTransition) ;
  
  Standard_EXPORT   StepGeom_TransitionCode Transition()  const;
  
  Standard_EXPORT   void SetSameSense (const Standard_Boolean aSameSense) ;
  
  Standard_EXPORT   Standard_Boolean SameSense()  const;
  
  Standard_EXPORT   void SetParentCurve (const Handle(StepGeom_Curve)& aParentCurve) ;
  
  Standard_EXPORT   Handle(StepGeom_Curve) ParentCurve()  const;




  DEFINE_STANDARD_RTTI(StepGeom_CompositeCurveSegment)

protected:




private: 


  StepGeom_TransitionCode transition;
  Standard_Boolean sameSense;
  Handle(StepGeom_Curve) parentCurve;


};







#endif // _StepGeom_CompositeCurveSegment_HeaderFile
