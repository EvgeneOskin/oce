// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BOPTools_HeaderFile
#define _BOPTools_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <BOPCol_MapOfShape.hxx>
#include <BOPCol_IndexedMapOfShape.hxx>
#include <TopAbs_ShapeEnum.hxx>
#include <BOPCol_IndexedDataMapOfShapeListOfShape.hxx>
class TopoDS_Shape;
class BOPTools_ShapeSet;
class BOPTools_EdgeSet;
class BOPTools_AlgoTools;
class BOPTools_Set;
class BOPTools_SetMapHasher;
class BOPTools_AlgoTools2D;
class BOPTools_AlgoTools3D;



class BOPTools 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT static   void MapShapes (const TopoDS_Shape& S, BOPCol_MapOfShape& M) ;
  
  Standard_EXPORT static   void MapShapes (const TopoDS_Shape& S, BOPCol_IndexedMapOfShape& M) ;
  
  Standard_EXPORT static   void MapShapes (const TopoDS_Shape& S, const TopAbs_ShapeEnum T, BOPCol_IndexedMapOfShape& M) ;
  
  Standard_EXPORT static   void MapShapesAndAncestors (const TopoDS_Shape& S, const TopAbs_ShapeEnum TS, const TopAbs_ShapeEnum TA, BOPCol_IndexedDataMapOfShapeListOfShape& M) ;




protected:





private:




friend class BOPTools_ShapeSet;
friend class BOPTools_EdgeSet;
friend class BOPTools_AlgoTools;
friend class BOPTools_Set;
friend class BOPTools_SetMapHasher;
friend class BOPTools_AlgoTools2D;
friend class BOPTools_AlgoTools3D;

};







#endif // _BOPTools_HeaderFile
