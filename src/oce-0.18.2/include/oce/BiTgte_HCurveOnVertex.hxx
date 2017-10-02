// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BiTgte_HCurveOnVertex_HeaderFile
#define _BiTgte_HCurveOnVertex_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_BiTgte_HCurveOnVertex.hxx>

#include <BiTgte_CurveOnVertex.hxx>
#include <Adaptor3d_HCurve.hxx>
class Standard_OutOfRange;
class Standard_NoSuchObject;
class Standard_DomainError;
class BiTgte_CurveOnVertex;
class Adaptor3d_Curve;



class BiTgte_HCurveOnVertex : public Adaptor3d_HCurve
{

public:

  
  Standard_EXPORT BiTgte_HCurveOnVertex();
  
  Standard_EXPORT BiTgte_HCurveOnVertex(const BiTgte_CurveOnVertex& C);
  
  Standard_EXPORT   void Set (const BiTgte_CurveOnVertex& C) ;
  
  Standard_EXPORT  const  Adaptor3d_Curve& Curve()  const;
  
  Standard_EXPORT   Adaptor3d_Curve& GetCurve() ;
  
      BiTgte_CurveOnVertex& ChangeCurve() ;




  DEFINE_STANDARD_RTTI(BiTgte_HCurveOnVertex)

protected:


  BiTgte_CurveOnVertex myCurve;


private: 




};

#define TheCurve BiTgte_CurveOnVertex
#define TheCurve_hxx <BiTgte_CurveOnVertex.hxx>
#define Adaptor3d_GenHCurve BiTgte_HCurveOnVertex
#define Adaptor3d_GenHCurve_hxx <BiTgte_HCurveOnVertex.hxx>
#define Handle_Adaptor3d_GenHCurve Handle_BiTgte_HCurveOnVertex
#define Adaptor3d_GenHCurve_Type_() BiTgte_HCurveOnVertex_Type_()

#include <Adaptor3d_GenHCurve.lxx>

#undef TheCurve
#undef TheCurve_hxx
#undef Adaptor3d_GenHCurve
#undef Adaptor3d_GenHCurve_hxx
#undef Handle_Adaptor3d_GenHCurve
#undef Adaptor3d_GenHCurve_Type_




#endif // _BiTgte_HCurveOnVertex_HeaderFile