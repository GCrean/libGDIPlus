#include "stdafx.h"
#include "GdiplusShunt.h"

//----------------------------------------------------------------------------
// Graphics APIs
//----------------------------------------------------------------------------

DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipFlushPtr)(GpGraphics *graphics, GpFlushIntention intention));
DEFINE_MEMBER(GdipFlush);

GpStatus WINGDIPAPI
GdipFlush(GpGraphics *graphics, GpFlushIntention intention)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipFlush == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipFlush);
        }
        if ( g_GdipFlush != NULL )
        {
            status = (*g_GdipFlush)(graphics, intention);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipCreateFromHDCPtr)(HDC hdc, GpGraphics **graphics));
DEFINE_MEMBER(GdipCreateFromHDC);

GpStatus WINGDIPAPI
GdipCreateFromHDC(HDC hdc, GpGraphics **graphics)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipCreateFromHDC == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipCreateFromHDC);
        }
        if ( g_GdipCreateFromHDC != NULL )
        {
            status = (*g_GdipCreateFromHDC)(hdc, graphics);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipCreateFromHDC2Ptr)(HDC hdc, HANDLE hDevice, GpGraphics **graphics));
DEFINE_MEMBER(GdipCreateFromHDC2);

GpStatus WINGDIPAPI
GdipCreateFromHDC2(HDC hdc, HANDLE hDevice, GpGraphics **graphics)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipCreateFromHDC2 == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipCreateFromHDC2);
        }
        if ( g_GdipCreateFromHDC2 != NULL )
        {
            status = (*g_GdipCreateFromHDC2)(hdc, hDevice, graphics);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipCreateFromHWNDPtr)(HWND hwnd, GpGraphics **graphics));
DEFINE_MEMBER(GdipCreateFromHWND);

GpStatus WINGDIPAPI
GdipCreateFromHWND(HWND hwnd, GpGraphics **graphics)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipCreateFromHWND == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipCreateFromHWND);
        }
        if ( g_GdipCreateFromHWND != NULL )
        {
            status = (*g_GdipCreateFromHWND)(hwnd, graphics);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipCreateFromHWNDICMPtr)(HWND hwnd, GpGraphics **graphics));
DEFINE_MEMBER(GdipCreateFromHWNDICM);

GpStatus WINGDIPAPI
GdipCreateFromHWNDICM(HWND hwnd, GpGraphics **graphics)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipCreateFromHWNDICM == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipCreateFromHWNDICM);
        }
        if ( g_GdipCreateFromHWNDICM != NULL )
        {
            status = (*g_GdipCreateFromHWNDICM)(hwnd, graphics);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipDeleteGraphicsPtr)(GpGraphics *graphics));
DEFINE_MEMBER(GdipDeleteGraphics);

GpStatus WINGDIPAPI
GdipDeleteGraphics(GpGraphics *graphics)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipDeleteGraphics == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipDeleteGraphics);
        }
        if ( g_GdipDeleteGraphics != NULL )
        {
            status = (*g_GdipDeleteGraphics)(graphics);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetDCPtr)(GpGraphics* graphics, HDC * hdc));
DEFINE_MEMBER(GdipGetDC);

GpStatus WINGDIPAPI
GdipGetDC(GpGraphics* graphics, HDC * hdc)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetDC == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetDC);
        }
        if ( g_GdipGetDC != NULL )
        {
            status = (*g_GdipGetDC)(graphics, hdc);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipReleaseDCPtr)(GpGraphics* graphics, HDC hdc));
DEFINE_MEMBER(GdipReleaseDC);

GpStatus WINGDIPAPI
GdipReleaseDC(GpGraphics* graphics, HDC hdc)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipReleaseDC == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipReleaseDC);
        }
        if ( g_GdipReleaseDC != NULL )
        {
            status = (*g_GdipReleaseDC)(graphics, hdc);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetCompositingModePtr)(GpGraphics *graphics, CompositingMode compositingMode));
DEFINE_MEMBER(GdipSetCompositingMode);

GpStatus WINGDIPAPI
GdipSetCompositingMode(GpGraphics *graphics, CompositingMode compositingMode)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipSetCompositingMode == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipSetCompositingMode);
        }
        if ( g_GdipSetCompositingMode != NULL )
        {
            status = (*g_GdipSetCompositingMode)(graphics, compositingMode);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetCompositingModePtr)(GpGraphics *graphics, CompositingMode *compositingMode));
DEFINE_MEMBER(GdipGetCompositingMode);

GpStatus WINGDIPAPI
GdipGetCompositingMode(GpGraphics *graphics, CompositingMode *compositingMode)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetCompositingMode == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetCompositingMode);
        }
        if ( g_GdipGetCompositingMode != NULL )
        {
            status = (*g_GdipGetCompositingMode)(graphics, compositingMode);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetRenderingOriginPtr)(GpGraphics *graphics, INT x, INT y));
DEFINE_MEMBER(GdipSetRenderingOrigin);

GpStatus WINGDIPAPI
GdipSetRenderingOrigin(GpGraphics *graphics, INT x, INT y)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipSetRenderingOrigin == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipSetRenderingOrigin);
        }
        if ( g_GdipSetRenderingOrigin != NULL )
        {
            status = (*g_GdipSetRenderingOrigin)(graphics, x, y);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetRenderingOriginPtr)(GpGraphics *graphics, INT *x, INT *y));
DEFINE_MEMBER(GdipGetRenderingOrigin);

GpStatus WINGDIPAPI
GdipGetRenderingOrigin(GpGraphics *graphics, INT *x, INT *y)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetRenderingOrigin == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetRenderingOrigin);
        }
        if ( g_GdipGetRenderingOrigin != NULL )
        {
            status = (*g_GdipGetRenderingOrigin)(graphics, x, y);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetCompositingQualityPtr)(GpGraphics *graphics, 
                                         CompositingQuality compositingQuality));
DEFINE_MEMBER(GdipSetCompositingQuality);

GpStatus WINGDIPAPI
GdipSetCompositingQuality(GpGraphics *graphics, 
                          CompositingQuality compositingQuality)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipSetCompositingQuality == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipSetCompositingQuality);
        }
        if ( g_GdipSetCompositingQuality != NULL )
        {
            status = (*g_GdipSetCompositingQuality)(graphics, compositingQuality);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetCompositingQualityPtr)(GpGraphics *graphics, 
                                         CompositingQuality *compositingQuality));
DEFINE_MEMBER(GdipGetCompositingQuality);

GpStatus WINGDIPAPI
GdipGetCompositingQuality(GpGraphics *graphics, 
                          CompositingQuality *compositingQuality)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetCompositingQuality == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetCompositingQuality);
        }
        if ( g_GdipGetCompositingQuality != NULL )
        {
            status = (*g_GdipGetCompositingQuality)(graphics, compositingQuality);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetSmoothingModePtr)(GpGraphics *graphics, SmoothingMode smoothingMode));
DEFINE_MEMBER(GdipSetSmoothingMode);

GpStatus WINGDIPAPI
GdipSetSmoothingMode(GpGraphics *graphics, SmoothingMode smoothingMode)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipSetSmoothingMode == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipSetSmoothingMode);
        }
        if ( g_GdipSetSmoothingMode != NULL )
        {
            status = (*g_GdipSetSmoothingMode)(graphics, smoothingMode);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetSmoothingModePtr)(GpGraphics *graphics, SmoothingMode *smoothingMode));
DEFINE_MEMBER(GdipGetSmoothingMode);

GpStatus WINGDIPAPI
GdipGetSmoothingMode(GpGraphics *graphics, SmoothingMode *smoothingMode)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetSmoothingMode == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetSmoothingMode);
        }
        if ( g_GdipGetSmoothingMode != NULL )
        {
            status = (*g_GdipGetSmoothingMode)(graphics, smoothingMode);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetPixelOffsetModePtr)(GpGraphics* graphics, PixelOffsetMode pixelOffsetMode));
DEFINE_MEMBER(GdipSetPixelOffsetMode);

GpStatus WINGDIPAPI
GdipSetPixelOffsetMode(GpGraphics* graphics, PixelOffsetMode pixelOffsetMode)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipSetPixelOffsetMode == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipSetPixelOffsetMode);
        }
        if ( g_GdipSetPixelOffsetMode != NULL )
        {
            status = (*g_GdipSetPixelOffsetMode)(graphics, pixelOffsetMode);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetPixelOffsetModePtr)(GpGraphics *graphics, PixelOffsetMode *pixelOffsetMode));
DEFINE_MEMBER(GdipGetPixelOffsetMode);

GpStatus WINGDIPAPI
GdipGetPixelOffsetMode(GpGraphics *graphics, PixelOffsetMode *pixelOffsetMode)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetPixelOffsetMode == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetPixelOffsetMode);
        }
        if ( g_GdipGetPixelOffsetMode != NULL )
        {
            status = (*g_GdipGetPixelOffsetMode)(graphics, pixelOffsetMode);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetTextRenderingHintPtr)(GpGraphics *graphics, TextRenderingHint mode));
DEFINE_MEMBER(GdipSetTextRenderingHint);

GpStatus WINGDIPAPI
GdipSetTextRenderingHint(GpGraphics *graphics, TextRenderingHint mode)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipSetTextRenderingHint == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipSetTextRenderingHint);
        }
        if ( g_GdipSetTextRenderingHint != NULL )
        {
            status = (*g_GdipSetTextRenderingHint)(graphics, mode);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetTextRenderingHintPtr)(GpGraphics *graphics, TextRenderingHint *mode));
DEFINE_MEMBER(GdipGetTextRenderingHint);

GpStatus WINGDIPAPI
GdipGetTextRenderingHint(GpGraphics *graphics, TextRenderingHint *mode)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetTextRenderingHint == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetTextRenderingHint);
        }
        if ( g_GdipGetTextRenderingHint != NULL )
        {
            status = (*g_GdipGetTextRenderingHint)(graphics, mode);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetTextContrastPtr)(GpGraphics *graphics, UINT contrast));
DEFINE_MEMBER(GdipSetTextContrast);

GpStatus  WINGDIPAPI
GdipSetTextContrast(GpGraphics *graphics, UINT contrast)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipSetTextContrast == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipSetTextContrast);
        }
        if ( g_GdipSetTextContrast != NULL )
        {
            status = (*g_GdipSetTextContrast)(graphics, contrast);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetTextContrastPtr)(GpGraphics *graphics, UINT * contrast));
DEFINE_MEMBER(GdipGetTextContrast);

GpStatus  WINGDIPAPI
GdipGetTextContrast(GpGraphics *graphics, UINT * contrast)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetTextContrast == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetTextContrast);
        }
        if ( g_GdipGetTextContrast != NULL )
        {
            status = (*g_GdipGetTextContrast)(graphics, contrast);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetInterpolationModePtr)(GpGraphics *graphics, 
                                        InterpolationMode interpolationMode));
DEFINE_MEMBER(GdipSetInterpolationMode);

GpStatus WINGDIPAPI
GdipSetInterpolationMode(GpGraphics *graphics, 
                         InterpolationMode interpolationMode)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipSetInterpolationMode == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipSetInterpolationMode);
        }
        if ( g_GdipSetInterpolationMode != NULL )
        {
            status = (*g_GdipSetInterpolationMode)(graphics, interpolationMode);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetInterpolationModePtr)(GpGraphics *graphics, 
                                        InterpolationMode *interpolationMode));
DEFINE_MEMBER(GdipGetInterpolationMode);

GpStatus WINGDIPAPI
GdipGetInterpolationMode(GpGraphics *graphics, 
                         InterpolationMode *interpolationMode)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetInterpolationMode == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetInterpolationMode);
        }
        if ( g_GdipGetInterpolationMode != NULL )
        {
            status = (*g_GdipGetInterpolationMode)(graphics, interpolationMode);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetWorldTransformPtr)(GpGraphics *graphics, GpMatrix *matrix));
DEFINE_MEMBER(GdipSetWorldTransform);

GpStatus WINGDIPAPI
GdipSetWorldTransform(GpGraphics *graphics, GpMatrix *matrix)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipSetWorldTransform == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipSetWorldTransform);
        }
        if ( g_GdipSetWorldTransform != NULL )
        {
            status = (*g_GdipSetWorldTransform)(graphics, matrix);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipResetWorldTransformPtr)(GpGraphics *graphics));
DEFINE_MEMBER(GdipResetWorldTransform);

GpStatus WINGDIPAPI
GdipResetWorldTransform(GpGraphics *graphics)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipResetWorldTransform == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipResetWorldTransform);
        }
        if ( g_GdipResetWorldTransform != NULL )
        {
            status = (*g_GdipResetWorldTransform)(graphics);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipMultiplyWorldTransformPtr)(GpGraphics *graphics, GDIPCONST GpMatrix *matrix,
                                          GpMatrixOrder order));
DEFINE_MEMBER(GdipMultiplyWorldTransform);

GpStatus WINGDIPAPI
GdipMultiplyWorldTransform(GpGraphics *graphics, GDIPCONST GpMatrix *matrix,
                           GpMatrixOrder order)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipMultiplyWorldTransform == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipMultiplyWorldTransform);
        }
        if ( g_GdipMultiplyWorldTransform != NULL )
        {
            status = (*g_GdipMultiplyWorldTransform)(graphics, matrix, order);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipTranslateWorldTransformPtr)(GpGraphics *graphics, REAL dx, REAL dy,
                                           GpMatrixOrder order));
DEFINE_MEMBER(GdipTranslateWorldTransform);

GpStatus WINGDIPAPI
GdipTranslateWorldTransform(GpGraphics *graphics, REAL dx, REAL dy,
                            GpMatrixOrder order)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipTranslateWorldTransform == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipTranslateWorldTransform);
        }
        if ( g_GdipTranslateWorldTransform != NULL )
        {
            status = (*g_GdipTranslateWorldTransform)(graphics, dx, dy, order);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipScaleWorldTransformPtr)(GpGraphics *graphics, REAL sx, REAL sy,
                                       GpMatrixOrder order));
DEFINE_MEMBER(GdipScaleWorldTransform);

GpStatus WINGDIPAPI
GdipScaleWorldTransform(GpGraphics *graphics, REAL sx, REAL sy,
                        GpMatrixOrder order)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipScaleWorldTransform == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipScaleWorldTransform);
        }
        if ( g_GdipScaleWorldTransform != NULL )
        {
            status = (*g_GdipScaleWorldTransform)(graphics, sx, sy, order);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipRotateWorldTransformPtr)(GpGraphics *graphics, REAL angle, 
                                        GpMatrixOrder order));
DEFINE_MEMBER(GdipRotateWorldTransform);

GpStatus WINGDIPAPI
GdipRotateWorldTransform(GpGraphics *graphics, REAL angle, 
                         GpMatrixOrder order)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipRotateWorldTransform == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipRotateWorldTransform);
        }
        if ( g_GdipRotateWorldTransform != NULL )
        {
            status = (*g_GdipRotateWorldTransform)(graphics, angle, order);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetWorldTransformPtr)(GpGraphics *graphics, GpMatrix *matrix));
DEFINE_MEMBER(GdipGetWorldTransform);

GpStatus WINGDIPAPI
GdipGetWorldTransform(GpGraphics *graphics, GpMatrix *matrix)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetWorldTransform == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetWorldTransform);
        }
        if ( g_GdipGetWorldTransform != NULL )
        {
            status = (*g_GdipGetWorldTransform)(graphics, matrix);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipResetPageTransformPtr)(GpGraphics *graphics));
DEFINE_MEMBER(GdipResetPageTransform);

GpStatus WINGDIPAPI
GdipResetPageTransform(GpGraphics *graphics)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipResetPageTransform == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipResetPageTransform);
        }
        if ( g_GdipResetPageTransform != NULL )
        {
            status = (*g_GdipResetPageTransform)(graphics);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetPageUnitPtr)(GpGraphics *graphics, GpUnit *unit));
DEFINE_MEMBER(GdipGetPageUnit);

GpStatus WINGDIPAPI
GdipGetPageUnit(GpGraphics *graphics, GpUnit *unit)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetPageUnit == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetPageUnit);
        }
        if ( g_GdipGetPageUnit != NULL )
        {
            status = (*g_GdipGetPageUnit)(graphics, unit);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetPageScalePtr)(GpGraphics *graphics, REAL *scale));
DEFINE_MEMBER(GdipGetPageScale);

GpStatus WINGDIPAPI
GdipGetPageScale(GpGraphics *graphics, REAL *scale)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetPageScale == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetPageScale);
        }
        if ( g_GdipGetPageScale != NULL )
        {
            status = (*g_GdipGetPageScale)(graphics, scale);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetPageUnitPtr)(GpGraphics *graphics, GpUnit unit));
DEFINE_MEMBER(GdipSetPageUnit);

GpStatus WINGDIPAPI
GdipSetPageUnit(GpGraphics *graphics, GpUnit unit)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipSetPageUnit == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipSetPageUnit);
        }
        if ( g_GdipSetPageUnit != NULL )
        {
            status = (*g_GdipSetPageUnit)(graphics, unit);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetPageScalePtr)(GpGraphics *graphics, REAL scale));
DEFINE_MEMBER(GdipSetPageScale);

GpStatus WINGDIPAPI
GdipSetPageScale(GpGraphics *graphics, REAL scale)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipSetPageScale == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipSetPageScale);
        }
        if ( g_GdipSetPageScale != NULL )
        {
            status = (*g_GdipSetPageScale)(graphics, scale);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetDpiXPtr)(GpGraphics *graphics, REAL* dpi));
DEFINE_MEMBER(GdipGetDpiX);

GpStatus WINGDIPAPI
GdipGetDpiX(GpGraphics *graphics, REAL* dpi)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetDpiX == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetDpiX);
        }
        if ( g_GdipGetDpiX != NULL )
        {
            status = (*g_GdipGetDpiX)(graphics, dpi);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetDpiYPtr)(GpGraphics *graphics, REAL* dpi));
DEFINE_MEMBER(GdipGetDpiY);

GpStatus WINGDIPAPI
GdipGetDpiY(GpGraphics *graphics, REAL* dpi)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetDpiY == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetDpiY);
        }
        if ( g_GdipGetDpiY != NULL )
        {
            status = (*g_GdipGetDpiY)(graphics, dpi);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipTransformPointsPtr)(GpGraphics *graphics, GpCoordinateSpace destSpace,
                                    GpCoordinateSpace srcSpace, GpPointF *points,
                                    INT count));
DEFINE_MEMBER(GdipTransformPoints);

GpStatus WINGDIPAPI
GdipTransformPoints(GpGraphics *graphics, GpCoordinateSpace destSpace,
                             GpCoordinateSpace srcSpace, GpPointF *points,
                             INT count)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipTransformPoints == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipTransformPoints);
        }
        if ( g_GdipTransformPoints != NULL )
        {
            status = (*g_GdipTransformPoints)(graphics, destSpace, srcSpace, points, count);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipTransformPointsIPtr)(GpGraphics *graphics, GpCoordinateSpace destSpace,
                                            GpCoordinateSpace srcSpace, GpPoint *points,
                                                                         INT count));
DEFINE_MEMBER(GdipTransformPointsI);

GpStatus WINGDIPAPI
GdipTransformPointsI(GpGraphics *graphics, GpCoordinateSpace destSpace,
                             GpCoordinateSpace srcSpace, GpPoint *points,
                             INT count)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipTransformPointsI == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipTransformPointsI);
        }
        if ( g_GdipTransformPointsI != NULL )
        {
            status = (*g_GdipTransformPointsI)(graphics, destSpace, srcSpace, points, count);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetNearestColorPtr)(GpGraphics *graphics, ARGB* argb));
DEFINE_MEMBER(GdipGetNearestColor);

GpStatus WINGDIPAPI
GdipGetNearestColor(GpGraphics *graphics, ARGB* argb)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetNearestColor == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetNearestColor);
        }
        if ( g_GdipGetNearestColor != NULL )
        {
            status = (*g_GdipGetNearestColor)(graphics, argb);
        }
    }
    return status;
}


DEFINE_POINTER(HPALETTE (WINGDIPAPI *GdipCreateHalftonePalettePtr)());
DEFINE_MEMBER(GdipCreateHalftonePalette);

// Creates the Win9x Halftone Palette (even on NT) with correct Desktop colors
HPALETTE WINGDIPAPI
GdipCreateHalftonePalette()
{
    HPALETTE pallette = NULL;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipCreateHalftonePalette == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipCreateHalftonePalette);
        }
        if ( g_GdipCreateHalftonePalette != NULL )
        {
            pallette = (*g_GdipCreateHalftonePalette)();
        }
    }
    return pallette;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipDrawLinePtr)(GpGraphics *graphics, GpPen *pen, REAL x1, REAL y1,
                                     REAL x2, REAL y2));
DEFINE_MEMBER(GdipDrawLine);

GpStatus WINGDIPAPI
GdipDrawLine(GpGraphics *graphics, GpPen *pen, REAL x1, REAL y1,
                      REAL x2, REAL y2)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipDrawLine == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipDrawLine);
        }
        if ( g_GdipDrawLine != NULL )
        {
            status = (*g_GdipDrawLine)(graphics, pen, x1, y1, x2, y2);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipDrawLineIPtr)(GpGraphics *graphics, GpPen *pen, INT x1, INT y1,
                                     INT x2, INT y2));
DEFINE_MEMBER(GdipDrawLineI);

GpStatus WINGDIPAPI
GdipDrawLineI(GpGraphics *graphics, GpPen *pen, INT x1, INT y1,
                      INT x2, INT y2)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipDrawLineI == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipDrawLineI);
        }
        if ( g_GdipDrawLineI != NULL )
        {
            status = (*g_GdipDrawLineI)(graphics, pen, x1, y1, x2, y2);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipDrawLinesPtr)(GpGraphics *graphics, GpPen *pen, GDIPCONST GpPointF *points,
                                      INT count));
DEFINE_MEMBER(GdipDrawLines);

GpStatus WINGDIPAPI
GdipDrawLines(GpGraphics *graphics, GpPen *pen, GDIPCONST GpPointF *points,
                       INT count)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipDrawLines == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipDrawLines);
        }
        if ( g_GdipDrawLines != NULL )
        {
            status = (*g_GdipDrawLines)(graphics, pen, points, count);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipDrawLinesIPtr)(GpGraphics *graphics, GpPen *pen, GDIPCONST GpPoint *points,
                                      INT count));
DEFINE_MEMBER(GdipDrawLinesI);

GpStatus WINGDIPAPI
GdipDrawLinesI(GpGraphics *graphics, GpPen *pen, GDIPCONST GpPoint *points,
                       INT count)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipDrawLinesI == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipDrawLinesI);
        }
        if ( g_GdipDrawLinesI != NULL )
        {
            status = (*g_GdipDrawLinesI)(graphics, pen, points, count);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipDrawArcPtr)(GpGraphics *graphics, GpPen *pen, REAL x, REAL y,
                           REAL width, REAL height, REAL startAngle, REAL sweepAngle));
DEFINE_MEMBER(GdipDrawArc);

GpStatus WINGDIPAPI
GdipDrawArc(GpGraphics *graphics, GpPen *pen, REAL x, REAL y,
            REAL width, REAL height, REAL startAngle, REAL sweepAngle)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipDrawArc == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipDrawArc);
        }
        if ( g_GdipDrawArc != NULL )
        {
            status = (*g_GdipDrawArc)(graphics, pen, x, y, width, height, startAngle, sweepAngle);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipDrawArcIPtr)(GpGraphics *graphics, GpPen *pen, INT x, INT y,
                                    INT width, INT height, REAL startAngle, REAL sweepAngle));
DEFINE_MEMBER(GdipDrawArcI);

GpStatus WINGDIPAPI
GdipDrawArcI(GpGraphics *graphics, GpPen *pen, INT x, INT y,
                     INT width, INT height, REAL startAngle, REAL sweepAngle)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipDrawArcI == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipDrawArcI);
        }
        if ( g_GdipDrawArcI != NULL )
        {
            status = (*g_GdipDrawArcI)(graphics, pen, x, y, width, height, startAngle, sweepAngle);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipDrawBezierPtr)(GpGraphics *graphics, GpPen *pen, REAL x1, REAL y1,
                                       REAL x2, REAL y2, REAL x3, REAL y3, REAL x4, REAL y4));
DEFINE_MEMBER(GdipDrawBezier);

GpStatus WINGDIPAPI
GdipDrawBezier(GpGraphics *graphics, GpPen *pen, REAL x1, REAL y1,
                        REAL x2, REAL y2, REAL x3, REAL y3, REAL x4, REAL y4)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipDrawBezier == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipDrawBezier);
        }
        if ( g_GdipDrawBezier != NULL )
        {
            status = (*g_GdipDrawBezier)(graphics, pen, x1, y1, x2, y2, x3, y3, x4, y4);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipDrawBezierIPtr)(GpGraphics *graphics, GpPen *pen, INT x1, INT y1,
                                       INT x2, INT y2, INT x3, INT y3, INT x4, INT y4));
DEFINE_MEMBER(GdipDrawBezierI);

GpStatus WINGDIPAPI
GdipDrawBezierI(GpGraphics *graphics, GpPen *pen, INT x1, INT y1,
                        INT x2, INT y2, INT x3, INT y3, INT x4, INT y4)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipDrawBezierI == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipDrawBezierI);
        }
        if ( g_GdipDrawBezierI != NULL )
        {
            status = (*g_GdipDrawBezierI)(graphics, pen, x1, y1, x2, y2, x3, y3, x4, y4);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipDrawBeziersPtr)(GpGraphics *graphics, GpPen *pen, GDIPCONST GpPointF *points,
                                        INT count));
DEFINE_MEMBER(GdipDrawBeziers);

GpStatus WINGDIPAPI
GdipDrawBeziers(GpGraphics *graphics, GpPen *pen, GDIPCONST GpPointF *points,
                         INT count)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipDrawBeziers == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipDrawBeziers);
        }
        if ( g_GdipDrawBeziers != NULL )
        {
            status = (*g_GdipDrawBeziers)(graphics, pen, points, count);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipDrawBeziersIPtr)(GpGraphics *graphics, GpPen *pen, GDIPCONST GpPoint *points,
                                        INT count));
DEFINE_MEMBER(GdipDrawBeziersI);

GpStatus WINGDIPAPI
GdipDrawBeziersI(GpGraphics *graphics, GpPen *pen, GDIPCONST GpPoint *points,
                         INT count)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipDrawBeziersI == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipDrawBeziersI);
        }
        if ( g_GdipDrawBeziersI != NULL )
        {
            status = (*g_GdipDrawBeziersI)(graphics, pen, points, count);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipDrawRectanglePtr)(GpGraphics *graphics, GpPen *pen, REAL x, REAL y,
                                     REAL width, REAL height));
DEFINE_MEMBER(GdipDrawRectangle);

GpStatus WINGDIPAPI
GdipDrawRectangle(GpGraphics *graphics, GpPen *pen, REAL x, REAL y,
                      REAL width, REAL height)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipDrawRectangle == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipDrawRectangle);
        }
        if ( g_GdipDrawRectangle != NULL )
        {
            status = (*g_GdipDrawRectangle)(graphics, pen, x, y, width, height);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipDrawRectangleIPtr)(GpGraphics *graphics, GpPen *pen, INT x, INT y,
                                     INT width, INT height));
DEFINE_MEMBER(GdipDrawRectangleI);

GpStatus WINGDIPAPI
GdipDrawRectangleI(GpGraphics *graphics, GpPen *pen, INT x, INT y,
                      INT width, INT height)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipDrawRectangleI == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipDrawRectangleI);
        }
        if ( g_GdipDrawRectangleI != NULL )
        {
            status = (*g_GdipDrawRectangleI)(graphics, pen, x, y, width, height);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipDrawRectanglesPtr)(GpGraphics *graphics, GpPen *pen, GDIPCONST GpRectF *rects,
                                      INT count));
DEFINE_MEMBER(GdipDrawRectangles);

GpStatus WINGDIPAPI
GdipDrawRectangles(GpGraphics *graphics, GpPen *pen, GDIPCONST GpRectF *rects,
                       INT count)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipDrawRectangles == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipDrawRectangles);
        }
        if ( g_GdipDrawRectangles != NULL )
        {
            status = (*g_GdipDrawRectangles)(graphics, pen, rects, count);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipDrawRectanglesIPtr)(GpGraphics *graphics, GpPen *pen, GDIPCONST GpRect *rects,
                                      INT count));
DEFINE_MEMBER(GdipDrawRectanglesI);

GpStatus WINGDIPAPI
GdipDrawRectanglesI(GpGraphics *graphics, GpPen *pen, GDIPCONST GpRect *rects,
                       INT count)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipDrawRectanglesI == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipDrawRectanglesI);
        }
        if ( g_GdipDrawRectanglesI != NULL )
        {
            status = (*g_GdipDrawRectanglesI)(graphics, pen, rects, count);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipDrawEllipsePtr)(GpGraphics *graphics, GpPen *pen, REAL x, REAL y,
                                        REAL width, REAL height));
DEFINE_MEMBER(GdipDrawEllipse);

GpStatus WINGDIPAPI
GdipDrawEllipse(GpGraphics *graphics, GpPen *pen, REAL x, REAL y,
                         REAL width, REAL height)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipDrawEllipse == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipDrawEllipse);
        }
        if ( g_GdipDrawEllipse != NULL )
        {
            status = (*g_GdipDrawEllipse)(graphics, pen, x, y, width, height);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipDrawEllipseIPtr)(GpGraphics *graphics, GpPen *pen, INT x, INT y,
                                        INT width, INT height));
DEFINE_MEMBER(GdipDrawEllipseI);

GpStatus WINGDIPAPI
GdipDrawEllipseI(GpGraphics *graphics, GpPen *pen, INT x, INT y,
                         INT width, INT height)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipDrawEllipseI == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipDrawEllipseI);
        }
        if ( g_GdipDrawEllipseI != NULL )
        {
            status = (*g_GdipDrawEllipseI)(graphics, pen, x, y, width, height);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipDrawPiePtr)(GpGraphics *graphics, GpPen *pen, REAL x, REAL y,
                                    REAL width, REAL height, REAL startAngle, 
                                                REAL sweepAngle));
DEFINE_MEMBER(GdipDrawPie);

GpStatus WINGDIPAPI
GdipDrawPie(GpGraphics *graphics, GpPen *pen, REAL x, REAL y,
                     REAL width, REAL height, REAL startAngle, 
            REAL sweepAngle)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipDrawPie == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipDrawPie);
        }
        if ( g_GdipDrawPie != NULL )
        {
            status = (*g_GdipDrawPie)(graphics, pen, x, y, width, height, startAngle, sweepAngle);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipDrawPieIPtr)(GpGraphics *graphics, GpPen *pen, INT x, INT y,
                                    INT width, INT height, REAL startAngle, REAL sweepAngle));
DEFINE_MEMBER(GdipDrawPieI);

GpStatus WINGDIPAPI
GdipDrawPieI(GpGraphics *graphics, GpPen *pen, INT x, INT y,
                     INT width, INT height, REAL startAngle, REAL sweepAngle)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipDrawPieI == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipDrawPieI);
        }
        if ( g_GdipDrawPieI != NULL )
        {
            status = (*g_GdipDrawPieI)(graphics, pen, x, y, width, height, startAngle, sweepAngle);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipDrawPolygonPtr)(GpGraphics *graphics, GpPen *pen, GDIPCONST GpPointF *points,
                                        INT count));
DEFINE_MEMBER(GdipDrawPolygon);

GpStatus WINGDIPAPI
GdipDrawPolygon(GpGraphics *graphics, GpPen *pen, GDIPCONST GpPointF *points,
                         INT count)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipDrawPolygon == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipDrawPolygon);
        }
        if ( g_GdipDrawPolygon != NULL )
        {
            status = (*g_GdipDrawPolygon)(graphics, pen, points, count);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipDrawPolygonIPtr)(GpGraphics *graphics, GpPen *pen, GDIPCONST GpPoint *points,
                                        INT count));
DEFINE_MEMBER(GdipDrawPolygonI);

GpStatus WINGDIPAPI
GdipDrawPolygonI(GpGraphics *graphics, GpPen *pen, GDIPCONST GpPoint *points,
                         INT count)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipDrawPolygonI == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipDrawPolygonI);
        }
        if ( g_GdipDrawPolygonI != NULL )
        {
            status = (*g_GdipDrawPolygonI)(graphics, pen, points, count);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipDrawPathPtr)(GpGraphics *graphics, GpPen *pen, GpPath *path));
DEFINE_MEMBER(GdipDrawPath);

GpStatus WINGDIPAPI
GdipDrawPath(GpGraphics *graphics, GpPen *pen, GpPath *path)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipDrawPath == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipDrawPath);
        }
        if ( g_GdipDrawPath != NULL )
        {
            status = (*g_GdipDrawPath)(graphics, pen, path);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipDrawCurvePtr)(GpGraphics *graphics, GpPen *pen, GDIPCONST GpPointF *points,
                                      INT count));
DEFINE_MEMBER(GdipDrawCurve);

GpStatus WINGDIPAPI
GdipDrawCurve(GpGraphics *graphics, GpPen *pen, GDIPCONST GpPointF *points,
                       INT count)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipDrawCurve == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipDrawCurve);
        }
        if ( g_GdipDrawCurve != NULL )
        {
            status = (*g_GdipDrawCurve)(graphics, pen, points, count);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipDrawCurveIPtr)(GpGraphics *graphics, GpPen *pen, GDIPCONST GpPoint *points,
                                      INT count));
DEFINE_MEMBER(GdipDrawCurveI);

GpStatus WINGDIPAPI
GdipDrawCurveI(GpGraphics *graphics, GpPen *pen, GDIPCONST GpPoint *points,
                       INT count)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipDrawCurveI == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipDrawCurveI);
        }
        if ( g_GdipDrawCurveI != NULL )
        {
            status = (*g_GdipDrawCurveI)(graphics, pen, points, count);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipDrawCurve2Ptr)(GpGraphics *graphics, GpPen *pen, GDIPCONST GpPointF *points,
                                      INT count, REAL tension));
DEFINE_MEMBER(GdipDrawCurve2);

GpStatus WINGDIPAPI
GdipDrawCurve2(GpGraphics *graphics, GpPen *pen, GDIPCONST GpPointF *points,
                       INT count, REAL tension)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipDrawCurve2 == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipDrawCurve2);
        }
        if ( g_GdipDrawCurve2 != NULL )
        {
            status = (*g_GdipDrawCurve2)(graphics, pen, points, count, tension);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipDrawCurve2IPtr)(GpGraphics *graphics, GpPen *pen, GDIPCONST GpPoint *points,
                                      INT count, REAL tension));
DEFINE_MEMBER(GdipDrawCurve2I);

GpStatus WINGDIPAPI
GdipDrawCurve2I(GpGraphics *graphics, GpPen *pen, GDIPCONST GpPoint *points,
                       INT count, REAL tension)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipDrawCurve2I == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipDrawCurve2I);
        }
        if ( g_GdipDrawCurve2I != NULL )
        {
            status = (*g_GdipDrawCurve2I)(graphics, pen, points, count, tension);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipDrawCurve3Ptr)(GpGraphics *graphics, GpPen *pen, GDIPCONST GpPointF *points,
                              INT count, INT offset, INT numberOfSegments, REAL tension));
DEFINE_MEMBER(GdipDrawCurve3);

GpStatus WINGDIPAPI
GdipDrawCurve3(GpGraphics *graphics, GpPen *pen, GDIPCONST GpPointF *points,
               INT count, INT offset, INT numberOfSegments, REAL tension)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipDrawCurve3 == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipDrawCurve3);
        }
        if ( g_GdipDrawCurve3 != NULL )
        {
            status = (*g_GdipDrawCurve3)(graphics, pen, points, count, offset, numberOfSegments, tension);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipDrawCurve3IPtr)(GpGraphics *graphics, GpPen *pen, GDIPCONST GpPoint *points,
                               INT count, INT offset, INT numberOfSegments, REAL tension));
DEFINE_MEMBER(GdipDrawCurve3I);

GpStatus WINGDIPAPI
GdipDrawCurve3I(GpGraphics *graphics, GpPen *pen, GDIPCONST GpPoint *points,
                INT count, INT offset, INT numberOfSegments, REAL tension)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipDrawCurve3I == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipDrawCurve3I);
        }
        if ( g_GdipDrawCurve3I != NULL )
        {
            status = (*g_GdipDrawCurve3I)(graphics, pen, points, count, offset, numberOfSegments, tension);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipDrawClosedCurvePtr)(GpGraphics *graphics, GpPen *pen,
                                   GDIPCONST GpPointF *points, INT count));
DEFINE_MEMBER(GdipDrawClosedCurve);

GpStatus WINGDIPAPI
GdipDrawClosedCurve(GpGraphics *graphics, GpPen *pen,
                    GDIPCONST GpPointF *points, INT count)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipDrawClosedCurve == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipDrawClosedCurve);
        }
        if ( g_GdipDrawClosedCurve != NULL )
        {
            status = (*g_GdipDrawClosedCurve)(graphics, pen, points, count);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipDrawClosedCurveIPtr)(GpGraphics *graphics, GpPen *pen,
                                    GDIPCONST GpPoint *points, INT count));
DEFINE_MEMBER(GdipDrawClosedCurveI);

GpStatus WINGDIPAPI
GdipDrawClosedCurveI(GpGraphics *graphics, GpPen *pen,
                     GDIPCONST GpPoint *points, INT count)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipDrawClosedCurveI == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipDrawClosedCurveI);
        }
        if ( g_GdipDrawClosedCurveI != NULL )
        {
            status = (*g_GdipDrawClosedCurveI)(graphics, pen, points, count);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipDrawClosedCurve2Ptr)(GpGraphics *graphics, GpPen *pen,
                                    GDIPCONST GpPointF *points, INT count, REAL tension));
DEFINE_MEMBER(GdipDrawClosedCurve2);

GpStatus WINGDIPAPI
GdipDrawClosedCurve2(GpGraphics *graphics, GpPen *pen,
                     GDIPCONST GpPointF *points, INT count, REAL tension)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipDrawClosedCurve2 == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipDrawClosedCurve2);
        }
        if ( g_GdipDrawClosedCurve2 != NULL )
        {
            status = (*g_GdipDrawClosedCurve2)(graphics, pen, points, count, tension);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipDrawClosedCurve2IPtr)(GpGraphics *graphics, GpPen *pen,
                                     GDIPCONST GpPoint *points, INT count, REAL tension));
DEFINE_MEMBER(GdipDrawClosedCurve2I);

GpStatus WINGDIPAPI
GdipDrawClosedCurve2I(GpGraphics *graphics, GpPen *pen,
                      GDIPCONST GpPoint *points, INT count, REAL tension)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipDrawClosedCurve2I == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipDrawClosedCurve2I);
        }
        if ( g_GdipDrawClosedCurve2I != NULL )
        {
            status = (*g_GdipDrawClosedCurve2I)(graphics, pen, points, count, tension);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGraphicsClearPtr)(GpGraphics *graphics, ARGB color));
DEFINE_MEMBER(GdipGraphicsClear);

GpStatus WINGDIPAPI
GdipGraphicsClear(GpGraphics *graphics, ARGB color)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGraphicsClear == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGraphicsClear);
        }
        if ( g_GdipGraphicsClear != NULL )
        {
            status = (*g_GdipGraphicsClear)(graphics, color);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipFillRectanglePtr)(GpGraphics *graphics, GpBrush *brush, REAL x, REAL y,
                                 REAL width, REAL height));
DEFINE_MEMBER(GdipFillRectangle);

GpStatus WINGDIPAPI
GdipFillRectangle(GpGraphics *graphics, GpBrush *brush, REAL x, REAL y,
                  REAL width, REAL height)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipFillRectangle == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipFillRectangle);
        }
        if ( g_GdipFillRectangle != NULL )
        {
            status = (*g_GdipFillRectangle)(graphics, brush, x, y, width, height);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipFillRectangleIPtr)(GpGraphics *graphics, GpBrush *brush, INT x, INT y,
                                  INT width, INT height));
DEFINE_MEMBER(GdipFillRectangleI);

GpStatus WINGDIPAPI
GdipFillRectangleI(GpGraphics *graphics, GpBrush *brush, INT x, INT y,
                   INT width, INT height)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipFillRectangleI == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipFillRectangleI);
        }
        if ( g_GdipFillRectangleI != NULL )
        {
            status = (*g_GdipFillRectangleI)(graphics, brush, x, y, width, height);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipFillRectanglesPtr)(GpGraphics *graphics, GpBrush *brush,
                                  GDIPCONST GpRectF *rects, INT count));
DEFINE_MEMBER(GdipFillRectangles);

GpStatus WINGDIPAPI
GdipFillRectangles(GpGraphics *graphics, GpBrush *brush,
                   GDIPCONST GpRectF *rects, INT count)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipFillRectangles == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipFillRectangles);
        }
        if ( g_GdipFillRectangles != NULL )
        {
            status = (*g_GdipFillRectangles)(graphics, brush, rects, count);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipFillRectanglesIPtr)(GpGraphics *graphics, GpBrush *brush,
                                   GDIPCONST GpRect *rects, INT count));
DEFINE_MEMBER(GdipFillRectanglesI);

GpStatus WINGDIPAPI
GdipFillRectanglesI(GpGraphics *graphics, GpBrush *brush,
                    GDIPCONST GpRect *rects, INT count)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipFillRectanglesI == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipFillRectanglesI);
        }
        if ( g_GdipFillRectanglesI != NULL )
        {
            status = (*g_GdipFillRectanglesI)(graphics, brush, rects, count);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipFillPolygonPtr)(GpGraphics *graphics, GpBrush *brush,
                               GDIPCONST GpPointF *points, INT count, GpFillMode fillMode));
DEFINE_MEMBER(GdipFillPolygon);

GpStatus WINGDIPAPI
GdipFillPolygon(GpGraphics *graphics, GpBrush *brush,
                GDIPCONST GpPointF *points, INT count, GpFillMode fillMode)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipFillPolygon == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipFillPolygon);
        }
        if ( g_GdipFillPolygon != NULL )
        {
            status = (*g_GdipFillPolygon)(graphics, brush, points, count, fillMode);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipFillPolygonIPtr)(GpGraphics *graphics, GpBrush *brush,
                                GDIPCONST GpPoint *points, INT count, GpFillMode fillMode));
DEFINE_MEMBER(GdipFillPolygonI);

GpStatus WINGDIPAPI
GdipFillPolygonI(GpGraphics *graphics, GpBrush *brush,
                 GDIPCONST GpPoint *points, INT count, GpFillMode fillMode)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipFillPolygonI == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipFillPolygonI);
        }
        if ( g_GdipFillPolygonI != NULL )
        {
            status = (*g_GdipFillPolygonI)(graphics, brush, points, count, fillMode);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipFillPolygon2Ptr)(GpGraphics *graphics, GpBrush *brush,
                                GDIPCONST GpPointF *points, INT count));
DEFINE_MEMBER(GdipFillPolygon2);

GpStatus WINGDIPAPI
GdipFillPolygon2(GpGraphics *graphics, GpBrush *brush,
                 GDIPCONST GpPointF *points, INT count)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipFillPolygon2 == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipFillPolygon2);
        }
        if ( g_GdipFillPolygon2 != NULL )
        {
            status = (*g_GdipFillPolygon2)(graphics, brush, points, count);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipFillPolygon2IPtr)(GpGraphics *graphics, GpBrush *brush,
                                 GDIPCONST GpPoint *points, INT count));
DEFINE_MEMBER(GdipFillPolygon2I);

GpStatus WINGDIPAPI
GdipFillPolygon2I(GpGraphics *graphics, GpBrush *brush,
                  GDIPCONST GpPoint *points, INT count)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipFillPolygon2I == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipFillPolygon2I);
        }
        if ( g_GdipFillPolygon2I != NULL )
        {
            status = (*g_GdipFillPolygon2I)(graphics, brush, points, count);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipFillEllipsePtr)(GpGraphics *graphics, GpBrush *brush, REAL x, REAL y,
                               REAL width, REAL height));
DEFINE_MEMBER(GdipFillEllipse);

GpStatus WINGDIPAPI
GdipFillEllipse(GpGraphics *graphics, GpBrush *brush, REAL x, REAL y,
                REAL width, REAL height)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipFillEllipse == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipFillEllipse);
        }
        if ( g_GdipFillEllipse != NULL )
        {
            status = (*g_GdipFillEllipse)(graphics, brush, x, y, width, height);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipFillEllipseIPtr)(GpGraphics *graphics, GpBrush *brush, INT x, INT y,
                                INT width, INT height));
DEFINE_MEMBER(GdipFillEllipseI);

GpStatus WINGDIPAPI
GdipFillEllipseI(GpGraphics *graphics, GpBrush *brush, INT x, INT y,
                 INT width, INT height)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipFillEllipseI == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipFillEllipseI);
        }
        if ( g_GdipFillEllipseI != NULL )
        {
            status = (*g_GdipFillEllipseI)(graphics, brush, x, y, width, height);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipFillPiePtr)(GpGraphics *graphics, GpBrush *brush, REAL x, REAL y,
                           REAL width, REAL height, REAL startAngle, REAL sweepAngle));
DEFINE_MEMBER(GdipFillPie);

GpStatus WINGDIPAPI
GdipFillPie(GpGraphics *graphics, GpBrush *brush, REAL x, REAL y,
            REAL width, REAL height, REAL startAngle, REAL sweepAngle)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipFillPie == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipFillPie);
        }
        if ( g_GdipFillPie != NULL )
        {
            status = (*g_GdipFillPie)(graphics, brush, x, y, width, height, startAngle, sweepAngle);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipFillPieIPtr)(GpGraphics *graphics, GpBrush *brush, INT x, INT y,
                            INT width, INT height, REAL startAngle, REAL sweepAngle));
DEFINE_MEMBER(GdipFillPieI);

GpStatus WINGDIPAPI
GdipFillPieI(GpGraphics *graphics, GpBrush *brush, INT x, INT y,
             INT width, INT height, REAL startAngle, REAL sweepAngle)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipFillPieI == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipFillPieI);
        }
        if ( g_GdipFillPieI != NULL )
        {
            status = (*g_GdipFillPieI)(graphics, brush, x, y, width, height, startAngle, sweepAngle);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipFillPathPtr)(GpGraphics *graphics, GpBrush *brush, GpPath *path));
DEFINE_MEMBER(GdipFillPath);

GpStatus WINGDIPAPI
GdipFillPath(GpGraphics *graphics, GpBrush *brush, GpPath *path)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipFillPath == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipFillPath);
        }
        if ( g_GdipFillPath != NULL )
        {
            status = (*g_GdipFillPath)(graphics, brush, path);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipFillClosedCurvePtr)(GpGraphics *graphics, GpBrush *brush,
                                             GDIPCONST GpPointF *points, INT count));
DEFINE_MEMBER(GdipFillClosedCurve);

GpStatus WINGDIPAPI
GdipFillClosedCurve(GpGraphics *graphics, GpBrush *brush,
                              GDIPCONST GpPointF *points, INT count)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipFillClosedCurve == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipFillClosedCurve);
        }
        if ( g_GdipFillClosedCurve != NULL )
        {
            status = (*g_GdipFillClosedCurve)(graphics, brush, points, count);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipFillClosedCurveIPtr)(GpGraphics *graphics, GpBrush *brush,
                                             GDIPCONST GpPoint *points, INT count));
DEFINE_MEMBER(GdipFillClosedCurveI);

GpStatus WINGDIPAPI
GdipFillClosedCurveI(GpGraphics *graphics, GpBrush *brush, GDIPCONST GpPoint *points, INT count)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipFillClosedCurveI == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipFillClosedCurveI);
        }
        if ( g_GdipFillClosedCurveI != NULL )
        {
            status = (*g_GdipFillClosedCurveI)(graphics, brush, points, count);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipFillClosedCurve2Ptr)(GpGraphics *graphics, GpBrush *brush,
                                     GDIPCONST GpPointF *points, INT count,
                                     REAL tension, GpFillMode fillMode));
DEFINE_MEMBER(GdipFillClosedCurve2);

GpStatus WINGDIPAPI
GdipFillClosedCurve2(GpGraphics *graphics, GpBrush *brush,
                              GDIPCONST GpPointF *points, INT count,
                              REAL tension, GpFillMode fillMode)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipFillClosedCurve2 == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipFillClosedCurve2);
        }
        if ( g_GdipFillClosedCurve2 != NULL )
        {
            status = (*g_GdipFillClosedCurve2)(graphics, brush, points, count, tension, fillMode);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipFillClosedCurve2IPtr)(GpGraphics *graphics, GpBrush *brush,
                                             GDIPCONST GpPoint *points, INT count,
                                             REAL tension, GpFillMode fillMode));
DEFINE_MEMBER(GdipFillClosedCurve2I);

GpStatus WINGDIPAPI
GdipFillClosedCurve2I(GpGraphics *graphics, GpBrush *brush,
                              GDIPCONST GpPoint *points, INT count,
                              REAL tension, GpFillMode fillMode)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipFillClosedCurve2I == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipFillClosedCurve2I);
        }
        if ( g_GdipFillClosedCurve2I != NULL )
        {
            status = (*g_GdipFillClosedCurve2I)(graphics, brush, points, count, tension, fillMode);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipFillRegionPtr)(GpGraphics *graphics, GpBrush *brush,
                                       GpRegion *region));
DEFINE_MEMBER(GdipFillRegion);

GpStatus WINGDIPAPI
GdipFillRegion(GpGraphics *graphics, GpBrush *brush,
                        GpRegion *region)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipFillRegion == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipFillRegion);
        }
        if ( g_GdipFillRegion != NULL )
        {
            status = (*g_GdipFillRegion)(graphics, brush, region);
        }
    }
    return status;
}


#if GDIPVER >= 0x0110
DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipDrawImageFXPtr)(
                   GpGraphics *graphics, GpImage *image, GpRectF *source,
                   GpMatrix *xForm, CGpEffect *effect, GpImageAttributes *imageAttributes, GpUnit srcUnit));
DEFINE_MEMBER(GdipDrawImageFX);

GpStatus
WINGDIPAPI
GdipDrawImageFX(
    GpGraphics *graphics,
    GpImage *image,
    GpRectF *source,
    GpMatrix *xForm,
    CGpEffect *effect,
    GpImageAttributes *imageAttributes,
    GpUnit srcUnit
    )
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipDrawImageFX == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule,GdipDrawImageFX);
        }
        if ( g_GdipDrawImageFX != NULL )
        {
            status = (*g_GdipDrawImageFX)(graphics, image, source, xForm, effect, imageAttributes, srcUnit);
        }
    }
    return status;
}
#endif //#if GDIPVER >= 0x0110


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipDrawImagePtr)(GpGraphics *graphics, GpImage *image, REAL x, REAL y));
DEFINE_MEMBER(GdipDrawImage);

GpStatus WINGDIPAPI
GdipDrawImage(GpGraphics *graphics, GpImage *image, REAL x, REAL y)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipDrawImage == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipDrawImage);
        }
        if ( g_GdipDrawImage != NULL )
        {
            status = (*g_GdipDrawImage)(graphics, image, x, y);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipDrawImageIPtr)(GpGraphics *graphics, GpImage *image, INT x, INT y));
DEFINE_MEMBER(GdipDrawImageI);

GpStatus WINGDIPAPI
GdipDrawImageI(GpGraphics *graphics, GpImage *image, INT x, INT y)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipDrawImageI == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipDrawImageI);
        }
        if ( g_GdipDrawImageI != NULL )
        {
            status = (*g_GdipDrawImageI)(graphics, image, x, y);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipDrawImageRectPtr)(GpGraphics *graphics, GpImage *image, REAL x, REAL y,
                                          REAL width, REAL height));
DEFINE_MEMBER(GdipDrawImageRect);

GpStatus WINGDIPAPI
GdipDrawImageRect(GpGraphics *graphics, GpImage *image, REAL x, REAL y,
                           REAL width, REAL height)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipDrawImageRect == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipDrawImageRect);
        }
        if ( g_GdipDrawImageRect != NULL )
        {
            status = (*g_GdipDrawImageRect)(graphics, image, x, y, width, height);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipDrawImageRectIPtr)(GpGraphics *graphics, GpImage *image, INT x, INT y,
                                          INT width, INT height));
DEFINE_MEMBER(GdipDrawImageRectI);

GpStatus WINGDIPAPI
GdipDrawImageRectI(GpGraphics *graphics, GpImage *image, INT x, INT y,
                           INT width, INT height)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipDrawImageRectI == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipDrawImageRectI);
        }
        if ( g_GdipDrawImageRectI != NULL )
        {
            status = (*g_GdipDrawImageRectI)(graphics, image, x, y, width, height);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipDrawImagePointsPtr)(GpGraphics *graphics, GpImage *image,
                                            GDIPCONST GpPointF *dstpoints, INT count));
DEFINE_MEMBER(GdipDrawImagePoints);

GpStatus WINGDIPAPI
GdipDrawImagePoints(GpGraphics *graphics, GpImage *image,
                             GDIPCONST GpPointF *dstpoints, INT count)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipDrawImagePoints == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipDrawImagePoints);
        }
        if ( g_GdipDrawImagePoints != NULL )
        {
            status = (*g_GdipDrawImagePoints)(graphics, image, dstpoints, count);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipDrawImagePointsIPtr)(GpGraphics *graphics, GpImage *image,
                                            GDIPCONST GpPoint *dstpoints, INT count));
DEFINE_MEMBER(GdipDrawImagePointsI);

GpStatus WINGDIPAPI
GdipDrawImagePointsI(GpGraphics *graphics, GpImage *image,
                             GDIPCONST GpPoint *dstpoints, INT count)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipDrawImagePointsI == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipDrawImagePointsI);
        }
        if ( g_GdipDrawImagePointsI != NULL )
        {
            status = (*g_GdipDrawImagePointsI)(graphics, image, dstpoints, count);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipDrawImagePointRectPtr)(GpGraphics *graphics, GpImage *image, REAL x,
                                               REAL y, REAL srcx, REAL srcy, REAL srcwidth,
                                                                               REAL srcheight, GpUnit srcUnit));
DEFINE_MEMBER(GdipDrawImagePointRect);

GpStatus WINGDIPAPI
GdipDrawImagePointRect(GpGraphics *graphics, GpImage *image, REAL x,
                                REAL y, REAL srcx, REAL srcy, REAL srcwidth,
                                REAL srcheight, GpUnit srcUnit)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipDrawImagePointRect == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipDrawImagePointRect);
        }
        if ( g_GdipDrawImagePointRect != NULL )
        {
            status = (*g_GdipDrawImagePointRect)(graphics, image, x, y, srcx, srcy, srcwidth, srcheight, srcUnit);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipDrawImagePointRectIPtr)(GpGraphics *graphics, GpImage *image, INT x,
                                               INT y, INT srcx, INT srcy, INT srcwidth,
                                               INT srcheight, GpUnit srcUnit));
DEFINE_MEMBER(GdipDrawImagePointRectI);

GpStatus WINGDIPAPI
GdipDrawImagePointRectI(GpGraphics *graphics, GpImage *image, INT x,
                                INT y, INT srcx, INT srcy, INT srcwidth,
                                INT srcheight, GpUnit srcUnit)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipDrawImagePointRectI == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipDrawImagePointRectI);
        }
        if ( g_GdipDrawImagePointRectI != NULL )
        {
            status = (*g_GdipDrawImagePointRectI)(graphics, image, x, y, srcx, srcy, srcwidth, srcheight, srcUnit);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipDrawImageRectRectPtr)(GpGraphics *graphics, GpImage *image, REAL dstx,
                                     REAL dsty, REAL dstwidth, REAL dstheight,
                                     REAL srcx, REAL srcy, REAL srcwidth, REAL srcheight,
                                     GpUnit srcUnit,
                                     GDIPCONST GpImageAttributes* imageAttributes,
                                     DrawImageAbort callback, VOID * callbackData));
DEFINE_MEMBER(GdipDrawImageRectRect);

GpStatus WINGDIPAPI
GdipDrawImageRectRect(GpGraphics *graphics, GpImage *image, REAL dstx,
                      REAL dsty, REAL dstwidth, REAL dstheight,
                      REAL srcx, REAL srcy, REAL srcwidth, REAL srcheight,
                      GpUnit srcUnit,
                      GDIPCONST GpImageAttributes* imageAttributes,
                      DrawImageAbort callback, VOID * callbackData)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipDrawImageRectRect == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipDrawImageRectRect);
        }
        if ( g_GdipDrawImageRectRect != NULL )
        {
            status = (*g_GdipDrawImageRectRect)(graphics, image, dstx, dsty, dstwidth, dstheight, srcx, srcy, srcwidth, srcheight, srcUnit, imageAttributes, callback, callbackData);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipDrawImageRectRectIPtr)(GpGraphics *graphics, GpImage *image, INT dstx,
                                      INT dsty, INT dstwidth, INT dstheight,
                                      INT srcx, INT srcy, INT srcwidth, INT srcheight,
                                      GpUnit srcUnit, GDIPCONST GpImageAttributes* imageAttributes,
                                      DrawImageAbort callback, VOID * callbackData));
DEFINE_MEMBER(GdipDrawImageRectRectI);

GpStatus WINGDIPAPI
GdipDrawImageRectRectI(GpGraphics *graphics, GpImage *image, INT dstx,
                       INT dsty, INT dstwidth, INT dstheight,
                       INT srcx, INT srcy, INT srcwidth, INT srcheight,
                       GpUnit srcUnit,
                       GDIPCONST GpImageAttributes* imageAttributes,
                       DrawImageAbort callback, VOID * callbackData)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipDrawImageRectRectI == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipDrawImageRectRectI);
        }
        if ( g_GdipDrawImageRectRectI != NULL )
        {
            status = (*g_GdipDrawImageRectRectI)(graphics, image, dstx, dsty, dstwidth, dstheight, srcx, srcy, srcwidth, srcheight, srcUnit, imageAttributes, callback, callbackData);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipDrawImagePointsRectPtr)(GpGraphics *graphics, GpImage *image,
                                       GDIPCONST GpPointF *points, INT count, REAL srcx,
                                       REAL srcy, REAL srcwidth, REAL srcheight,
                                       GpUnit srcUnit, GDIPCONST GpImageAttributes* imageAttributes,
                                       DrawImageAbort callback, VOID * callbackData));
DEFINE_MEMBER(GdipDrawImagePointsRect);

GpStatus WINGDIPAPI
GdipDrawImagePointsRect(GpGraphics *graphics, GpImage *image,
                        GDIPCONST GpPointF *points, INT count, REAL srcx,
                        REAL srcy, REAL srcwidth, REAL srcheight,
                        GpUnit srcUnit,
                        GDIPCONST GpImageAttributes* imageAttributes,
                        DrawImageAbort callback, VOID * callbackData)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipDrawImagePointsRect == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipDrawImagePointsRect);
        }
        if ( g_GdipDrawImagePointsRect != NULL )
        {
            status = (*g_GdipDrawImagePointsRect)(graphics, image, points, count, srcx, srcy, srcwidth, srcheight, srcUnit, imageAttributes, callback, callbackData);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipDrawImagePointsRectIPtr)(GpGraphics *graphics, GpImage *image,
                                        GDIPCONST GpPoint *points, INT count, INT srcx,
                                        INT srcy, INT srcwidth, INT srcheight,
                                        GpUnit srcUnit, GDIPCONST GpImageAttributes* imageAttributes,
                                        DrawImageAbort callback, VOID * callbackData));
DEFINE_MEMBER(GdipDrawImagePointsRectI);

GpStatus WINGDIPAPI
GdipDrawImagePointsRectI(GpGraphics *graphics, GpImage *image,
                         GDIPCONST GpPoint *points, INT count, INT srcx,
                         INT srcy, INT srcwidth, INT srcheight,
                         GpUnit srcUnit,
                         GDIPCONST GpImageAttributes* imageAttributes,
                         DrawImageAbort callback, VOID * callbackData)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipDrawImagePointsRectI == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipDrawImagePointsRectI);
        }
        if ( g_GdipDrawImagePointsRectI != NULL )
        {
            status = (*g_GdipDrawImagePointsRectI)(graphics, image, points, count, srcx, srcy, srcwidth, srcheight, srcUnit, imageAttributes, callback, callbackData);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipEnumerateMetafileDestPointPtr)(GpGraphics *            graphics,
                    GDIPCONST GpMetafile *  metafile, GDIPCONST PointF & destPoint,
                    EnumerateMetafileProc  callback, VOID * callbackData,
                    GDIPCONST GpImageAttributes * imageAttributes));
DEFINE_MEMBER(GdipEnumerateMetafileDestPoint);

GpStatus WINGDIPAPI
GdipEnumerateMetafileDestPoint(
    GpGraphics *            graphics,
    GDIPCONST GpMetafile *  metafile,
    GDIPCONST PointF &      destPoint,
    EnumerateMetafileProc   callback,
    VOID *                  callbackData,
    GDIPCONST GpImageAttributes *     imageAttributes
    )
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipEnumerateMetafileDestPoint == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipEnumerateMetafileDestPoint);
        }
        if ( g_GdipEnumerateMetafileDestPoint != NULL )
        {
            status = (*g_GdipEnumerateMetafileDestPoint)(graphics, metafile, destPoint, callback, callbackData, imageAttributes);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipEnumerateMetafileDestPointIPtr)(GpGraphics * graphics, GDIPCONST GpMetafile *  metafile,
                   GDIPCONST Point & destPoint, EnumerateMetafileProc callback,
                   VOID * callbackData, GDIPCONST GpImageAttributes * imageAttributes));
DEFINE_MEMBER(GdipEnumerateMetafileDestPointI);

GpStatus WINGDIPAPI
GdipEnumerateMetafileDestPointI(
    GpGraphics * graphics, GDIPCONST GpMetafile *  metafile,
    GDIPCONST Point & destPoint, EnumerateMetafileProc callback,
    VOID * callbackData, GDIPCONST GpImageAttributes * imageAttributes
    )
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipEnumerateMetafileDestPointI == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipEnumerateMetafileDestPointI);
        }
        if ( g_GdipEnumerateMetafileDestPointI != NULL )
        {
            status = (*g_GdipEnumerateMetafileDestPointI)(graphics, metafile, destPoint, callback, callbackData, imageAttributes);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipEnumerateMetafileDestRectPtr)(GpGraphics *            graphics, GDIPCONST GpMetafile *  metafile,
                   GDIPCONST RectF & destRect, EnumerateMetafileProc   callback,
                   VOID * callbackData, GDIPCONST GpImageAttributes * imageAttributes));
DEFINE_MEMBER(GdipEnumerateMetafileDestRect);

GpStatus WINGDIPAPI
GdipEnumerateMetafileDestRect(
    GpGraphics *            graphics, GDIPCONST GpMetafile *  metafile,
    GDIPCONST RectF &       destRect, EnumerateMetafileProc   callback,
    VOID *                  callbackData,
    GDIPCONST GpImageAttributes *     imageAttributes
    )
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipEnumerateMetafileDestRect == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipEnumerateMetafileDestRect);
        }
        if ( g_GdipEnumerateMetafileDestRect != NULL )
        {
            status = (*g_GdipEnumerateMetafileDestRect)(graphics, metafile, destRect, callback, callbackData, imageAttributes);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipEnumerateMetafileDestRectIPtr)(GpGraphics * graphics,
                   GDIPCONST GpMetafile *  metafile, GDIPCONST Rect & destRect,
                   EnumerateMetafileProc   callback, VOID * callbackData,
                   GDIPCONST GpImageAttributes * imageAttributes));
DEFINE_MEMBER(GdipEnumerateMetafileDestRectI);

GpStatus WINGDIPAPI
GdipEnumerateMetafileDestRectI(
    GpGraphics *            graphics,
    GDIPCONST GpMetafile *  metafile,
    GDIPCONST Rect &        destRect,
    EnumerateMetafileProc   callback,
    VOID *                  callbackData,
    GDIPCONST GpImageAttributes *     imageAttributes
    )
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipEnumerateMetafileDestRectI == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipEnumerateMetafileDestRectI);
        }
        if ( g_GdipEnumerateMetafileDestRectI != NULL )
        {
            status = (*g_GdipEnumerateMetafileDestRectI)(graphics, metafile, destRect, callback, callbackData, imageAttributes);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipEnumerateMetafileDestPointsPtr)(GpGraphics * graphics, GDIPCONST GpMetafile *  metafile,
                   GDIPCONST PointF * destPoints, INT count, EnumerateMetafileProc callback,
                       VOID * callbackData, GDIPCONST GpImageAttributes * imageAttributes
                       ));
DEFINE_MEMBER(GdipEnumerateMetafileDestPoints);

GpStatus WINGDIPAPI
GdipEnumerateMetafileDestPoints(
    GpGraphics * graphics, GDIPCONST GpMetafile *  metafile,
    GDIPCONST PointF * destPoints, INT count, EnumerateMetafileProc callback,
    VOID * callbackData, GDIPCONST GpImageAttributes * imageAttributes
    )
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipEnumerateMetafileDestPoints == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipEnumerateMetafileDestPoints);
        }
        if ( g_GdipEnumerateMetafileDestPoints != NULL )
        {
            status = (*g_GdipEnumerateMetafileDestPoints)(graphics, metafile, destPoints, count, callback, callbackData, imageAttributes);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipEnumerateMetafileDestPointsIPtr)(GpGraphics * graphics, GDIPCONST GpMetafile *  metafile,
                   GDIPCONST Point * destPoints, INT count, EnumerateMetafileProc callback, VOID * callbackData,
                   GDIPCONST GpImageAttributes * imageAttributes));
DEFINE_MEMBER(GdipEnumerateMetafileDestPointsI);

GpStatus WINGDIPAPI
GdipEnumerateMetafileDestPointsI(
    GpGraphics * graphics, GDIPCONST GpMetafile *  metafile,
    GDIPCONST Point * destPoints, INT count,
    EnumerateMetafileProc callback, VOID * callbackData,
    GDIPCONST GpImageAttributes * imageAttributes
    )
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipEnumerateMetafileDestPointsI == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipEnumerateMetafileDestPointsI);
        }
        if ( g_GdipEnumerateMetafileDestPointsI != NULL )
        {
            status = (*g_GdipEnumerateMetafileDestPointsI)(graphics, metafile, destPoints, count, callback, callbackData, imageAttributes);
        }
    }
    return status;
}


/* This is using reference */
DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipEnumerateMetafileSrcRectDestPointPtr)(GpGraphics * graphics,
                   GDIPCONST GpMetafile *  metafile, GDIPCONST PointF & destPoint,
                   GDIPCONST RectF & srcRect, Unit srcUnit,
                   EnumerateMetafileProc   callback, VOID * callbackData,
                   GDIPCONST GpImageAttributes * imageAttributes));
DEFINE_MEMBER(GdipEnumerateMetafileSrcRectDestPoint);

GpStatus WINGDIPAPI
GdipEnumerateMetafileSrcRectDestPoint(
    GpGraphics *            graphics,
    GDIPCONST GpMetafile *  metafile,
    GDIPCONST PointF &      destPoint,
    GDIPCONST RectF &       srcRect,
    Unit                    srcUnit,
    EnumerateMetafileProc   callback,
    VOID *                  callbackData,
    GDIPCONST GpImageAttributes *     imageAttributes
    )
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipEnumerateMetafileSrcRectDestPoint == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipEnumerateMetafileSrcRectDestPoint);
        }
        if ( g_GdipEnumerateMetafileSrcRectDestPoint != NULL )
        {
            status = (*g_GdipEnumerateMetafileSrcRectDestPoint)(graphics, metafile, destPoint, srcRect, srcUnit, callback, callbackData, imageAttributes);
        }
    }
    return status;
}


/* This is using reference */
DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipEnumerateMetafileSrcRectDestPointIPtr)(GpGraphics * graphics, GDIPCONST GpMetafile *  metafile,
                   GDIPCONST Point & destPoint, GDIPCONST Rect & srcRect, Unit srcUnit,
                       EnumerateMetafileProc callback, VOID * callbackData, GDIPCONST GpImageAttributes * imageAttributes
                       ));
DEFINE_MEMBER(GdipEnumerateMetafileSrcRectDestPointI);

GpStatus WINGDIPAPI
GdipEnumerateMetafileSrcRectDestPointI(
    GpGraphics * graphics, GDIPCONST GpMetafile *  metafile,
    GDIPCONST Point & destPoint, GDIPCONST Rect & srcRect, Unit srcUnit,
    EnumerateMetafileProc callback, VOID * callbackData, GDIPCONST GpImageAttributes * imageAttributes
    )
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipEnumerateMetafileSrcRectDestPointI == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipEnumerateMetafileSrcRectDestPointI);
        }
        if ( g_GdipEnumerateMetafileSrcRectDestPointI != NULL )
        {
            status = (*g_GdipEnumerateMetafileSrcRectDestPointI)(graphics, metafile, destPoint, srcRect, srcUnit, callback, callbackData, imageAttributes);
        }
    }
    return status;
}


/* This is using reference */
DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipEnumerateMetafileSrcRectDestRectPtr)(GpGraphics * graphics,
                   GDIPCONST GpMetafile *  metafile, GDIPCONST RectF & destRect,
                   GDIPCONST RectF & srcRect, Unit srcUnit,
                   EnumerateMetafileProc callback, VOID * callbackData,
                   GDIPCONST GpImageAttributes * imageAttributes));
DEFINE_MEMBER(GdipEnumerateMetafileSrcRectDestRect);

GpStatus WINGDIPAPI
GdipEnumerateMetafileSrcRectDestRect(GpGraphics * graphics,
    GDIPCONST GpMetafile *  metafile, GDIPCONST RectF & destRect,
    GDIPCONST RectF & srcRect, Unit srcUnit,
    EnumerateMetafileProc callback, VOID * callbackData,
    GDIPCONST GpImageAttributes * imageAttributes
    )
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipEnumerateMetafileSrcRectDestRect == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipEnumerateMetafileSrcRectDestRect);
        }
        if ( g_GdipEnumerateMetafileSrcRectDestRect != NULL )
        {
            status = (*g_GdipEnumerateMetafileSrcRectDestRect)(graphics, metafile, destRect, srcRect, srcUnit, callback, callbackData, imageAttributes);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipEnumerateMetafileSrcRectDestRectIPtr)(GpGraphics * graphics, GDIPCONST GpMetafile *  metafile,
                   GDIPCONST Rect & destRect, GDIPCONST Rect & srcRect,
                       Unit srcUnit, EnumerateMetafileProc callback,
                           VOID * callbackData, GDIPCONST GpImageAttributes * imageAttributes
                           ));
DEFINE_MEMBER(GdipEnumerateMetafileSrcRectDestRectI);

GpStatus WINGDIPAPI
GdipEnumerateMetafileSrcRectDestRectI(
    GpGraphics * graphics, GDIPCONST GpMetafile *  metafile,
    GDIPCONST Rect & destRect, GDIPCONST Rect & srcRect,
    Unit srcUnit, EnumerateMetafileProc callback,
    VOID * callbackData, GDIPCONST GpImageAttributes * imageAttributes
    )
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipEnumerateMetafileSrcRectDestRectI == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipEnumerateMetafileSrcRectDestRectI);
        }
        if ( g_GdipEnumerateMetafileSrcRectDestRectI != NULL )
        {
            status = (*g_GdipEnumerateMetafileSrcRectDestRectI)(graphics, metafile, destRect, srcRect, srcUnit, callback, callbackData, imageAttributes);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipEnumerateMetafileSrcRectDestPointsPtr)(GpGraphics * graphics, GDIPCONST GpMetafile *  metafile,
                   GDIPCONST PointF * destPoints, INT count, GDIPCONST RectF & srcRect,
                       Unit srcUnit, EnumerateMetafileProc callback,
                           VOID * callbackData, GDIPCONST GpImageAttributes * imageAttributes
                           ));
DEFINE_MEMBER(GdipEnumerateMetafileSrcRectDestPoints);

GpStatus WINGDIPAPI
GdipEnumerateMetafileSrcRectDestPoints(
    GpGraphics * graphics, GDIPCONST GpMetafile *  metafile,
    GDIPCONST PointF * destPoints, INT count, GDIPCONST RectF & srcRect,
    Unit srcUnit, EnumerateMetafileProc callback,
    VOID * callbackData, GDIPCONST GpImageAttributes * imageAttributes
    )
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipEnumerateMetafileSrcRectDestPoints == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipEnumerateMetafileSrcRectDestPoints);
        }
        if ( g_GdipEnumerateMetafileSrcRectDestPoints != NULL )
        {
            status = (*g_GdipEnumerateMetafileSrcRectDestPoints)(graphics, metafile, destPoints, count, srcRect, srcUnit, callback, callbackData, imageAttributes);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipEnumerateMetafileSrcRectDestPointsIPtr)(GpGraphics * graphics, GDIPCONST GpMetafile *  metafile,
                   GDIPCONST Point * destPoints, INT count,
                       GDIPCONST Rect & srcRect, Unit srcUnit, EnumerateMetafileProc callback,
                           VOID * callbackData, GDIPCONST GpImageAttributes * imageAttributes
                           ));
DEFINE_MEMBER(GdipEnumerateMetafileSrcRectDestPointsI);

GpStatus WINGDIPAPI
GdipEnumerateMetafileSrcRectDestPointsI(
    GpGraphics * graphics, GDIPCONST GpMetafile *  metafile,
    GDIPCONST Point * destPoints, INT count,
    GDIPCONST Rect & srcRect, Unit srcUnit, EnumerateMetafileProc callback,
    VOID * callbackData, GDIPCONST GpImageAttributes * imageAttributes
    )
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipEnumerateMetafileSrcRectDestPointsI == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipEnumerateMetafileSrcRectDestPointsI);
        }
        if ( g_GdipEnumerateMetafileSrcRectDestPointsI != NULL )
        {
            status = (*g_GdipEnumerateMetafileSrcRectDestPointsI)(graphics, metafile, destPoints, count, srcRect, srcUnit, callback, callbackData, imageAttributes);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipPlayMetafileRecordPtr)(GDIPCONST GpMetafile *  metafile, EmfPlusRecordType recordType,
                   UINT flags, UINT dataSize, GDIPCONST BYTE * data));
DEFINE_MEMBER(GdipPlayMetafileRecord);

GpStatus WINGDIPAPI
GdipPlayMetafileRecord(
    GDIPCONST GpMetafile *  metafile, EmfPlusRecordType recordType,
    UINT flags, UINT dataSize, GDIPCONST BYTE * data)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipPlayMetafileRecord == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipPlayMetafileRecord);
        }
        if ( g_GdipPlayMetafileRecord != NULL )
        {
            status = (*g_GdipPlayMetafileRecord)(metafile, recordType, flags, dataSize, data);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetClipGraphicsPtr)(GpGraphics *graphics, GpGraphics *srcgraphics,CombineMode combineMode));
DEFINE_MEMBER(GdipSetClipGraphics);

GpStatus WINGDIPAPI
GdipSetClipGraphics(GpGraphics *graphics, GpGraphics *srcgraphics,
                    CombineMode combineMode)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipSetClipGraphics == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipSetClipGraphics);
        }
        if ( g_GdipSetClipGraphics != NULL )
        {
            status = (*g_GdipSetClipGraphics)(graphics, srcgraphics, combineMode);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetClipRectPtr)(GpGraphics *graphics, REAL x, REAL y,
                               REAL width, REAL height, CombineMode combineMode));
DEFINE_MEMBER(GdipSetClipRect);

GpStatus WINGDIPAPI
GdipSetClipRect(GpGraphics *graphics, REAL x, REAL y,
                REAL width, REAL height, CombineMode combineMode)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipSetClipRect == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipSetClipRect);
        }
        if ( g_GdipSetClipRect != NULL )
        {
            status = (*g_GdipSetClipRect)(graphics, x, y, width, height, combineMode);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetClipRectIPtr)(GpGraphics *graphics, INT x, INT y,
                                INT width, INT height, CombineMode combineMode));
DEFINE_MEMBER(GdipSetClipRectI);

GpStatus WINGDIPAPI
GdipSetClipRectI(GpGraphics *graphics, INT x, INT y,
                 INT width, INT height, CombineMode combineMode)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipSetClipRectI == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipSetClipRectI);
        }
        if ( g_GdipSetClipRectI != NULL )
        {
            status = (*g_GdipSetClipRectI)(graphics, x, y, width, height, combineMode);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetClipPathPtr)(GpGraphics *graphics, GpPath *path, CombineMode combineMode));
DEFINE_MEMBER(GdipSetClipPath);

GpStatus WINGDIPAPI
GdipSetClipPath(GpGraphics *graphics, GpPath *path, CombineMode combineMode)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipSetClipPath == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipSetClipPath);
        }
        if ( g_GdipSetClipPath != NULL )
        {
            status = (*g_GdipSetClipPath)(graphics, path, combineMode);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetClipRegionPtr)(GpGraphics *graphics, GpRegion *region,CombineMode combineMode));
DEFINE_MEMBER(GdipSetClipRegion);

GpStatus WINGDIPAPI
GdipSetClipRegion(GpGraphics *graphics, GpRegion *region,CombineMode combineMode)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipSetClipRegion == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipSetClipRegion);
        }
        if ( g_GdipSetClipRegion != NULL )
        {
            status = (*g_GdipSetClipRegion)(graphics, region, combineMode);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetClipHrgnPtr)(GpGraphics *graphics, HRGN hRgn, CombineMode combineMode));
DEFINE_MEMBER(GdipSetClipHrgn);

GpStatus WINGDIPAPI
GdipSetClipHrgn(GpGraphics *graphics, HRGN hRgn, CombineMode combineMode)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipSetClipHrgn == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipSetClipHrgn);
        }
        if ( g_GdipSetClipHrgn != NULL )
        {
            status = (*g_GdipSetClipHrgn)(graphics, hRgn, combineMode);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipResetClipPtr)(GpGraphics *graphics));
DEFINE_MEMBER(GdipResetClip);

GpStatus WINGDIPAPI
GdipResetClip(GpGraphics *graphics)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipResetClip == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipResetClip);
        }
        if ( g_GdipResetClip != NULL )
        {
            status = (*g_GdipResetClip)(graphics);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipTranslateClipPtr)(GpGraphics *graphics, REAL dx, REAL dy));
DEFINE_MEMBER(GdipTranslateClip);

GpStatus WINGDIPAPI
GdipTranslateClip(GpGraphics *graphics, REAL dx, REAL dy)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipTranslateClip == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipTranslateClip);
        }
        if ( g_GdipTranslateClip != NULL )
        {
            status = (*g_GdipTranslateClip)(graphics, dx, dy);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipTranslateClipIPtr)(GpGraphics *graphics, INT dx, INT dy));
DEFINE_MEMBER(GdipTranslateClipI);

GpStatus WINGDIPAPI
GdipTranslateClipI(GpGraphics *graphics, INT dx, INT dy)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipTranslateClipI == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipTranslateClipI);
        }
        if ( g_GdipTranslateClipI != NULL )
        {
            status = (*g_GdipTranslateClipI)(graphics, dx, dy);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetClipPtr)(GpGraphics *graphics, GpRegion *region));
DEFINE_MEMBER(GdipGetClip);

GpStatus WINGDIPAPI
GdipGetClip(GpGraphics *graphics, GpRegion *region)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetClip == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetClip);
        }
        if ( g_GdipGetClip != NULL )
        {
            status = (*g_GdipGetClip)(graphics, region);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetClipBoundsPtr)(GpGraphics *graphics, GpRectF *rect));
DEFINE_MEMBER(GdipGetClipBounds);

GpStatus WINGDIPAPI
GdipGetClipBounds(GpGraphics *graphics, GpRectF *rect)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetClipBounds == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetClipBounds);
        }
        if ( g_GdipGetClipBounds != NULL )
        {
            status = (*g_GdipGetClipBounds)(graphics, rect);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetClipBoundsIPtr)(GpGraphics *graphics, GpRect *rect));
DEFINE_MEMBER(GdipGetClipBoundsI);

GpStatus WINGDIPAPI
GdipGetClipBoundsI(GpGraphics *graphics, GpRect *rect)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetClipBoundsI == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetClipBoundsI);
        }
        if ( g_GdipGetClipBoundsI != NULL )
        {
            status = (*g_GdipGetClipBoundsI)(graphics, rect);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipIsClipEmptyPtr)(GpGraphics *graphics, BOOL *result));
DEFINE_MEMBER(GdipIsClipEmpty);

GpStatus WINGDIPAPI
GdipIsClipEmpty(GpGraphics *graphics, BOOL *result)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipIsClipEmpty == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipIsClipEmpty);
        }
        if ( g_GdipIsClipEmpty != NULL )
        {
            status = (*g_GdipIsClipEmpty)(graphics, result);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetVisibleClipBoundsPtr)(GpGraphics *graphics, GpRectF *rect));
DEFINE_MEMBER(GdipGetVisibleClipBounds);

GpStatus WINGDIPAPI
GdipGetVisibleClipBounds(GpGraphics *graphics, GpRectF *rect)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetVisibleClipBounds == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetVisibleClipBounds);
        }
        if ( g_GdipGetVisibleClipBounds != NULL )
        {
            status = (*g_GdipGetVisibleClipBounds)(graphics, rect);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetVisibleClipBoundsIPtr)(GpGraphics *graphics, GpRect *rect));
DEFINE_MEMBER(GdipGetVisibleClipBoundsI);

GpStatus WINGDIPAPI
GdipGetVisibleClipBoundsI(GpGraphics *graphics, GpRect *rect)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetVisibleClipBoundsI == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetVisibleClipBoundsI);
        }
        if ( g_GdipGetVisibleClipBoundsI != NULL )
        {
            status = (*g_GdipGetVisibleClipBoundsI)(graphics, rect);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipIsVisibleClipEmptyPtr)(GpGraphics *graphics, BOOL *result));
DEFINE_MEMBER(GdipIsVisibleClipEmpty);

GpStatus WINGDIPAPI
GdipIsVisibleClipEmpty(GpGraphics *graphics, BOOL *result)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipIsVisibleClipEmpty == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipIsVisibleClipEmpty);
        }
        if ( g_GdipIsVisibleClipEmpty != NULL )
        {
            status = (*g_GdipIsVisibleClipEmpty)(graphics, result);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipIsVisiblePointPtr)(GpGraphics *graphics, REAL x, REAL y, BOOL *result));
DEFINE_MEMBER(GdipIsVisiblePoint);

GpStatus WINGDIPAPI
GdipIsVisiblePoint(GpGraphics *graphics, REAL x, REAL y, BOOL *result)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipIsVisiblePoint == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipIsVisiblePoint);
        }
        if ( g_GdipIsVisiblePoint != NULL )
        {
            status = (*g_GdipIsVisiblePoint)(graphics, x, y, result);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipIsVisiblePointIPtr)(GpGraphics *graphics, INT x, INT y, BOOL *result));
DEFINE_MEMBER(GdipIsVisiblePointI);

GpStatus WINGDIPAPI
GdipIsVisiblePointI(GpGraphics *graphics, INT x, INT y, BOOL *result)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipIsVisiblePointI == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipIsVisiblePointI);
        }
        if ( g_GdipIsVisiblePointI != NULL )
        {
            status = (*g_GdipIsVisiblePointI)(graphics, x, y, result);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipIsVisibleRectPtr)(GpGraphics *graphics, REAL x, REAL y,
                                 REAL width, REAL height, BOOL *result));
DEFINE_MEMBER(GdipIsVisibleRect);

GpStatus WINGDIPAPI
GdipIsVisibleRect(GpGraphics *graphics, REAL x, REAL y,
                  REAL width, REAL height, BOOL *result)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipIsVisibleRect == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipIsVisibleRect);
        }
        if ( g_GdipIsVisibleRect != NULL )
        {
            status = (*g_GdipIsVisibleRect)(graphics, x, y, width, height, result);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipIsVisibleRectIPtr)(GpGraphics *graphics, INT x, INT y,
                                  INT width, INT height, BOOL *result));
DEFINE_MEMBER(GdipIsVisibleRectI);

GpStatus WINGDIPAPI
GdipIsVisibleRectI(GpGraphics *graphics, INT x, INT y,
                   INT width, INT height, BOOL *result)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipIsVisibleRectI == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipIsVisibleRectI);
        }
        if ( g_GdipIsVisibleRectI != NULL )
        {
            status = (*g_GdipIsVisibleRectI)(graphics, x, y, width, height, result);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSaveGraphicsPtr)(GpGraphics *graphics, GraphicsState *state));
DEFINE_MEMBER(GdipSaveGraphics);

GpStatus WINGDIPAPI
GdipSaveGraphics(GpGraphics *graphics, GraphicsState *state)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipSaveGraphics == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipSaveGraphics);
        }
        if ( g_GdipSaveGraphics != NULL )
        {
            status = (*g_GdipSaveGraphics)(graphics, state);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipRestoreGraphicsPtr)(GpGraphics *graphics, GraphicsState state));
DEFINE_MEMBER(GdipRestoreGraphics);

GpStatus WINGDIPAPI
GdipRestoreGraphics(GpGraphics *graphics, GraphicsState state)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipRestoreGraphics == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipRestoreGraphics);
        }
        if ( g_GdipRestoreGraphics != NULL )
        {
            status = (*g_GdipRestoreGraphics)(graphics, state);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipBeginContainerPtr)(GpGraphics *graphics, GDIPCONST GpRectF* dstrect,
               GDIPCONST GpRectF *srcrect, GpUnit unit, GraphicsContainer *state));
DEFINE_MEMBER(GdipBeginContainer);

GpStatus WINGDIPAPI
GdipBeginContainer(GpGraphics *graphics, GDIPCONST GpRectF* dstrect,
                   GDIPCONST GpRectF *srcrect, GpUnit unit, 
                   GraphicsContainer *state)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipBeginContainer == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipBeginContainer);
        }
        if ( g_GdipBeginContainer != NULL )
        {
            status = (*g_GdipBeginContainer)(graphics, dstrect, srcrect, unit, state);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipBeginContainerIPtr)(GpGraphics *graphics, GDIPCONST GpRect* dstrect,
               GDIPCONST GpRect *srcrect, GpUnit unit, GraphicsContainer *state));
DEFINE_MEMBER(GdipBeginContainerI);

GpStatus WINGDIPAPI
GdipBeginContainerI(GpGraphics *graphics, GDIPCONST GpRect* dstrect,
                    GDIPCONST GpRect *srcrect, GpUnit unit, 
                    GraphicsContainer *state)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipBeginContainerI == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipBeginContainerI);
        }
        if ( g_GdipBeginContainerI != NULL )
        {
            status = (*g_GdipBeginContainerI)(graphics, dstrect, srcrect, unit, state);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipBeginContainer2Ptr)(GpGraphics *graphics, GraphicsContainer* state));
DEFINE_MEMBER(GdipBeginContainer2);

GpStatus WINGDIPAPI
GdipBeginContainer2(GpGraphics *graphics, GraphicsContainer* state)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipBeginContainer2 == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipBeginContainer2);
        }
        if ( g_GdipBeginContainer2 != NULL )
        {
            status = (*g_GdipBeginContainer2)(graphics, state);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipEndContainerPtr)(GpGraphics *graphics, GraphicsContainer state));
DEFINE_MEMBER(GdipEndContainer);

GpStatus WINGDIPAPI
GdipEndContainer(GpGraphics *graphics, GraphicsContainer state)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipEndContainer == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipEndContainer);
        }
        if ( g_GdipEndContainer != NULL )
        {
            status = (*g_GdipEndContainer)(graphics, state);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetMetafileHeaderFromWmfPtr)(HMETAFILE hWmf, GDIPCONST WmfPlaceableFileHeader * wmfPlaceableFileHeader,
                   MetafileHeader * header));
DEFINE_MEMBER(GdipGetMetafileHeaderFromWmf);

/* Actual prototype didn't include WINGDIAPI */
GpStatus
WINGDIPAPI GdipGetMetafileHeaderFromWmf(
    HMETAFILE hWmf, GDIPCONST WmfPlaceableFileHeader * wmfPlaceableFileHeader,
    MetafileHeader * header)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetMetafileHeaderFromWmf == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetMetafileHeaderFromWmf);
        }
        if ( g_GdipGetMetafileHeaderFromWmf != NULL )
        {
            status = (*g_GdipGetMetafileHeaderFromWmf)(hWmf, wmfPlaceableFileHeader, header);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetMetafileHeaderFromEmfPtr)(HENHMETAFILE hEmf,
                   MetafileHeader * header));
DEFINE_MEMBER(GdipGetMetafileHeaderFromEmf);

GpStatus
WINGDIPAPI
GdipGetMetafileHeaderFromEmf(HENHMETAFILE hEmf,
    MetafileHeader * header)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetMetafileHeaderFromEmf == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetMetafileHeaderFromEmf);
        }
        if ( g_GdipGetMetafileHeaderFromEmf != NULL )
        {
            status = (*g_GdipGetMetafileHeaderFromEmf)(hEmf, header);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetMetafileHeaderFromFilePtr)(
                   GDIPCONST WCHAR* filename, MetafileHeader * header));
DEFINE_MEMBER(GdipGetMetafileHeaderFromFile);

GpStatus
WINGDIPAPI
GdipGetMetafileHeaderFromFile(
    GDIPCONST WCHAR* filename, MetafileHeader * header)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetMetafileHeaderFromFile == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetMetafileHeaderFromFile);
        }
        if ( g_GdipGetMetafileHeaderFromFile != NULL )
        {
            status = (*g_GdipGetMetafileHeaderFromFile)(filename, header);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetMetafileHeaderFromStreamPtr)(IStream *           stream,
                   MetafileHeader *    header
                   ));
DEFINE_MEMBER(GdipGetMetafileHeaderFromStream);

GpStatus WINGDIPAPI
GdipGetMetafileHeaderFromStream(
    IStream *           stream,
    MetafileHeader *    header
    )
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetMetafileHeaderFromStream == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetMetafileHeaderFromStream);
        }
        if ( g_GdipGetMetafileHeaderFromStream != NULL )
        {
            status = (*g_GdipGetMetafileHeaderFromStream)(stream, header);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetMetafileHeaderFromMetafilePtr)(GpMetafile * metafile, MetafileHeader * header));
DEFINE_MEMBER(GdipGetMetafileHeaderFromMetafile);

GpStatus WINGDIPAPI
GdipGetMetafileHeaderFromMetafile(
    GpMetafile * metafile, MetafileHeader * header)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetMetafileHeaderFromMetafile == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetMetafileHeaderFromMetafile);
        }
        if ( g_GdipGetMetafileHeaderFromMetafile != NULL )
        {
            status = (*g_GdipGetMetafileHeaderFromMetafile)(metafile, header);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetHemfFromMetafilePtr)(GpMetafile * metafile, HENHMETAFILE * hEmf ));
DEFINE_MEMBER(GdipGetHemfFromMetafile);

GpStatus WINGDIPAPI
GdipGetHemfFromMetafile(GpMetafile * metafile, HENHMETAFILE * hEmf )
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetHemfFromMetafile == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetHemfFromMetafile);
        }
        if ( g_GdipGetHemfFromMetafile != NULL )
        {
            status = (*g_GdipGetHemfFromMetafile)(metafile, hEmf);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipCreateStreamOnFilePtr)(GDIPCONST WCHAR * filename, UINT access, 
                                      IStream **stream));
DEFINE_MEMBER(GdipCreateStreamOnFile);

GpStatus WINGDIPAPI
GdipCreateStreamOnFile(GDIPCONST WCHAR * filename, UINT access, 
                       IStream **stream)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipCreateStreamOnFile == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipCreateStreamOnFile);
        }
        if ( g_GdipCreateStreamOnFile != NULL )
        {
            status = (*g_GdipCreateStreamOnFile)(filename, access, stream);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipCreateMetafileFromWmfPtr)(HMETAFILE hWmf, BOOL deleteWmf,
                         GDIPCONST WmfPlaceableFileHeader * wmfPlaceableFileHeader, 
                         GpMetafile **metafile));
DEFINE_MEMBER(GdipCreateMetafileFromWmf);

GpStatus WINGDIPAPI
GdipCreateMetafileFromWmf(HMETAFILE hWmf, BOOL deleteWmf,
                          GDIPCONST WmfPlaceableFileHeader * wmfPlaceableFileHeader, 
                          GpMetafile **metafile)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipCreateMetafileFromWmf == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipCreateMetafileFromWmf);
        }
        if ( g_GdipCreateMetafileFromWmf != NULL )
        {
            status = (*g_GdipCreateMetafileFromWmf)(hWmf, deleteWmf, wmfPlaceableFileHeader, metafile);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipCreateMetafileFromEmfPtr)(HENHMETAFILE hEmf, BOOL deleteEmf,
                                         GpMetafile **metafile));
DEFINE_MEMBER(GdipCreateMetafileFromEmf);

GpStatus WINGDIPAPI
GdipCreateMetafileFromEmf(HENHMETAFILE hEmf, BOOL deleteEmf,
                          GpMetafile **metafile)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipCreateMetafileFromEmf == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipCreateMetafileFromEmf);
        }
        if ( g_GdipCreateMetafileFromEmf != NULL )
        {
            status = (*g_GdipCreateMetafileFromEmf)(hEmf, deleteEmf, metafile);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipCreateMetafileFromFilePtr)(GDIPCONST WCHAR* file, GpMetafile **metafile));
DEFINE_MEMBER(GdipCreateMetafileFromFile);

GpStatus WINGDIPAPI
GdipCreateMetafileFromFile(GDIPCONST WCHAR* file, GpMetafile **metafile)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipCreateMetafileFromFile == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipCreateMetafileFromFile);
        }
        if ( g_GdipCreateMetafileFromFile != NULL )
        {
            status = (*g_GdipCreateMetafileFromFile)(file, metafile);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipCreateMetafileFromWmfFilePtr)(GDIPCONST WCHAR* file, 
                         GDIPCONST WmfPlaceableFileHeader * wmfPlaceableFileHeader, 
                         GpMetafile **metafile));
DEFINE_MEMBER(GdipCreateMetafileFromWmfFile);

GpStatus WINGDIPAPI
GdipCreateMetafileFromWmfFile(GDIPCONST WCHAR* file, 
                              GDIPCONST WmfPlaceableFileHeader * wmfPlaceableFileHeader, 
                              GpMetafile **metafile)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipCreateMetafileFromWmfFile == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipCreateMetafileFromWmfFile);
        }
        if ( g_GdipCreateMetafileFromWmfFile != NULL )
        {
            status = (*g_GdipCreateMetafileFromWmfFile)(file, wmfPlaceableFileHeader, metafile);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipCreateMetafileFromStreamPtr)(IStream * stream, GpMetafile **metafile));
DEFINE_MEMBER(GdipCreateMetafileFromStream);

GpStatus WINGDIPAPI
GdipCreateMetafileFromStream(IStream * stream, GpMetafile **metafile)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipCreateMetafileFromStream == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipCreateMetafileFromStream);
        }
        if ( g_GdipCreateMetafileFromStream != NULL )
        {
            status = (*g_GdipCreateMetafileFromStream)(stream, metafile);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipRecordMetafilePtr)(HDC referenceHdc, EmfType type,
                   GDIPCONST GpRectF * frameRect, MetafileFrameUnit frameUnit,
                       GDIPCONST WCHAR * description,GpMetafile ** metafile));
DEFINE_MEMBER(GdipRecordMetafile);

GpStatus WINGDIPAPI
GdipRecordMetafile(
    HDC referenceHdc, EmfType type,
    GDIPCONST GpRectF * frameRect, MetafileFrameUnit frameUnit,
    GDIPCONST WCHAR * description,GpMetafile ** metafile)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipRecordMetafile == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipRecordMetafile);
        }
        if ( g_GdipRecordMetafile != NULL )
        {
            status = (*g_GdipRecordMetafile)(referenceHdc, type, frameRect, frameUnit, description, metafile);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipRecordMetafileIPtr)(HDC referenceHdc, EmfType type,
                   GDIPCONST GpRect * frameRect, MetafileFrameUnit frameUnit,
                       GDIPCONST WCHAR * description,GpMetafile ** metafile));
DEFINE_MEMBER(GdipRecordMetafileI);

GpStatus WINGDIPAPI
GdipRecordMetafileI(
    HDC referenceHdc, EmfType type,
    GDIPCONST GpRect * frameRect, MetafileFrameUnit frameUnit,
    GDIPCONST WCHAR * description,GpMetafile ** metafile)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipRecordMetafileI == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipRecordMetafileI);
        }
        if ( g_GdipRecordMetafileI != NULL )
        {
            status = (*g_GdipRecordMetafileI)(referenceHdc, type, frameRect, frameUnit, description, metafile);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipRecordMetafileFileNamePtr)(GDIPCONST WCHAR* fileName, HDC referenceHdc,
                   EmfType type, GDIPCONST GpRectF * frameRect,
                       MetafileFrameUnit frameUnit, GDIPCONST WCHAR * description,
                           GpMetafile ** metafile));
DEFINE_MEMBER(GdipRecordMetafileFileName);

GpStatus WINGDIPAPI
GdipRecordMetafileFileName(
    GDIPCONST WCHAR* fileName, HDC referenceHdc,
    EmfType type, GDIPCONST GpRectF * frameRect,
    MetafileFrameUnit frameUnit, GDIPCONST WCHAR * description,
    GpMetafile ** metafile)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipRecordMetafileFileName == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipRecordMetafileFileName);
        }
        if ( g_GdipRecordMetafileFileName != NULL )
        {
            status = (*g_GdipRecordMetafileFileName)(fileName, referenceHdc, type, frameRect, frameUnit, description, metafile);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipRecordMetafileFileNameIPtr)(GDIPCONST WCHAR* fileName, HDC referenceHdc,
                   EmfType type, GDIPCONST GpRect * frameRect,
                       MetafileFrameUnit frameUnit, GDIPCONST WCHAR * description,
                           GpMetafile ** metafile));
DEFINE_MEMBER(GdipRecordMetafileFileNameI);

GpStatus WINGDIPAPI
GdipRecordMetafileFileNameI(
    GDIPCONST WCHAR* fileName, HDC referenceHdc,
    EmfType type, GDIPCONST GpRect * frameRect,
    MetafileFrameUnit frameUnit, GDIPCONST WCHAR * description,
    GpMetafile ** metafile)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipRecordMetafileFileNameI == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipRecordMetafileFileNameI);
        }
        if ( g_GdipRecordMetafileFileNameI != NULL )
        {
            status = (*g_GdipRecordMetafileFileNameI)(fileName, referenceHdc, type, frameRect, frameUnit, description, metafile);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipRecordMetafileStreamPtr)(IStream * stream, HDC referenceHdc,
                   EmfType type, GDIPCONST GpRectF * frameRect,
                       MetafileFrameUnit frameUnit, GDIPCONST WCHAR * description,
                           GpMetafile ** metafile));
DEFINE_MEMBER(GdipRecordMetafileStream);

GpStatus WINGDIPAPI
GdipRecordMetafileStream(
    IStream * stream, HDC referenceHdc,
    EmfType type, GDIPCONST GpRectF * frameRect,
    MetafileFrameUnit frameUnit, GDIPCONST WCHAR * description,
    GpMetafile ** metafile)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipRecordMetafileStream == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipRecordMetafileStream);
        }
        if ( g_GdipRecordMetafileStream != NULL )
        {
            status = (*g_GdipRecordMetafileStream)(stream, referenceHdc, type, frameRect, frameUnit, description, metafile);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipRecordMetafileStreamIPtr)(IStream * stream, HDC referenceHdc,
                   EmfType type, GDIPCONST GpRect * frameRect,
                       MetafileFrameUnit frameUnit, GDIPCONST WCHAR * description,
                           GpMetafile ** metafile));
DEFINE_MEMBER(GdipRecordMetafileStreamI);

GpStatus WINGDIPAPI
GdipRecordMetafileStreamI(
    IStream * stream, HDC referenceHdc,
    EmfType type, GDIPCONST GpRect * frameRect,
    MetafileFrameUnit frameUnit, GDIPCONST WCHAR * description,
    GpMetafile ** metafile)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipRecordMetafileStreamI == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipRecordMetafileStreamI);
        }
        if ( g_GdipRecordMetafileStreamI != NULL )
        {
            status = (*g_GdipRecordMetafileStreamI)(stream, referenceHdc, type, frameRect, frameUnit, description, metafile);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetMetafileDownLevelRasterizationLimitPtr)(GpMetafile * metafile,UINT metafileRasterizationLimitDpi));
DEFINE_MEMBER(GdipSetMetafileDownLevelRasterizationLimit);

GpStatus WINGDIPAPI
GdipSetMetafileDownLevelRasterizationLimit(
    GpMetafile * metafile,UINT metafileRasterizationLimitDpi)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipSetMetafileDownLevelRasterizationLimit == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipSetMetafileDownLevelRasterizationLimit);
        }
        if ( g_GdipSetMetafileDownLevelRasterizationLimit != NULL )
        {
            status = (*g_GdipSetMetafileDownLevelRasterizationLimit)(metafile, metafileRasterizationLimitDpi);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetMetafileDownLevelRasterizationLimitPtr)(GDIPCONST GpMetafile *  metafile, UINT * metafileRasterizationLimitDpi));
DEFINE_MEMBER(GdipGetMetafileDownLevelRasterizationLimit);

GpStatus WINGDIPAPI
GdipGetMetafileDownLevelRasterizationLimit(
    GDIPCONST GpMetafile *  metafile, UINT * metafileRasterizationLimitDpi)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetMetafileDownLevelRasterizationLimit == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetMetafileDownLevelRasterizationLimit);
        }
        if ( g_GdipGetMetafileDownLevelRasterizationLimit != NULL )
        {
            status = (*g_GdipGetMetafileDownLevelRasterizationLimit)(metafile, metafileRasterizationLimitDpi);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetImageDecodersSizePtr)(UINT *numDecoders, UINT *size));
DEFINE_MEMBER(GdipGetImageDecodersSize);

GpStatus WINGDIPAPI
GdipGetImageDecodersSize(UINT *numDecoders, UINT *size)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetImageDecodersSize == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetImageDecodersSize);
        }
        if ( g_GdipGetImageDecodersSize != NULL )
        {
            status = (*g_GdipGetImageDecodersSize)(numDecoders, size);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetImageDecodersPtr)(UINT numDecoders, UINT size,ImageCodecInfo *decoders));
DEFINE_MEMBER(GdipGetImageDecoders);

GpStatus WINGDIPAPI
GdipGetImageDecoders(UINT numDecoders, UINT size,ImageCodecInfo *decoders)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetImageDecoders == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetImageDecoders);
        }
        if ( g_GdipGetImageDecoders != NULL )
        {
            status = (*g_GdipGetImageDecoders)(numDecoders, size, decoders);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetImageEncodersSizePtr)(UINT *numEncoders, UINT *size));
DEFINE_MEMBER(GdipGetImageEncodersSize);

GpStatus WINGDIPAPI
GdipGetImageEncodersSize(UINT *numEncoders, UINT *size)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetImageEncodersSize == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetImageEncodersSize);
        }
        if ( g_GdipGetImageEncodersSize != NULL )
        {
            status = (*g_GdipGetImageEncodersSize)(numEncoders, size);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetImageEncodersPtr)(UINT numEncoders, UINT size, ImageCodecInfo *encoders));
DEFINE_MEMBER(GdipGetImageEncoders);

GpStatus WINGDIPAPI
GdipGetImageEncoders(UINT numEncoders, UINT size, ImageCodecInfo *encoders)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetImageEncoders == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetImageEncoders);
        }
        if ( g_GdipGetImageEncoders != NULL )
        {
            status = (*g_GdipGetImageEncoders)(numEncoders, size, encoders);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipCommentPtr)(GpGraphics* graphics, UINT sizeData, GDIPCONST BYTE * data));
DEFINE_MEMBER(GdipComment);

GpStatus WINGDIPAPI
GdipComment(GpGraphics* graphics, UINT sizeData, GDIPCONST BYTE * data)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipComment == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipComment);
        }
        if ( g_GdipComment != NULL )
        {
            status = (*g_GdipComment)(graphics, sizeData, data);
        }
    }
    return status;
}


//----------------------------------------------------------------------------
// Platform Shunt
//----------------------------------------------------------------------------

VOID WINAPI
Gdiplus_GraphicsInit()
{
}
