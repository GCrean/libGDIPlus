#include "stdafx.h"
#include "GdiplusShunt.h"

//----------------------------------------------------------------------------
// Region APIs
//----------------------------------------------------------------------------


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipCreateRegionPtr)(GpRegion **region));
DEFINE_MEMBER(GdipCreateRegion);

GpStatus WINGDIPAPI
GdipCreateRegion(GpRegion **region)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipCreateRegion == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipCreateRegion);
        }
        if ( g_GdipCreateRegion != NULL )
        {
            status = (*g_GdipCreateRegion)(region);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipCreateRegionRectPtr)(GDIPCONST GpRectF *rect, GpRegion **region));
DEFINE_MEMBER(GdipCreateRegionRect);

GpStatus WINGDIPAPI
GdipCreateRegionRect(GDIPCONST GpRectF *rect, GpRegion **region)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipCreateRegionRect == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipCreateRegionRect);
        }
        if ( g_GdipCreateRegionRect != NULL )
        {
            status = (*g_GdipCreateRegionRect)(rect, region);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipCreateRegionRectIPtr)(GDIPCONST GpRect *rect, GpRegion **region));
DEFINE_MEMBER(GdipCreateRegionRectI);

GpStatus WINGDIPAPI
GdipCreateRegionRectI(GDIPCONST GpRect *rect, GpRegion **region)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipCreateRegionRectI == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipCreateRegionRectI);
        }
        if ( g_GdipCreateRegionRectI != NULL )
        {
            status = (*g_GdipCreateRegionRectI)(rect, region);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipCreateRegionPathPtr)(GpPath *path, GpRegion **region));
DEFINE_MEMBER(GdipCreateRegionPath);

GpStatus WINGDIPAPI
GdipCreateRegionPath(GpPath *path, GpRegion **region)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipCreateRegionPath == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipCreateRegionPath);
        }
        if ( g_GdipCreateRegionPath != NULL )
        {
            status = (*g_GdipCreateRegionPath)(path, region);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipCreateRegionRgnDataPtr)(GDIPCONST BYTE *regionData, INT size, 
                                       GpRegion **region));
DEFINE_MEMBER(GdipCreateRegionRgnData);

GpStatus WINGDIPAPI
GdipCreateRegionRgnData(GDIPCONST BYTE *regionData, INT size, 
                        GpRegion **region)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipCreateRegionRgnData == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipCreateRegionRgnData);
        }
        if ( g_GdipCreateRegionRgnData != NULL )
        {
            status = (*g_GdipCreateRegionRgnData)(regionData, size, region);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipCreateRegionHrgnPtr)(HRGN hRgn, GpRegion **region));
DEFINE_MEMBER(GdipCreateRegionHrgn);

GpStatus WINGDIPAPI
GdipCreateRegionHrgn(HRGN hRgn, GpRegion **region)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipCreateRegionHrgn == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipCreateRegionHrgn);
        }
        if ( g_GdipCreateRegionHrgn != NULL )
        {
            status = (*g_GdipCreateRegionHrgn)(hRgn, region);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipCloneRegionPtr)(GpRegion *region, GpRegion **cloneRegion));
DEFINE_MEMBER(GdipCloneRegion);

GpStatus WINGDIPAPI
GdipCloneRegion(GpRegion *region, GpRegion **cloneRegion)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipCloneRegion == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipCloneRegion);
        }
        if ( g_GdipCloneRegion != NULL )
        {
            status = (*g_GdipCloneRegion)(region, cloneRegion);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipDeleteRegionPtr)(GpRegion *region));
DEFINE_MEMBER(GdipDeleteRegion);

GpStatus WINGDIPAPI
GdipDeleteRegion(GpRegion *region)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipDeleteRegion == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipDeleteRegion);
        }
        if ( g_GdipDeleteRegion != NULL )
        {
            status = (*g_GdipDeleteRegion)(region);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetInfinitePtr)(GpRegion *region));
DEFINE_MEMBER(GdipSetInfinite);

GpStatus WINGDIPAPI
GdipSetInfinite(GpRegion *region)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipSetInfinite == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipSetInfinite);
        }
        if ( g_GdipSetInfinite != NULL )
        {
            status = (*g_GdipSetInfinite)(region);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetEmptyPtr)(GpRegion *region));
DEFINE_MEMBER(GdipSetEmpty);

GpStatus WINGDIPAPI
GdipSetEmpty(GpRegion *region)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipSetEmpty == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipSetEmpty);
        }
        if ( g_GdipSetEmpty != NULL )
        {
            status = (*g_GdipSetEmpty)(region);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipCombineRegionRectPtr)(GpRegion *region, GDIPCONST GpRectF *rect,
                                     CombineMode combineMode));
DEFINE_MEMBER(GdipCombineRegionRect);

GpStatus WINGDIPAPI
GdipCombineRegionRect(GpRegion *region, GDIPCONST GpRectF *rect,
                      CombineMode combineMode)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipCombineRegionRect == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipCombineRegionRect);
        }
        if ( g_GdipCombineRegionRect != NULL )
        {
            status = (*g_GdipCombineRegionRect)(region, rect, combineMode);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipCombineRegionRectIPtr)(GpRegion *region, GDIPCONST GpRect *rect,
                                      CombineMode combineMode));
DEFINE_MEMBER(GdipCombineRegionRectI);

GpStatus WINGDIPAPI
GdipCombineRegionRectI(GpRegion *region, GDIPCONST GpRect *rect,
                       CombineMode combineMode)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipCombineRegionRectI == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipCombineRegionRectI);
        }
        if ( g_GdipCombineRegionRectI != NULL )
        {
            status = (*g_GdipCombineRegionRectI)(region, rect, combineMode);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipCombineRegionPathPtr)(GpRegion *region, GpPath *path, CombineMode combineMode));
DEFINE_MEMBER(GdipCombineRegionPath);

GpStatus WINGDIPAPI
GdipCombineRegionPath(GpRegion *region, GpPath *path, CombineMode combineMode)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipCombineRegionPath == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipCombineRegionPath);
        }
        if ( g_GdipCombineRegionPath != NULL )
        {
            status = (*g_GdipCombineRegionPath)(region, path, combineMode);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipCombineRegionRegionPtr)(GpRegion *region,  GpRegion *region2,
                                       CombineMode combineMode));
DEFINE_MEMBER(GdipCombineRegionRegion);

GpStatus WINGDIPAPI
GdipCombineRegionRegion(GpRegion *region,  GpRegion *region2,
                        CombineMode combineMode)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipCombineRegionRegion == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipCombineRegionRegion);
        }
        if ( g_GdipCombineRegionRegion != NULL )
        {
            status = (*g_GdipCombineRegionRegion)(region, region2, combineMode);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipTranslateRegionPtr)(GpRegion *region, REAL dx, REAL dy));
DEFINE_MEMBER(GdipTranslateRegion);

GpStatus WINGDIPAPI
GdipTranslateRegion(GpRegion *region, REAL dx, REAL dy)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipTranslateRegion == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipTranslateRegion);
        }
        if ( g_GdipTranslateRegion != NULL )
        {
            status = (*g_GdipTranslateRegion)(region, dx, dy);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipTranslateRegionIPtr)(GpRegion *region, INT dx, INT dy));
DEFINE_MEMBER(GdipTranslateRegionI);

GpStatus WINGDIPAPI
GdipTranslateRegionI(GpRegion *region, INT dx, INT dy)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipTranslateRegionI == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipTranslateRegionI);
        }
        if ( g_GdipTranslateRegionI != NULL )
        {
            status = (*g_GdipTranslateRegionI)(region, dx, dy);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipTransformRegionPtr)(GpRegion *region, GpMatrix *matrix));
DEFINE_MEMBER(GdipTransformRegion);

GpStatus WINGDIPAPI
GdipTransformRegion(GpRegion *region, GpMatrix *matrix)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipTransformRegion == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipTransformRegion);
        }
        if ( g_GdipTransformRegion != NULL )
        {
            status = (*g_GdipTransformRegion)(region, matrix);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetRegionBoundsPtr)(GpRegion *region, GpGraphics *graphics,
               GpRectF *rect));
DEFINE_MEMBER(GdipGetRegionBounds);

GpStatus WINGDIPAPI
GdipGetRegionBounds(GpRegion *region, GpGraphics *graphics,
                             GpRectF *rect)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetRegionBounds == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetRegionBounds);
        }
        if ( g_GdipGetRegionBounds != NULL )
        {
            status = (*g_GdipGetRegionBounds)(region, graphics, rect);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetRegionBoundsIPtr)(GpRegion *region, GpGraphics *graphics,
               GpRect *rect));
DEFINE_MEMBER(GdipGetRegionBoundsI);

GpStatus WINGDIPAPI
GdipGetRegionBoundsI(GpRegion *region, GpGraphics *graphics,
                             GpRect *rect)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetRegionBoundsI == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetRegionBoundsI);
        }
        if ( g_GdipGetRegionBoundsI != NULL )
        {
            status = (*g_GdipGetRegionBoundsI)(region, graphics, rect);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetRegionHRgnPtr)(GpRegion *region, GpGraphics *graphics, HRGN *hRgn));
DEFINE_MEMBER(GdipGetRegionHRgn);

GpStatus WINGDIPAPI
GdipGetRegionHRgn(GpRegion *region, GpGraphics *graphics, HRGN *hRgn)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetRegionHRgn == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetRegionHRgn);
        }
        if ( g_GdipGetRegionHRgn != NULL )
        {
            status = (*g_GdipGetRegionHRgn)(region, graphics, hRgn);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipIsEmptyRegionPtr)(GpRegion *region, GpGraphics *graphics,
               BOOL *result));
DEFINE_MEMBER(GdipIsEmptyRegion);

GpStatus WINGDIPAPI
GdipIsEmptyRegion(GpRegion *region, GpGraphics *graphics, BOOL *result)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipIsEmptyRegion == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipIsEmptyRegion);
        }
        if ( g_GdipIsEmptyRegion != NULL )
        {
            status = (*g_GdipIsEmptyRegion)(region, graphics, result);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipIsInfiniteRegionPtr)(GpRegion *region, GpGraphics *graphics,
               BOOL *result));
DEFINE_MEMBER(GdipIsInfiniteRegion);

GpStatus WINGDIPAPI
GdipIsInfiniteRegion(GpRegion *region, GpGraphics *graphics,
                              BOOL *result)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipIsInfiniteRegion == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipIsInfiniteRegion);
        }
        if ( g_GdipIsInfiniteRegion != NULL )
        {
            status = (*g_GdipIsInfiniteRegion)(region, graphics, result);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipIsEqualRegionPtr)(GpRegion *region, GpRegion *region2,
               GpGraphics *graphics, BOOL *result));
DEFINE_MEMBER(GdipIsEqualRegion);

GpStatus WINGDIPAPI
GdipIsEqualRegion(GpRegion *region, GpRegion *region2,
                           GpGraphics *graphics, BOOL *result)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipIsEqualRegion == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipIsEqualRegion);
        }
        if ( g_GdipIsEqualRegion != NULL )
        {
            status = (*g_GdipIsEqualRegion)(region, region2, graphics, result);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetRegionDataSizePtr)(GpRegion *region, UINT * bufferSize));
DEFINE_MEMBER(GdipGetRegionDataSize);

GpStatus WINGDIPAPI
GdipGetRegionDataSize(GpRegion *region, UINT * bufferSize)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetRegionDataSize == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetRegionDataSize);
        }
        if ( g_GdipGetRegionDataSize != NULL )
        {
            status = (*g_GdipGetRegionDataSize)(region, bufferSize);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetRegionDataPtr)(GpRegion *region, BYTE * buffer, UINT bufferSize, 
               UINT * sizeFilled));
DEFINE_MEMBER(GdipGetRegionData);

GpStatus WINGDIPAPI
GdipGetRegionData(GpRegion *region, BYTE * buffer, UINT bufferSize, 
                  UINT * sizeFilled)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetRegionData == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetRegionData);
        }
        if ( g_GdipGetRegionData != NULL )
        {
            status = (*g_GdipGetRegionData)(region, buffer, bufferSize, sizeFilled);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipIsVisibleRegionPointPtr)(GpRegion *region, REAL x, REAL y,
               GpGraphics *graphics, BOOL *result));
DEFINE_MEMBER(GdipIsVisibleRegionPoint);

GpStatus WINGDIPAPI
GdipIsVisibleRegionPoint(GpRegion *region, REAL x, REAL y,
                                  GpGraphics *graphics, BOOL *result)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipIsVisibleRegionPoint == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipIsVisibleRegionPoint);
        }
        if ( g_GdipIsVisibleRegionPoint != NULL )
        {
            status = (*g_GdipIsVisibleRegionPoint)(region, x, y, graphics, result);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipIsVisibleRegionPointIPtr)(GpRegion *region, INT x, INT y,
               GpGraphics *graphics, BOOL *result));
DEFINE_MEMBER(GdipIsVisibleRegionPointI);

GpStatus WINGDIPAPI
GdipIsVisibleRegionPointI(GpRegion *region, INT x, INT y,
                                  GpGraphics *graphics, BOOL *result)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipIsVisibleRegionPointI == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipIsVisibleRegionPointI);
        }
        if ( g_GdipIsVisibleRegionPointI != NULL )
        {
            status = (*g_GdipIsVisibleRegionPointI)(region, x, y, graphics, result);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipIsVisibleRegionRectPtr)(GpRegion *region, REAL x, REAL y, REAL width,
                REAL height, GpGraphics *graphics, BOOL *result));
DEFINE_MEMBER(GdipIsVisibleRegionRect);

GpStatus WINGDIPAPI
GdipIsVisibleRegionRect(GpRegion *region, REAL x, REAL y, REAL width,
                        REAL height, GpGraphics *graphics, BOOL *result)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipIsVisibleRegionRect == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipIsVisibleRegionRect);
        }
        if ( g_GdipIsVisibleRegionRect != NULL )
        {
            status = (*g_GdipIsVisibleRegionRect)(region, x, y, width, height, graphics, result);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipIsVisibleRegionRectIPtr)(GpRegion *region, INT x, INT y, INT width,
               INT height, GpGraphics *graphics, BOOL *result));
DEFINE_MEMBER(GdipIsVisibleRegionRectI);

GpStatus WINGDIPAPI
GdipIsVisibleRegionRectI(GpRegion *region, INT x, INT y, INT width,
                         INT height, GpGraphics *graphics, BOOL *result)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipIsVisibleRegionRectI == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipIsVisibleRegionRectI);
        }
        if ( g_GdipIsVisibleRegionRectI != NULL )
        {
            status = (*g_GdipIsVisibleRegionRectI)(region, x, y, width, height, graphics, result);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetRegionScansCountPtr)(GpRegion *region, UINT* count, GpMatrix* matrix));
DEFINE_MEMBER(GdipGetRegionScansCount);

GpStatus WINGDIPAPI
GdipGetRegionScansCount(GpRegion *region, UINT* count, GpMatrix* matrix)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetRegionScansCount == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetRegionScansCount);
        }
        if ( g_GdipGetRegionScansCount != NULL )
        {
            status = (*g_GdipGetRegionScansCount)(region, count, matrix);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetRegionScansPtr)(GpRegion *region, GpRectF* rects, INT* count, 
               GpMatrix* matrix));
DEFINE_MEMBER(GdipGetRegionScans);

GpStatus WINGDIPAPI
GdipGetRegionScans(GpRegion *region, GpRectF* rects, INT* count, 
                   GpMatrix* matrix)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetRegionScans == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetRegionScans);
        }
        if ( g_GdipGetRegionScans != NULL )
        {
            status = (*g_GdipGetRegionScans)(region, rects, count, matrix);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetRegionScansIPtr)(GpRegion *region, GpRect* rects, INT* count, 
                GpMatrix* matrix));
DEFINE_MEMBER(GdipGetRegionScansI);

GpStatus WINGDIPAPI
GdipGetRegionScansI(GpRegion *region, GpRect* rects, INT* count, 
                    GpMatrix* matrix)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetRegionScansI == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetRegionScansI);
        }
        if ( g_GdipGetRegionScansI != NULL )
        {
            status = (*g_GdipGetRegionScansI)(region, rects, count, matrix);
        }
    }
    return status;
}

//----------------------------------------------------------------------------
// Platform Shunt
//----------------------------------------------------------------------------

VOID WINAPI
Gdiplus_RegionInit()
{
}

