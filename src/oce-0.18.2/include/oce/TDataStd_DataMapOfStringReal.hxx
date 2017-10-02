// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TDataStd_DataMapOfStringReal_HeaderFile
#define _TDataStd_DataMapOfStringReal_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <TCollection_BasicMap.hxx>
#include <Standard_Real.hxx>
#include <Handle_TDataStd_DataMapNodeOfDataMapOfStringReal.hxx>
#include <Standard_Integer.hxx>
#include <Standard_Boolean.hxx>
#include <Standard_Address.hxx>
class Standard_DomainError;
class Standard_NoSuchObject;
class TCollection_ExtendedString;
class TDataStd_DataMapNodeOfDataMapOfStringReal;
class TDataStd_DataMapIteratorOfDataMapOfStringReal;



class TDataStd_DataMapOfStringReal  : public TCollection_BasicMap
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TDataStd_DataMapOfStringReal(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT   TDataStd_DataMapOfStringReal& Assign (const TDataStd_DataMapOfStringReal& Other) ;
  TDataStd_DataMapOfStringReal& operator = (const TDataStd_DataMapOfStringReal& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void ReSize (const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT   void Clear() ;
~TDataStd_DataMapOfStringReal()
{
  Clear();
}
  
  Standard_EXPORT   Standard_Boolean Bind (const TCollection_ExtendedString& K, const Standard_Real& I) ;
  
  Standard_EXPORT   Standard_Boolean IsBound (const TCollection_ExtendedString& K)  const;
  
  Standard_EXPORT   Standard_Boolean UnBind (const TCollection_ExtendedString& K) ;
  
  Standard_EXPORT  const  Standard_Real& Find (const TCollection_ExtendedString& K)  const;
 const  Standard_Real& operator() (const TCollection_ExtendedString& K)  const
{
  return Find(K);
}
  
  Standard_EXPORT   Standard_Real& ChangeFind (const TCollection_ExtendedString& K) ;
  Standard_Real& operator() (const TCollection_ExtendedString& K) 
{
  return ChangeFind(K);
}
  
  Standard_EXPORT   Standard_Address Find1 (const TCollection_ExtendedString& K)  const;
  
  Standard_EXPORT   Standard_Address ChangeFind1 (const TCollection_ExtendedString& K) ;




protected:





private:

  
  Standard_EXPORT TDataStd_DataMapOfStringReal(const TDataStd_DataMapOfStringReal& Other);




};







#endif // _TDataStd_DataMapOfStringReal_HeaderFile