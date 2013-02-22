#include "stdafx.h"
#include "GdiplusShunt.h"

//----------------------------------------------------------------------------
// CustomLineCap APIs
//----------------------------------------------------------------------------


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipCreateCustomLineCapPtr)(GpPath* fillPath, GpPath* strokePath,
                  GpLineCap baseCap, REAL baseInset, GpCustomLineCap **customCap));
DEFINE_MEMBER(GdipCreateCustomLineCap);

GpStatus WINGDIPAPI
GdipCreateCustomLineCap(GpPath* fillPath, GpPath* strokePath,
   GpLineCap baseCap, REAL baseInset, GpCustomLineCap **customCap)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipCreateCustomLineCap == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipCreateCustomLineCap);
        }
        if ( g_GdipCreateCustomLineCap != NULL )
        {
            status = (*g_GdipCreateCustomLineCap)(fillPath, strokePath, baseCap, baseInset, customCap);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipDeleteCustomLineCapPtr)(GpCustomLineCap* customCap));
DEFINE_MEMBER(GdipDeleteCustomLineCap);

GpStatus WINGDIPAPI
GdipDeleteCustomLineCap(GpCustomLineCap* customCap)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipDeleteCustomLineCap == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipDeleteCustomLineCap);
        }
        if ( g_GdipDeleteCustomLineCap != NULL )
        {
            status = (*g_GdipDeleteCustomLineCap)(customCap);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipCloneCustomLineCapPtr)(GpCustomLineCap* customCap,
                       GpCustomLineCap** clonedCap));
DEFINE_MEMBER(GdipCloneCustomLineCap);

GpStatus WINGDIPAPI
GdipCloneCustomLineCap(GpCustomLineCap* customCap,
                       GpCustomLineCap** clonedCap)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipCloneCustomLineCap == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipCloneCustomLineCap);
        }
        if ( g_GdipCloneCustomLineCap != NULL )
        {
            status = (*g_GdipCloneCustomLineCap)(customCap, clonedCap);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetCustomLineCapTypePtr)(GpCustomLineCap* customCap,
                       CustomLineCapType* capType));
DEFINE_MEMBER(GdipGetCustomLineCapType);

GpStatus WINGDIPAPI
GdipGetCustomLineCapType(GpCustomLineCap* customCap,
                       CustomLineCapType* capType)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipGetCustomLineCapType == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetCustomLineCapType);
        }
        if ( g_GdipGetCustomLineCapType != NULL )
        {
            status = (*g_GdipGetCustomLineCapType)(customCap, capType);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetCustomLineCapStrokeCapsPtr)(GpCustomLineCap* customCap,
                               GpLineCap startCap, GpLineCap endCap));
DEFINE_MEMBER(GdipSetCustomLineCapStrokeCaps);

GpStatus WINGDIPAPI
GdipSetCustomLineCapStrokeCaps(GpCustomLineCap* customCap,
                               GpLineCap startCap, GpLineCap endCap)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipSetCustomLineCapStrokeCaps == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipSetCustomLineCapStrokeCaps);
        }
        if ( g_GdipSetCustomLineCapStrokeCaps != NULL )
        {
            status = (*g_GdipSetCustomLineCapStrokeCaps)(customCap, startCap, endCap);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetCustomLineCapStrokeCapsPtr)(GpCustomLineCap* customCap,
                               GpLineCap* startCap, GpLineCap* endCap));
DEFINE_MEMBER(GdipGetCustomLineCapStrokeCaps);

GpStatus WINGDIPAPI
GdipGetCustomLineCapStrokeCaps(GpCustomLineCap* customCap,
                               GpLineCap* startCap, GpLineCap* endCap)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipGetCustomLineCapStrokeCaps == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetCustomLineCapStrokeCaps);
        }
        if ( g_GdipGetCustomLineCapStrokeCaps != NULL )
        {
            status = (*g_GdipGetCustomLineCapStrokeCaps)(customCap, startCap, endCap);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetCustomLineCapStrokeJoinPtr)(GpCustomLineCap* customCap, 
                               GpLineJoin lineJoin));
DEFINE_MEMBER(GdipSetCustomLineCapStrokeJoin);

GpStatus WINGDIPAPI
GdipSetCustomLineCapStrokeJoin(GpCustomLineCap* customCap, 
                               GpLineJoin lineJoin)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipSetCustomLineCapStrokeJoin == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipSetCustomLineCapStrokeJoin);
        }
        if ( g_GdipSetCustomLineCapStrokeJoin != NULL )
        {
            status = (*g_GdipSetCustomLineCapStrokeJoin)(customCap, lineJoin);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetCustomLineCapStrokeJoinPtr)(GpCustomLineCap* customCap, GpLineJoin* lineJoin));
DEFINE_MEMBER(GdipGetCustomLineCapStrokeJoin);

GpStatus WINGDIPAPI
GdipGetCustomLineCapStrokeJoin(GpCustomLineCap* customCap, 
                               GpLineJoin* lineJoin)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipGetCustomLineCapStrokeJoin == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetCustomLineCapStrokeJoin);
        }
        if ( g_GdipGetCustomLineCapStrokeJoin != NULL )
        {
            status = (*g_GdipGetCustomLineCapStrokeJoin)(customCap, lineJoin);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetCustomLineCapBaseCapPtr)(GpCustomLineCap* customCap, GpLineCap baseCap));
DEFINE_MEMBER(GdipSetCustomLineCapBaseCap);

GpStatus WINGDIPAPI
GdipSetCustomLineCapBaseCap(GpCustomLineCap* customCap, GpLineCap baseCap)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipSetCustomLineCapBaseCap == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipSetCustomLineCapBaseCap);
        }
        if ( g_GdipSetCustomLineCapBaseCap != NULL )
        {
            status = (*g_GdipSetCustomLineCapBaseCap)(customCap, baseCap);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetCustomLineCapBaseCapPtr)(GpCustomLineCap* customCap, GpLineCap* baseCap));
DEFINE_MEMBER(GdipGetCustomLineCapBaseCap);

GpStatus WINGDIPAPI
GdipGetCustomLineCapBaseCap(GpCustomLineCap* customCap, GpLineCap* baseCap)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipGetCustomLineCapBaseCap == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetCustomLineCapBaseCap);
        }
        if ( g_GdipGetCustomLineCapBaseCap != NULL )
        {
            status = (*g_GdipGetCustomLineCapBaseCap)(customCap, baseCap);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetCustomLineCapBaseInsetPtr)(GpCustomLineCap* customCap, REAL inset));
DEFINE_MEMBER(GdipSetCustomLineCapBaseInset);

GpStatus WINGDIPAPI
GdipSetCustomLineCapBaseInset(GpCustomLineCap* customCap, REAL inset)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipSetCustomLineCapBaseInset == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipSetCustomLineCapBaseInset);
        }
        if ( g_GdipSetCustomLineCapBaseInset != NULL )
        {
            status = (*g_GdipSetCustomLineCapBaseInset)(customCap, inset);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetCustomLineCapBaseInsetPtr)(GpCustomLineCap* customCap, REAL* inset));
DEFINE_MEMBER(GdipGetCustomLineCapBaseInset);

GpStatus WINGDIPAPI
GdipGetCustomLineCapBaseInset(GpCustomLineCap* customCap, REAL* inset)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipGetCustomLineCapBaseInset == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetCustomLineCapBaseInset);
        }
        if ( g_GdipGetCustomLineCapBaseInset != NULL )
        {
            status = (*g_GdipGetCustomLineCapBaseInset)(customCap, inset);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetCustomLineCapWidthScalePtr)(GpCustomLineCap* customCap, REAL widthScale));
DEFINE_MEMBER(GdipSetCustomLineCapWidthScale);

GpStatus WINGDIPAPI
GdipSetCustomLineCapWidthScale(GpCustomLineCap* customCap, REAL widthScale)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipSetCustomLineCapWidthScale == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipSetCustomLineCapWidthScale);
        }
        if ( g_GdipSetCustomLineCapWidthScale != NULL )
        {
            status = (*g_GdipSetCustomLineCapWidthScale)(customCap, widthScale);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetCustomLineCapWidthScalePtr)(GpCustomLineCap* customCap, REAL* widthScale));
DEFINE_MEMBER(GdipGetCustomLineCapWidthScale);

GpStatus WINGDIPAPI
GdipGetCustomLineCapWidthScale(GpCustomLineCap* customCap, REAL* widthScale)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipGetCustomLineCapWidthScale == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetCustomLineCapWidthScale);
        }
        if ( g_GdipGetCustomLineCapWidthScale != NULL )
        {
            status = (*g_GdipGetCustomLineCapWidthScale)(customCap, widthScale);
        }
    }
    return status;
}

//----------------------------------------------------------------------------
// AdjustableArrowCap APIs
//----------------------------------------------------------------------------

DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipCreateAdjustableArrowCapPtr)(REAL height, REAL width, BOOL isFilled,
                             GpAdjustableArrowCap **cap));
DEFINE_MEMBER(GdipCreateAdjustableArrowCap);

GpStatus WINGDIPAPI
GdipCreateAdjustableArrowCap(REAL height, REAL width, BOOL isFilled,
                             GpAdjustableArrowCap **cap)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipCreateAdjustableArrowCap == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipCreateAdjustableArrowCap);
        }
        if ( g_GdipCreateAdjustableArrowCap != NULL )
        {
            status = (*g_GdipCreateAdjustableArrowCap)(height, width, isFilled, cap);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetAdjustableArrowCapHeightPtr)(GpAdjustableArrowCap* cap, REAL height));
DEFINE_MEMBER(GdipSetAdjustableArrowCapHeight);

GpStatus WINGDIPAPI
GdipSetAdjustableArrowCapHeight(GpAdjustableArrowCap* cap, REAL height)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipSetAdjustableArrowCapHeight == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipSetAdjustableArrowCapHeight);
        }
        if ( g_GdipSetAdjustableArrowCapHeight != NULL )
        {
            status = (*g_GdipSetAdjustableArrowCapHeight)(cap, height);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetAdjustableArrowCapHeightPtr)(GpAdjustableArrowCap* cap, REAL* height));
DEFINE_MEMBER(GdipGetAdjustableArrowCapHeight);

GpStatus WINGDIPAPI
GdipGetAdjustableArrowCapHeight(GpAdjustableArrowCap* cap, REAL* height)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipGetAdjustableArrowCapHeight == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetAdjustableArrowCapHeight);
        }
        if ( g_GdipGetAdjustableArrowCapHeight != NULL )
        {
            status = (*g_GdipGetAdjustableArrowCapHeight)(cap, height);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetAdjustableArrowCapWidthPtr)(GpAdjustableArrowCap* cap, REAL width));
DEFINE_MEMBER(GdipSetAdjustableArrowCapWidth);

GpStatus WINGDIPAPI
GdipSetAdjustableArrowCapWidth(GpAdjustableArrowCap* cap, REAL width)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipSetAdjustableArrowCapWidth == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipSetAdjustableArrowCapWidth);
        }
        if ( g_GdipSetAdjustableArrowCapWidth != NULL )
        {
            status = (*g_GdipSetAdjustableArrowCapWidth)(cap, width);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetAdjustableArrowCapWidthPtr)(GpAdjustableArrowCap* cap, REAL* width));
DEFINE_MEMBER(GdipGetAdjustableArrowCapWidth);

GpStatus WINGDIPAPI
GdipGetAdjustableArrowCapWidth(GpAdjustableArrowCap* cap, REAL* width)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipGetAdjustableArrowCapWidth == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetAdjustableArrowCapWidth);
        }
        if ( g_GdipGetAdjustableArrowCapWidth != NULL )
        {
            status = (*g_GdipGetAdjustableArrowCapWidth)(cap, width);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetAdjustableArrowCapMiddleInsetPtr)(GpAdjustableArrowCap* cap, 
                                     REAL middleInset));
DEFINE_MEMBER(GdipSetAdjustableArrowCapMiddleInset);

GpStatus WINGDIPAPI
GdipSetAdjustableArrowCapMiddleInset(GpAdjustableArrowCap* cap, 
                                     REAL middleInset)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipSetAdjustableArrowCapMiddleInset == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipSetAdjustableArrowCapMiddleInset);
        }
        if ( g_GdipSetAdjustableArrowCapMiddleInset != NULL )
        {
            status = (*g_GdipSetAdjustableArrowCapMiddleInset)(cap, middleInset);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetAdjustableArrowCapMiddleInsetPtr)(GpAdjustableArrowCap* cap, 
                                     REAL* middleInset));
DEFINE_MEMBER(GdipGetAdjustableArrowCapMiddleInset);

GpStatus WINGDIPAPI
GdipGetAdjustableArrowCapMiddleInset(GpAdjustableArrowCap* cap, 
                                     REAL* middleInset)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipGetAdjustableArrowCapMiddleInset == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetAdjustableArrowCapMiddleInset);
        }
        if ( g_GdipGetAdjustableArrowCapMiddleInset != NULL )
        {
            status = (*g_GdipGetAdjustableArrowCapMiddleInset)(cap, middleInset);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetAdjustableArrowCapFillStatePtr)(GpAdjustableArrowCap* cap, BOOL fillState));
DEFINE_MEMBER(GdipSetAdjustableArrowCapFillState);

GpStatus WINGDIPAPI
GdipSetAdjustableArrowCapFillState(GpAdjustableArrowCap* cap, BOOL fillState)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipSetAdjustableArrowCapFillState == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipSetAdjustableArrowCapFillState);
        }
        if ( g_GdipSetAdjustableArrowCapFillState != NULL )
        {
            status = (*g_GdipSetAdjustableArrowCapFillState)(cap, fillState);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetAdjustableArrowCapFillStatePtr)(GpAdjustableArrowCap* cap, BOOL* fillState));
DEFINE_MEMBER(GdipGetAdjustableArrowCapFillState);

GpStatus WINGDIPAPI
GdipGetAdjustableArrowCapFillState(GpAdjustableArrowCap* cap, BOOL* fillState)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipGetAdjustableArrowCapFillState == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetAdjustableArrowCapFillState);
        }
        if ( g_GdipGetAdjustableArrowCapFillState != NULL )
        {
            status = (*g_GdipGetAdjustableArrowCapFillState)(cap, fillState);
        }
    }
    return status;
}


//----------------------------------------------------------------------------
// Platform Shunt
//----------------------------------------------------------------------------

VOID WINAPI
Gdiplus_CapInit()
{
}

