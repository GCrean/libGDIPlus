#include "stdafx.h"
#include "GdiplusShunt.h"

//----------------------------------------------------------------------------
// Pen APIs
//----------------------------------------------------------------------------


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipCreatePen1Ptr)(ARGB color, REAL width, GpUnit unit, GpPen **pen));
DEFINE_MEMBER(GdipCreatePen1);

GpStatus WINGDIPAPI
GdipCreatePen1(ARGB color, REAL width, GpUnit unit, GpPen **pen)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipCreatePen1 == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipCreatePen1);
        }
        if ( g_GdipCreatePen1 != NULL )
        {
            status = (*g_GdipCreatePen1)(color, width, unit, pen);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipCreatePen2Ptr)(GpBrush *brush, REAL width, GpUnit unit, GpPen **pen));
DEFINE_MEMBER(GdipCreatePen2);

GpStatus WINGDIPAPI
GdipCreatePen2(GpBrush *brush, REAL width, GpUnit unit, GpPen **pen)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipCreatePen2 == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipCreatePen2);
        }
        if ( g_GdipCreatePen2 != NULL )
        {
            status = (*g_GdipCreatePen2)(brush, width, unit, pen);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipClonePenPtr)(GpPen *pen, GpPen **clonepen));
DEFINE_MEMBER(GdipClonePen);

GpStatus WINGDIPAPI
GdipClonePen(GpPen *pen, GpPen **clonepen)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipClonePen == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipClonePen);
        }
        if ( g_GdipClonePen != NULL )
        {
            status = (*g_GdipClonePen)(pen, clonepen);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipDeletePenPtr)(GpPen *pen));
DEFINE_MEMBER(GdipDeletePen);

GpStatus WINGDIPAPI
GdipDeletePen(GpPen *pen)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipDeletePen == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipDeletePen);
        }
        if ( g_GdipDeletePen != NULL )
        {
            status = (*g_GdipDeletePen)(pen);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetPenWidthPtr)(GpPen *pen, REAL width));
DEFINE_MEMBER(GdipSetPenWidth);

GpStatus WINGDIPAPI
GdipSetPenWidth(GpPen *pen, REAL width)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipSetPenWidth == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipSetPenWidth);
        }
        if ( g_GdipSetPenWidth != NULL )
        {
            status = (*g_GdipSetPenWidth)(pen, width);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetPenWidthPtr)(GpPen *pen, REAL *width));
DEFINE_MEMBER(GdipGetPenWidth);

GpStatus WINGDIPAPI
GdipGetPenWidth(GpPen *pen, REAL *width)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetPenWidth == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetPenWidth);
        }
        if ( g_GdipGetPenWidth != NULL )
        {
            status = (*g_GdipGetPenWidth)(pen, width);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetPenUnitPtr)(GpPen *pen, GpUnit unit));
DEFINE_MEMBER(GdipSetPenUnit);

GpStatus WINGDIPAPI
GdipSetPenUnit(GpPen *pen, GpUnit unit)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipSetPenUnit == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipSetPenUnit);
        }
        if ( g_GdipSetPenUnit != NULL )
        {
            status = (*g_GdipSetPenUnit)(pen, unit);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetPenUnitPtr)(GpPen *pen, GpUnit *unit));
DEFINE_MEMBER(GdipGetPenUnit);

GpStatus WINGDIPAPI
GdipGetPenUnit(GpPen *pen, GpUnit *unit)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetPenUnit == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetPenUnit);
        }
        if ( g_GdipGetPenUnit != NULL )
        {
            status = (*g_GdipGetPenUnit)(pen, unit);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetPenLineCap197819Ptr)(GpPen *pen, GpLineCap startCap, GpLineCap endCap,
               GpDashCap dashCap));
DEFINE_MEMBER(GdipSetPenLineCap197819);

GpStatus WINGDIPAPI
GdipSetPenLineCap197819(GpPen *pen, GpLineCap startCap, GpLineCap endCap,
                  GpDashCap dashCap)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipSetPenLineCap197819 == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipSetPenLineCap197819);
        }
        if ( g_GdipSetPenLineCap197819 != NULL )
        {
            status = (*g_GdipSetPenLineCap197819)(pen, startCap, endCap, dashCap);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetPenStartCapPtr)(GpPen *pen, GpLineCap startCap));
DEFINE_MEMBER(GdipSetPenStartCap);

GpStatus WINGDIPAPI
GdipSetPenStartCap(GpPen *pen, GpLineCap startCap)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipSetPenStartCap == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipSetPenStartCap);
        }
        if ( g_GdipSetPenStartCap != NULL )
        {
            status = (*g_GdipSetPenStartCap)(pen, startCap);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetPenEndCapPtr)(GpPen *pen, GpLineCap endCap));
DEFINE_MEMBER(GdipSetPenEndCap);

GpStatus WINGDIPAPI
GdipSetPenEndCap(GpPen *pen, GpLineCap endCap)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipSetPenEndCap == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipSetPenEndCap);
        }
        if ( g_GdipSetPenEndCap != NULL )
        {
            status = (*g_GdipSetPenEndCap)(pen, endCap);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetPenDashCap197819Ptr)(GpPen *pen, GpDashCap dashCap));
DEFINE_MEMBER(GdipSetPenDashCap197819);

GpStatus WINGDIPAPI
GdipSetPenDashCap197819(GpPen *pen, GpDashCap dashCap)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipSetPenDashCap197819 == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipSetPenDashCap197819);
        }
        if ( g_GdipSetPenDashCap197819 != NULL )
        {
            status = (*g_GdipSetPenDashCap197819)(pen, dashCap);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetPenStartCapPtr)(GpPen *pen, GpLineCap *startCap));
DEFINE_MEMBER(GdipGetPenStartCap);

GpStatus WINGDIPAPI
GdipGetPenStartCap(GpPen *pen, GpLineCap *startCap)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetPenStartCap == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetPenStartCap);
        }
        if ( g_GdipGetPenStartCap != NULL )
        {
            status = (*g_GdipGetPenStartCap)(pen, startCap);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetPenEndCapPtr)(GpPen *pen, GpLineCap *endCap));
DEFINE_MEMBER(GdipGetPenEndCap);

GpStatus WINGDIPAPI
GdipGetPenEndCap(GpPen *pen, GpLineCap *endCap)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetPenEndCap == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetPenEndCap);
        }
        if ( g_GdipGetPenEndCap != NULL )
        {
            status = (*g_GdipGetPenEndCap)(pen, endCap);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetPenDashCap197819Ptr)(GpPen *pen, GpDashCap *dashCap));
DEFINE_MEMBER(GdipGetPenDashCap197819);

GpStatus WINGDIPAPI
GdipGetPenDashCap197819(GpPen *pen, GpDashCap *dashCap)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetPenDashCap197819 == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetPenDashCap197819);
        }
        if ( g_GdipGetPenDashCap197819 != NULL )
        {
            status = (*g_GdipGetPenDashCap197819)(pen, dashCap);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetPenLineJoinPtr)(GpPen *pen, GpLineJoin lineJoin));
DEFINE_MEMBER(GdipSetPenLineJoin);

GpStatus WINGDIPAPI
GdipSetPenLineJoin(GpPen *pen, GpLineJoin lineJoin)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipSetPenLineJoin == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipSetPenLineJoin);
        }
        if ( g_GdipSetPenLineJoin != NULL )
        {
            status = (*g_GdipSetPenLineJoin)(pen, lineJoin);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetPenLineJoinPtr)(GpPen *pen, GpLineJoin *lineJoin));
DEFINE_MEMBER(GdipGetPenLineJoin);

GpStatus WINGDIPAPI
GdipGetPenLineJoin(GpPen *pen, GpLineJoin *lineJoin)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetPenLineJoin == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetPenLineJoin);
        }
        if ( g_GdipGetPenLineJoin != NULL )
        {
            status = (*g_GdipGetPenLineJoin)(pen, lineJoin);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetPenCustomStartCapPtr)(GpPen *pen, GpCustomLineCap* customCap));
DEFINE_MEMBER(GdipSetPenCustomStartCap);

GpStatus WINGDIPAPI
GdipSetPenCustomStartCap(GpPen *pen, GpCustomLineCap* customCap)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipSetPenCustomStartCap == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipSetPenCustomStartCap);
        }
        if ( g_GdipSetPenCustomStartCap != NULL )
        {
            status = (*g_GdipSetPenCustomStartCap)(pen, customCap);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetPenCustomStartCapPtr)(GpPen *pen, GpCustomLineCap** customCap));
DEFINE_MEMBER(GdipGetPenCustomStartCap);

GpStatus WINGDIPAPI
GdipGetPenCustomStartCap(GpPen *pen, GpCustomLineCap** customCap)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetPenCustomStartCap == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetPenCustomStartCap);
        }
        if ( g_GdipGetPenCustomStartCap != NULL )
        {
            status = (*g_GdipGetPenCustomStartCap)(pen, customCap);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetPenCustomEndCapPtr)(GpPen *pen, GpCustomLineCap* customCap));
DEFINE_MEMBER(GdipSetPenCustomEndCap);

GpStatus WINGDIPAPI
GdipSetPenCustomEndCap(GpPen *pen, GpCustomLineCap* customCap)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipSetPenCustomEndCap == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipSetPenCustomEndCap);
        }
        if ( g_GdipSetPenCustomEndCap != NULL )
        {
            status = (*g_GdipSetPenCustomEndCap)(pen, customCap);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetPenCustomEndCapPtr)(GpPen *pen, GpCustomLineCap** customCap));
DEFINE_MEMBER(GdipGetPenCustomEndCap);

GpStatus WINGDIPAPI
GdipGetPenCustomEndCap(GpPen *pen, GpCustomLineCap** customCap)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetPenCustomEndCap == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetPenCustomEndCap);
        }
        if ( g_GdipGetPenCustomEndCap != NULL )
        {
            status = (*g_GdipGetPenCustomEndCap)(pen, customCap);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetPenMiterLimitPtr)(GpPen *pen, REAL miterLimit));
DEFINE_MEMBER(GdipSetPenMiterLimit);

GpStatus WINGDIPAPI
GdipSetPenMiterLimit(GpPen *pen, REAL miterLimit)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipSetPenMiterLimit == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipSetPenMiterLimit);
        }
        if ( g_GdipSetPenMiterLimit != NULL )
        {
            status = (*g_GdipSetPenMiterLimit)(pen, miterLimit);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetPenMiterLimitPtr)(GpPen *pen, REAL *miterLimit));
DEFINE_MEMBER(GdipGetPenMiterLimit);

GpStatus WINGDIPAPI
GdipGetPenMiterLimit(GpPen *pen, REAL *miterLimit)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetPenMiterLimit == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetPenMiterLimit);
        }
        if ( g_GdipGetPenMiterLimit != NULL )
        {
            status = (*g_GdipGetPenMiterLimit)(pen, miterLimit);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetPenModePtr)(GpPen *pen, GpPenAlignment penMode));
DEFINE_MEMBER(GdipSetPenMode);

GpStatus WINGDIPAPI
GdipSetPenMode(GpPen *pen, GpPenAlignment penMode)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipSetPenMode == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipSetPenMode);
        }
        if ( g_GdipSetPenMode != NULL )
        {
            status = (*g_GdipSetPenMode)(pen, penMode);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetPenModePtr)(GpPen *pen, GpPenAlignment *penMode));
DEFINE_MEMBER(GdipGetPenMode);

GpStatus WINGDIPAPI
GdipGetPenMode(GpPen *pen, GpPenAlignment *penMode)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetPenMode == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetPenMode);
        }
        if ( g_GdipGetPenMode != NULL )
        {
            status = (*g_GdipGetPenMode)(pen, penMode);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetPenTransformPtr)(GpPen *pen, GpMatrix *matrix));
DEFINE_MEMBER(GdipSetPenTransform);

GpStatus WINGDIPAPI
GdipSetPenTransform(GpPen *pen, GpMatrix *matrix)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipSetPenTransform == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipSetPenTransform);
        }
        if ( g_GdipSetPenTransform != NULL )
        {
            status = (*g_GdipSetPenTransform)(pen, matrix);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetPenTransformPtr)(GpPen *pen, GpMatrix *matrix));
DEFINE_MEMBER(GdipGetPenTransform);

GpStatus WINGDIPAPI
GdipGetPenTransform(GpPen *pen, GpMatrix *matrix)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetPenTransform == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetPenTransform);
        }
        if ( g_GdipGetPenTransform != NULL )
        {
            status = (*g_GdipGetPenTransform)(pen, matrix);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipResetPenTransformPtr)(GpPen *pen));
DEFINE_MEMBER(GdipResetPenTransform);

GpStatus WINGDIPAPI
GdipResetPenTransform(GpPen *pen)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipResetPenTransform == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipResetPenTransform);
        }
        if ( g_GdipResetPenTransform != NULL )
        {
            status = (*g_GdipResetPenTransform)(pen);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipMultiplyPenTransformPtr)(GpPen *pen, GDIPCONST GpMatrix *matrix,
                                          GpMatrixOrder order));
DEFINE_MEMBER(GdipMultiplyPenTransform);

GpStatus WINGDIPAPI
GdipMultiplyPenTransform(GpPen *pen, GDIPCONST GpMatrix *matrix,
                           GpMatrixOrder order)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipMultiplyPenTransform == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipMultiplyPenTransform);
        }
        if ( g_GdipMultiplyPenTransform != NULL )
        {
            status = (*g_GdipMultiplyPenTransform)(pen, matrix, order);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipTranslatePenTransformPtr)(GpPen *pen, REAL dx, REAL dy,
                                           GpMatrixOrder order));
DEFINE_MEMBER(GdipTranslatePenTransform);

GpStatus WINGDIPAPI
GdipTranslatePenTransform(GpPen *pen, REAL dx, REAL dy,
                            GpMatrixOrder order)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipTranslatePenTransform == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipTranslatePenTransform);
        }
        if ( g_GdipTranslatePenTransform != NULL )
        {
            status = (*g_GdipTranslatePenTransform)(pen, dx, dy, order);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipScalePenTransformPtr)(GpPen *pen, REAL sx, REAL sy,
                                           GpMatrixOrder order));
DEFINE_MEMBER(GdipScalePenTransform);

GpStatus WINGDIPAPI
GdipScalePenTransform(GpPen *pen, REAL sx, REAL sy,
                            GpMatrixOrder order)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipScalePenTransform == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipScalePenTransform);
        }
        if ( g_GdipScalePenTransform != NULL )
        {
            status = (*g_GdipScalePenTransform)(pen, sx, sy, order);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipRotatePenTransformPtr)(GpPen *pen, REAL angle, GpMatrixOrder order));
DEFINE_MEMBER(GdipRotatePenTransform);

GpStatus WINGDIPAPI
GdipRotatePenTransform(GpPen *pen, REAL angle, GpMatrixOrder order)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipRotatePenTransform == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipRotatePenTransform);
        }
        if ( g_GdipRotatePenTransform != NULL )
        {
            status = (*g_GdipRotatePenTransform)(pen, angle, order);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetPenColorPtr)(GpPen *pen, ARGB argb));
DEFINE_MEMBER(GdipSetPenColor);

GpStatus WINGDIPAPI
GdipSetPenColor(GpPen *pen, ARGB argb)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipSetPenColor == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipSetPenColor);
        }
        if ( g_GdipSetPenColor != NULL )
        {
            status = (*g_GdipSetPenColor)(pen, argb);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetPenColorPtr)(GpPen *pen, ARGB *argb));
DEFINE_MEMBER(GdipGetPenColor);

GpStatus WINGDIPAPI
GdipGetPenColor(GpPen *pen, ARGB *argb)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetPenColor == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetPenColor);
        }
        if ( g_GdipGetPenColor != NULL )
        {
            status = (*g_GdipGetPenColor)(pen, argb);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetPenBrushFillPtr)(GpPen *pen, GpBrush *brush));
DEFINE_MEMBER(GdipSetPenBrushFill);

GpStatus WINGDIPAPI
GdipSetPenBrushFill(GpPen *pen, GpBrush *brush)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipSetPenBrushFill == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipSetPenBrushFill);
        }
        if ( g_GdipSetPenBrushFill != NULL )
        {
            status = (*g_GdipSetPenBrushFill)(pen, brush);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetPenBrushFillPtr)(GpPen *pen, GpBrush **brush));
DEFINE_MEMBER(GdipGetPenBrushFill);

GpStatus WINGDIPAPI
GdipGetPenBrushFill(GpPen *pen, GpBrush **brush)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetPenBrushFill == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetPenBrushFill);
        }
        if ( g_GdipGetPenBrushFill != NULL )
        {
            status = (*g_GdipGetPenBrushFill)(pen, brush);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetPenFillTypePtr)(GpPen *pen, GpPenType* type));
DEFINE_MEMBER(GdipGetPenFillType);

GpStatus WINGDIPAPI
GdipGetPenFillType(GpPen *pen, GpPenType* type)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetPenFillType == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetPenFillType);
        }
        if ( g_GdipGetPenFillType != NULL )
        {
            status = (*g_GdipGetPenFillType)(pen, type);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetPenDashStylePtr)(GpPen *pen, GpDashStyle *dashstyle));
DEFINE_MEMBER(GdipGetPenDashStyle);

GpStatus WINGDIPAPI
GdipGetPenDashStyle(GpPen *pen, GpDashStyle *dashstyle)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetPenDashStyle == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetPenDashStyle);
        }
        if ( g_GdipGetPenDashStyle != NULL )
        {
            status = (*g_GdipGetPenDashStyle)(pen, dashstyle);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetPenDashStylePtr)(GpPen *pen, GpDashStyle dashstyle));
DEFINE_MEMBER(GdipSetPenDashStyle);

GpStatus WINGDIPAPI
GdipSetPenDashStyle(GpPen *pen, GpDashStyle dashstyle)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipSetPenDashStyle == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipSetPenDashStyle);
        }
        if ( g_GdipSetPenDashStyle != NULL )
        {
            status = (*g_GdipSetPenDashStyle)(pen, dashstyle);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetPenDashOffsetPtr)(GpPen *pen, REAL *offset));
DEFINE_MEMBER(GdipGetPenDashOffset);

GpStatus WINGDIPAPI
GdipGetPenDashOffset(GpPen *pen, REAL *offset)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetPenDashOffset == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetPenDashOffset);
        }
        if ( g_GdipGetPenDashOffset != NULL )
        {
            status = (*g_GdipGetPenDashOffset)(pen, offset);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetPenDashOffsetPtr)(GpPen *pen, REAL offset));
DEFINE_MEMBER(GdipSetPenDashOffset);

GpStatus WINGDIPAPI
GdipSetPenDashOffset(GpPen *pen, REAL offset)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipSetPenDashOffset == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipSetPenDashOffset);
        }
        if ( g_GdipSetPenDashOffset != NULL )
        {
            status = (*g_GdipSetPenDashOffset)(pen, offset);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetPenDashCountPtr)(GpPen *pen, INT *count));
DEFINE_MEMBER(GdipGetPenDashCount);

GpStatus WINGDIPAPI
GdipGetPenDashCount(GpPen *pen, INT *count)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetPenDashCount == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetPenDashCount);
        }
        if ( g_GdipGetPenDashCount != NULL )
        {
            status = (*g_GdipGetPenDashCount)(pen, count);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetPenDashArrayPtr)(GpPen *pen, GDIPCONST REAL *dash, INT count));
DEFINE_MEMBER(GdipSetPenDashArray);

GpStatus WINGDIPAPI
GdipSetPenDashArray(GpPen *pen, GDIPCONST REAL *dash, INT count)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipSetPenDashArray == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipSetPenDashArray);
        }
        if ( g_GdipSetPenDashArray != NULL )
        {
            status = (*g_GdipSetPenDashArray)(pen, dash, count);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetPenDashArrayPtr)(GpPen *pen, REAL *dash, INT count));
DEFINE_MEMBER(GdipGetPenDashArray);

GpStatus WINGDIPAPI
GdipGetPenDashArray(GpPen *pen, REAL *dash, INT count)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetPenDashArray == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetPenDashArray);
        }
        if ( g_GdipGetPenDashArray != NULL )
        {
            status = (*g_GdipGetPenDashArray)(pen, dash, count);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetPenCompoundCountPtr)(GpPen *pen, INT *count));
DEFINE_MEMBER(GdipGetPenCompoundCount);

GpStatus WINGDIPAPI
GdipGetPenCompoundCount(GpPen *pen, INT *count)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetPenCompoundCount == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetPenCompoundCount);
        }
        if ( g_GdipGetPenCompoundCount != NULL )
        {
            status = (*g_GdipGetPenCompoundCount)(pen, count);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetPenCompoundArrayPtr)(GpPen *pen, GDIPCONST REAL *dash, INT count));
DEFINE_MEMBER(GdipSetPenCompoundArray);

GpStatus WINGDIPAPI
GdipSetPenCompoundArray(GpPen *pen, GDIPCONST REAL *dash, INT count)

{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipSetPenCompoundArray == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipSetPenCompoundArray);
        }
        if ( g_GdipSetPenCompoundArray != NULL )
        {
            status = (*g_GdipSetPenCompoundArray)(pen, dash, count);
        }
    }
    return status;
}

DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetPenCompoundArrayPtr)(GpPen *pen, REAL *dash, INT count));
DEFINE_MEMBER(GdipGetPenCompoundArray);

GpStatus WINGDIPAPI
GdipGetPenCompoundArray(GpPen *pen, REAL *dash, INT count)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetPenCompoundArray == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetPenCompoundArray);
        }
        if ( g_GdipGetPenCompoundArray != NULL )
        {
            status = (*g_GdipGetPenCompoundArray)(pen, dash, count);
        }
    }
    return status;
}


//----------------------------------------------------------------------------
// Platform Shunt
//----------------------------------------------------------------------------

VOID WINAPI
Gdiplus_PenInit()
{
}

