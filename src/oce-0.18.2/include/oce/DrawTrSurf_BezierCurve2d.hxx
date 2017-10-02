// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _DrawTrSurf_BezierCurve2d_HeaderFile
#define _DrawTrSurf_BezierCurve2d_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_DrawTrSurf_BezierCurve2d.hxx>

#include <Standard_Boolean.hxx>
#include <Draw_Color.hxx>
#include <DrawTrSurf_Curve2d.hxx>
#include <Handle_Geom2d_BezierCurve.hxx>
#include <Standard_Integer.hxx>
#include <Standard_Real.hxx>
#include <Handle_Draw_Drawable3D.hxx>
class Geom2d_BezierCurve;
class Draw_Color;
class Draw_Display;
class Draw_Drawable3D;



class DrawTrSurf_BezierCurve2d : public DrawTrSurf_Curve2d
{

public:

  

  //! creates a drawable Bezier curve from a Bezier curve of
  //! package Geom2d.
  Standard_EXPORT DrawTrSurf_BezierCurve2d(const Handle(Geom2d_BezierCurve)& C);
  
  Standard_EXPORT DrawTrSurf_BezierCurve2d(const Handle(Geom2d_BezierCurve)& C, const Draw_Color& CurvColor, const Draw_Color& PolesColor, const Standard_Boolean ShowPoles, const Standard_Integer Discret);
  
  Standard_EXPORT   void DrawOn (Draw_Display& dis)  const;
  
  Standard_EXPORT   void ShowPoles() ;
  
  Standard_EXPORT   void ClearPoles() ;
  

  //! Returns in <Index> the index of the first pole  of the
  //! curve projected by the Display <D> at a distance lower
  //! than <Prec> from <X,Y>. If no pole  is found  index is
  //! set to 0, else index is always  greater than the input
  //! value of index.
  Standard_EXPORT   void FindPole (const Standard_Real X, const Standard_Real Y, const Draw_Display& D, const Standard_Real Prec, Standard_Integer& Index)  const;
  
      void SetPolesColor (const Draw_Color& aColor) ;
  
      Draw_Color PolesColor()  const;
  
  //! For variable copy.
  Standard_EXPORT virtual   Handle(Draw_Drawable3D) Copy()  const;




  DEFINE_STANDARD_RTTI(DrawTrSurf_BezierCurve2d)

protected:




private: 


  Standard_Boolean drawPoles;
  Draw_Color polesLook;


};


#include <DrawTrSurf_BezierCurve2d.lxx>





#endif // _DrawTrSurf_BezierCurve2d_HeaderFile