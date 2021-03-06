// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepShape_FaceBound_HeaderFile
#define _StepShape_FaceBound_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepShape_FaceBound.hxx>

#include <Handle_StepShape_Loop.hxx>
#include <Standard_Boolean.hxx>
#include <StepShape_TopologicalRepresentationItem.hxx>
#include <Handle_TCollection_HAsciiString.hxx>
class StepShape_Loop;
class TCollection_HAsciiString;



class StepShape_FaceBound : public StepShape_TopologicalRepresentationItem
{

public:

  
  //! Returns a FaceBound
  Standard_EXPORT StepShape_FaceBound();
  
  Standard_EXPORT virtual   void Init (const Handle(TCollection_HAsciiString)& aName) ;
  
  Standard_EXPORT virtual   void Init (const Handle(TCollection_HAsciiString)& aName, const Handle(StepShape_Loop)& aBound, const Standard_Boolean aOrientation) ;
  
  Standard_EXPORT   void SetBound (const Handle(StepShape_Loop)& aBound) ;
  
  Standard_EXPORT   Handle(StepShape_Loop) Bound()  const;
  
  Standard_EXPORT   void SetOrientation (const Standard_Boolean aOrientation) ;
  
  Standard_EXPORT   Standard_Boolean Orientation()  const;




  DEFINE_STANDARD_RTTI(StepShape_FaceBound)

protected:




private: 


  Handle(StepShape_Loop) bound;
  Standard_Boolean orientation;


};







#endif // _StepShape_FaceBound_HeaderFile
