#include "stdafx.h"
#include "GdiplusShunt.h"

//----------------------------------------------------------------------------
// Brush APIs
//----------------------------------------------------------------------------

DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipCloneBrushPtr)(GpBrush *brush, GpBrush **cloneBrush));
DEFINE_MEMBER(GdipCloneBrush);

GpStatus WINGDIPAPI
GdipCloneBrush(GpBrush *brush, GpBrush **cloneBrush)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipCloneBrush == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipCloneBrush);
        }
        if ( g_GdipCloneBrush != NULL )
        {
            status = (*g_GdipCloneBrush)(brush, cloneBrush);
        }
    }
    return status;
}


DEFINE_POINTER( GpStatus (WINGDIPAPI *GdipDeleteBrushPtr)(GpBrush *brush));
DEFINE_MEMBER(GdipDeleteBrush);

GpStatus WINGDIPAPI
GdipDeleteBrush(GpBrush *brush)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipDeleteBrush == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipDeleteBrush);
        }
        if ( g_GdipDeleteBrush != NULL )
        {
            status = (*g_GdipDeleteBrush)(brush);
        }
    }
    return status;
}

DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetBrushTypePtr)(GpBrush *brush, GpBrushType *type));
DEFINE_MEMBER(GdipGetBrushType);

GpStatus WINGDIPAPI
GdipGetBrushType(GpBrush *brush, GpBrushType *type)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetBrushType == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetBrushType);
        }
        if ( g_GdipGetBrushType != NULL )
        {
            status = (*g_GdipGetBrushType)(brush, type);
        }
    }
    return status;
}

//----------------------------------------------------------------------------
// HatchBrush APIs
//----------------------------------------------------------------------------

DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipCreateHatchBrushPtr)(GpHatchStyle hatchstyle, ARGB forecol,
                              ARGB backcol, GpHatch **brush));
DEFINE_MEMBER(GdipCreateHatchBrush);

GpStatus WINGDIPAPI
GdipCreateHatchBrush(GpHatchStyle hatchstyle, ARGB forecol,
                              ARGB backcol, GpHatch **brush)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipCreateHatchBrush == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipCreateHatchBrush);
        }
        if ( g_GdipCreateHatchBrush != NULL )
        {
            status = (*g_GdipCreateHatchBrush)(hatchstyle, forecol, backcol, brush);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetHatchStylePtr)(GpHatch *brush, GpHatchStyle *hatchstyle));
DEFINE_MEMBER(GdipGetHatchStyle);

GpStatus WINGDIPAPI
GdipGetHatchStyle(GpHatch *brush, GpHatchStyle *hatchstyle)

{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetHatchStyle == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetHatchStyle);
        }
        if ( g_GdipGetHatchStyle != NULL )
        {
            status = (*g_GdipGetHatchStyle)(brush, hatchstyle);
        }
    }
    return status;
}

DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetHatchForegroundColorPtr)(GpHatch *brush, ARGB* forecol));
DEFINE_MEMBER(GdipGetHatchForegroundColor);

GpStatus WINGDIPAPI
GdipGetHatchForegroundColor(GpHatch *brush, ARGB* forecol)

{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetHatchForegroundColor == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetHatchForegroundColor);
        }
        if ( g_GdipGetHatchForegroundColor != NULL )
        {
            status = (*g_GdipGetHatchForegroundColor)(brush, forecol);
        }
    }
    return status;
}

DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetHatchBackgroundColorPtr)(GpHatch *brush, ARGB* backcol));
DEFINE_MEMBER(GdipGetHatchBackgroundColor);

GpStatus WINGDIPAPI
GdipGetHatchBackgroundColor(GpHatch *brush, ARGB* backcol)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetHatchBackgroundColor == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetHatchBackgroundColor);
        }
        if ( g_GdipGetHatchBackgroundColor != NULL )
        {
            status = (*g_GdipGetHatchBackgroundColor)(brush, backcol);
        }
    }
    return status;
}

//----------------------------------------------------------------------------
// TextureBrush APIs
//----------------------------------------------------------------------------

DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipCreateTexturePtr)(GpImage *image, GpWrapMode wrapmode, GpTexture **texture));
DEFINE_MEMBER(GdipCreateTexture);

GpStatus WINGDIPAPI
GdipCreateTexture(GpImage *image, GpWrapMode wrapmode, GpTexture **texture)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipCreateTexture == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipCreateTexture);
        }
        if ( g_GdipCreateTexture != NULL )
        {
            status = (*g_GdipCreateTexture)(image, wrapmode, texture);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipCreateTexture2Ptr)(GpImage *image, GpWrapMode wrapmode, REAL x,
                   REAL y, REAL width, REAL height, GpTexture **texture));
DEFINE_MEMBER(GdipCreateTexture2);

GpStatus WINGDIPAPI
GdipCreateTexture2(GpImage *image, GpWrapMode wrapmode, REAL x,
                   REAL y, REAL width, REAL height, GpTexture **texture)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipCreateTexture2 == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipCreateTexture2);
        }
        if ( g_GdipCreateTexture2 != NULL )
        {
            status = (*g_GdipCreateTexture2)(image, wrapmode, x, y, width, height, texture);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipCreateTextureIAPtr)(GpImage *image, 
                    GDIPCONST GpImageAttributes *imageAttributes, REAL x, REAL y, REAL width, REAL height, GpTexture **texture));
DEFINE_MEMBER(GdipCreateTextureIA);

GpStatus WINGDIPAPI
GdipCreateTextureIA(GpImage *image, 
                    GDIPCONST GpImageAttributes *imageAttributes,
                    REAL x, REAL y, REAL width, REAL height,
                    GpTexture **texture)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipCreateTextureIA == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipCreateTextureIA);
        }
        if ( g_GdipCreateTextureIA != NULL )
        {
            status = (*g_GdipCreateTextureIA)(image, imageAttributes, x, y, width, height, texture);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipCreateTexture2IPtr)(GpImage *image, GpWrapMode wrapmode, INT x,
                    INT y, INT width, INT height, GpTexture **texture));
DEFINE_MEMBER(GdipCreateTexture2I);

GpStatus WINGDIPAPI
GdipCreateTexture2I(GpImage *image, GpWrapMode wrapmode, INT x,
                    INT y, INT width, INT height, GpTexture **texture)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipCreateTexture2I == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipCreateTexture2I);
        }
        if ( g_GdipCreateTexture2I != NULL )
        {
            status = (*g_GdipCreateTexture2I)(image, wrapmode, x,
                                    y, width, height, texture);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipCreateTextureIAIPtr)(GpImage *image, 
                     GDIPCONST GpImageAttributes *imageAttributes, INT x, INT y, INT width, INT height, GpTexture **texture));
DEFINE_MEMBER(GdipCreateTextureIAI);

GpStatus WINGDIPAPI
GdipCreateTextureIAI(GpImage *image, 
                     GDIPCONST GpImageAttributes *imageAttributes,
                     INT x, INT y, INT width, INT height,
                     GpTexture **texture)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipCreateTextureIAI == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipCreateTextureIAI);
        }
        if ( g_GdipCreateTextureIAI != NULL )
        {
            status = (*g_GdipCreateTextureIAI)(image, imageAttributes, x, y, width, height, texture);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetTextureTransformPtr)(GpTexture *brush, GpMatrix *matrix));
DEFINE_MEMBER(GdipGetTextureTransform);

GpStatus WINGDIPAPI
GdipGetTextureTransform(GpTexture *brush, GpMatrix *matrix)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetTextureTransform == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetTextureTransform);
        }
        if ( g_GdipGetTextureTransform != NULL )
        {
            status = (*g_GdipGetTextureTransform)(brush, matrix);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetTextureTransformPtr)(GpTexture *brush, GDIPCONST GpMatrix *matrix));
DEFINE_MEMBER(GdipSetTextureTransform);

GpStatus WINGDIPAPI
GdipSetTextureTransform(GpTexture *brush, GDIPCONST GpMatrix *matrix)

{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipSetTextureTransform == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipSetTextureTransform);
        }
        if ( g_GdipSetTextureTransform != NULL )
        {
            status = (*g_GdipSetTextureTransform)(brush, matrix);
        }
    }
    return status;
}

DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipResetTextureTransformPtr)(GpTexture* brush));
DEFINE_MEMBER(GdipResetTextureTransform);

GpStatus WINGDIPAPI
GdipResetTextureTransform(GpTexture* brush)

{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipResetTextureTransform == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipResetTextureTransform);
        }
        if ( g_GdipResetTextureTransform != NULL )
        {
            status = (*g_GdipResetTextureTransform)(brush);
        }
    }
    return status;
}

DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipMultiplyTextureTransformPtr)(GpTexture* brush, GDIPCONST GpMatrix *matrix, GpMatrixOrder order));
DEFINE_MEMBER(GdipMultiplyTextureTransform);

GpStatus WINGDIPAPI
GdipMultiplyTextureTransform(GpTexture* brush, GDIPCONST GpMatrix *matrix,
                            GpMatrixOrder order)

{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipMultiplyTextureTransform == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipMultiplyTextureTransform);
        }
        if ( g_GdipMultiplyTextureTransform != NULL )
        {
            status = (*g_GdipMultiplyTextureTransform)(brush, matrix,
                                            order);
        }
    }
    return status;
}

DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipTranslateTextureTransformPtr)(GpTexture* brush, REAL dx, REAL dy, GpMatrixOrder order));
DEFINE_MEMBER(GdipTranslateTextureTransform);

GpStatus WINGDIPAPI
GdipTranslateTextureTransform(GpTexture* brush, REAL dx, REAL dy,
                            GpMatrixOrder order)

{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipTranslateTextureTransform == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipTranslateTextureTransform);
        }
        if ( g_GdipTranslateTextureTransform != NULL )
        {
            status = (*g_GdipTranslateTextureTransform)(brush, dx, dy, order);
        }
    }
    return status;
}

DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipScaleTextureTransformPtr)(GpTexture* brush, REAL sx, REAL sy, GpMatrixOrder order));
DEFINE_MEMBER(GdipScaleTextureTransform);

GpStatus WINGDIPAPI
GdipScaleTextureTransform(GpTexture* brush, REAL sx, REAL sy,
                            GpMatrixOrder order)

{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipScaleTextureTransform == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipScaleTextureTransform);
        }
        if ( g_GdipScaleTextureTransform != NULL )
        {
            status = (*g_GdipScaleTextureTransform)(brush, sx, sy, order);
        }
    }
    return status;
}

DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipRotateTextureTransformPtr)(GpTexture* brush, REAL angle, GpMatrixOrder order));
DEFINE_MEMBER(GdipRotateTextureTransform);

GpStatus WINGDIPAPI
GdipRotateTextureTransform(GpTexture* brush, REAL angle, GpMatrixOrder order)

{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipRotateTextureTransform == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipRotateTextureTransform);
        }
        if ( g_GdipRotateTextureTransform != NULL )
        {
            status = (*g_GdipRotateTextureTransform)(brush, angle, order);
        }
    }
    return status;
}

DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetTextureWrapModePtr)(GpTexture *brush, GpWrapMode wrapmode));
DEFINE_MEMBER(GdipSetTextureWrapMode);

GpStatus WINGDIPAPI
GdipSetTextureWrapMode(GpTexture *brush, GpWrapMode wrapmode)

{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipSetTextureWrapMode == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipSetTextureWrapMode);
        }
        if ( g_GdipSetTextureWrapMode != NULL )
        {
            status = (*g_GdipSetTextureWrapMode)(brush, wrapmode);
        }
    }
    return status;
}

DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetTextureWrapModePtr)(GpTexture *brush, GpWrapMode *wrapmode));
DEFINE_MEMBER(GdipGetTextureWrapMode);

GpStatus WINGDIPAPI
GdipGetTextureWrapMode(GpTexture *brush, GpWrapMode *wrapmode)

{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetTextureWrapMode == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetTextureWrapMode);
        }
        if ( g_GdipGetTextureWrapMode != NULL )
        {
            status = (*g_GdipGetTextureWrapMode)(brush, wrapmode);
        }
    }
    return status;
}

DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetTextureImagePtr)(GpTexture *brush, GpImage **image));
DEFINE_MEMBER(GdipGetTextureImage);

GpStatus WINGDIPAPI
GdipGetTextureImage(GpTexture *brush, GpImage **image)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetTextureImage == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetTextureImage);
        }
        if ( g_GdipGetTextureImage != NULL )
        {
            status = (*g_GdipGetTextureImage)(brush, image);
        }
    }
    return status;
}

//----------------------------------------------------------------------------
// SolidBrush APIs
//----------------------------------------------------------------------------

DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipCreateSolidFillPtr)(ARGB color, GpSolidFill **brush));
DEFINE_MEMBER(GdipCreateSolidFill);

GpStatus WINGDIPAPI
GdipCreateSolidFill(ARGB color, GpSolidFill **brush)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipCreateSolidFill == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipCreateSolidFill);
        }
        if ( g_GdipCreateSolidFill != NULL )
        {
            status = (*g_GdipCreateSolidFill)(color, brush);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetSolidFillColorPtr)(GpSolidFill *brush, ARGB color));
DEFINE_MEMBER(GdipSetSolidFillColor);

GpStatus WINGDIPAPI
GdipSetSolidFillColor(GpSolidFill *brush, ARGB color)

{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipSetSolidFillColor == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipSetSolidFillColor);
        }
        if ( g_GdipSetSolidFillColor != NULL )
        {
            status = (*g_GdipSetSolidFillColor)(brush, color);
        }
    }
    return status;
}

DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetSolidFillColorPtr)(GpSolidFill *brush, ARGB *color));
DEFINE_MEMBER(GdipGetSolidFillColor);

GpStatus WINGDIPAPI
GdipGetSolidFillColor(GpSolidFill *brush, ARGB *color)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetSolidFillColor == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetSolidFillColor);
        }
        if ( g_GdipGetSolidFillColor != NULL )
        {
            status = (*g_GdipGetSolidFillColor)(brush, color);
        }
    }
    return status;
}

//----------------------------------------------------------------------------
// LineBrush APIs
//----------------------------------------------------------------------------

DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipCreateLineBrushPtr)(GDIPCONST GpPointF* point1,
                    GDIPCONST GpPointF* point2, ARGB color1, ARGB color2,
                    GpWrapMode wrapMode, GpLineGradient **lineGradient));
DEFINE_MEMBER(GdipCreateLineBrush);

GpStatus WINGDIPAPI
GdipCreateLineBrush(GDIPCONST GpPointF* point1,
                    GDIPCONST GpPointF* point2,
                    ARGB color1, ARGB color2,
                    GpWrapMode wrapMode,
                    GpLineGradient **lineGradient)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipCreateLineBrush == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipCreateLineBrush);
        }
        if ( g_GdipCreateLineBrush != NULL )
        {
            status = (*g_GdipCreateLineBrush)(point1, point2, color1, color2, wrapMode, lineGradient);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipCreateLineBrushIPtr)(GDIPCONST GpPoint* point1,
                     GDIPCONST GpPoint* point2, ARGB color1, ARGB color2,
                     GpWrapMode wrapMode, GpLineGradient **lineGradient));
DEFINE_MEMBER(GdipCreateLineBrushI);

GpStatus WINGDIPAPI
GdipCreateLineBrushI(GDIPCONST GpPoint* point1,
                     GDIPCONST GpPoint* point2,
                     ARGB color1, ARGB color2,
                     GpWrapMode wrapMode,
                     GpLineGradient **lineGradient)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipCreateLineBrushI == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipCreateLineBrushI);
        }
        if ( g_GdipCreateLineBrushI != NULL )
        {
            status = (*g_GdipCreateLineBrushI)(point1, point2, color1, color2, wrapMode, lineGradient);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipCreateLineBrushFromRectPtr)(GDIPCONST GpRectF* rect,
                            ARGB color1, ARGB color2, LinearGradientMode mode,
                            GpWrapMode wrapMode,GpLineGradient **lineGradient));
DEFINE_MEMBER(GdipCreateLineBrushFromRect);

GpStatus WINGDIPAPI
GdipCreateLineBrushFromRect(GDIPCONST GpRectF* rect,
                            ARGB color1, ARGB color2,
                            LinearGradientMode mode,
                            GpWrapMode wrapMode,
                            GpLineGradient **lineGradient)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipCreateLineBrushFromRect == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipCreateLineBrushFromRect);
        }
        if ( g_GdipCreateLineBrushFromRect != NULL )
        {
            status = (*g_GdipCreateLineBrushFromRect)(rect, color1, color2, mode, wrapMode, lineGradient);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipCreateLineBrushFromRectIPtr)(GDIPCONST GpRect* rect,
                             ARGB color1, ARGB color2, LinearGradientMode mode,
                             GpWrapMode wrapMode, GpLineGradient **lineGradient));
DEFINE_MEMBER(GdipCreateLineBrushFromRectI);

GpStatus WINGDIPAPI
GdipCreateLineBrushFromRectI(GDIPCONST GpRect* rect,
                             ARGB color1, ARGB color2,
                             LinearGradientMode mode,
                             GpWrapMode wrapMode,
                             GpLineGradient **lineGradient)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipCreateLineBrushFromRectI == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipCreateLineBrushFromRectI);
        }
        if ( g_GdipCreateLineBrushFromRectI != NULL )
        {
            status = (*g_GdipCreateLineBrushFromRectI)(rect, color1, color2, mode, wrapMode, lineGradient);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipCreateLineBrushFromRectWithAnglePtr)(GDIPCONST GpRectF* rect,
                                     ARGB color1, ARGB color2, REAL angle,
                                     BOOL isAngleScalable, GpWrapMode wrapMode, GpLineGradient **lineGradient));
DEFINE_MEMBER(GdipCreateLineBrushFromRectWithAngle);

GpStatus WINGDIPAPI
GdipCreateLineBrushFromRectWithAngle(GDIPCONST GpRectF* rect,
                                     ARGB color1, ARGB color2,
                                     REAL angle,
                                     BOOL isAngleScalable,
                                     GpWrapMode wrapMode,
                                     GpLineGradient **lineGradient)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipCreateLineBrushFromRectWithAngle == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipCreateLineBrushFromRectWithAngle);
        }
        if ( g_GdipCreateLineBrushFromRectWithAngle != NULL )
        {
            status = (*g_GdipCreateLineBrushFromRectWithAngle)(rect, color1, color2, angle, isAngleScalable, wrapMode, lineGradient);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipCreateLineBrushFromRectWithAngleIPtr)(GDIPCONST GpRect* rect,
                                     ARGB color1, ARGB color2,
                                     REAL angle, BOOL isAngleScalable, GpWrapMode wrapMode, GpLineGradient **lineGradient));
DEFINE_MEMBER(GdipCreateLineBrushFromRectWithAngleI);

GpStatus WINGDIPAPI
GdipCreateLineBrushFromRectWithAngleI(GDIPCONST GpRect* rect,
                                     ARGB color1, ARGB color2,
                                     REAL angle,
                                     BOOL isAngleScalable,
                                     GpWrapMode wrapMode,
                                     GpLineGradient **lineGradient)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipCreateLineBrushFromRectWithAngleI == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipCreateLineBrushFromRectWithAngleI);
        }
        if ( g_GdipCreateLineBrushFromRectWithAngleI != NULL )
        {
            status = (*g_GdipCreateLineBrushFromRectWithAngleI)(rect, color1, color2, angle, isAngleScalable, wrapMode, lineGradient);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetLineColorsPtr)(GpLineGradient *brush, ARGB color1, ARGB color2));
DEFINE_MEMBER(GdipSetLineColors);

GpStatus WINGDIPAPI
GdipSetLineColors(GpLineGradient *brush, ARGB color1, ARGB color2)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipSetLineColors == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipSetLineColors);
        }
        if ( g_GdipSetLineColors != NULL )
        {
            status = (*g_GdipSetLineColors)(brush, color1, color2);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetLineColorsPtr)(GpLineGradient *brush, ARGB* colors));
DEFINE_MEMBER(GdipGetLineColors);

GpStatus WINGDIPAPI
GdipGetLineColors(GpLineGradient *brush, ARGB* colors)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetLineColors == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetLineColors);
        }
        if ( g_GdipGetLineColors != NULL )
        {
            status = (*g_GdipGetLineColors)(brush, colors);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetLineRectPtr)(GpLineGradient *brush, GpRectF *rect));
DEFINE_MEMBER(GdipGetLineRect);

GpStatus WINGDIPAPI
GdipGetLineRect(GpLineGradient *brush, GpRectF *rect)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetLineRect == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetLineRect);
        }
        if ( g_GdipGetLineRect != NULL )
        {
            status = (*g_GdipGetLineRect)(brush, rect);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetLineRectIPtr)(GpLineGradient *brush, GpRect *rect));
DEFINE_MEMBER(GdipGetLineRectI);

GpStatus WINGDIPAPI
GdipGetLineRectI(GpLineGradient *brush, GpRect *rect)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetLineRectI == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetLineRectI);
        }
        if ( g_GdipGetLineRectI != NULL )
        {
            status = (*g_GdipGetLineRectI)(brush, rect);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetLineGammaCorrectionPtr)(GpLineGradient *brush, BOOL useGammaCorrection));
DEFINE_MEMBER(GdipSetLineGammaCorrection);

GpStatus WINGDIPAPI
GdipSetLineGammaCorrection(GpLineGradient *brush, BOOL useGammaCorrection)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipSetLineGammaCorrection == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipSetLineGammaCorrection);
        }
        if ( g_GdipSetLineGammaCorrection != NULL )
        {
            status = (*g_GdipSetLineGammaCorrection)(brush, useGammaCorrection);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetLineGammaCorrectionPtr)(GpLineGradient *brush, BOOL *useGammaCorrection));
DEFINE_MEMBER(GdipGetLineGammaCorrection);

GpStatus WINGDIPAPI
GdipGetLineGammaCorrection(GpLineGradient *brush, BOOL *useGammaCorrection)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetLineGammaCorrection == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetLineGammaCorrection);
        }
        if ( g_GdipGetLineGammaCorrection != NULL )
        {
            status = (*g_GdipGetLineGammaCorrection)(brush, useGammaCorrection);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetLineBlendCountPtr)(GpLineGradient *brush, INT *count));
DEFINE_MEMBER(GdipGetLineBlendCount);

GpStatus WINGDIPAPI
GdipGetLineBlendCount(GpLineGradient *brush, INT *count)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetLineBlendCount == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetLineBlendCount);
        }
        if ( g_GdipGetLineBlendCount != NULL )
        {
            status = (*g_GdipGetLineBlendCount)(brush, count);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetLineBlendPtr)(GpLineGradient *brush, REAL *blend, REAL* positions,INT count));
DEFINE_MEMBER(GdipGetLineBlend);

GpStatus WINGDIPAPI
GdipGetLineBlend(GpLineGradient *brush, REAL *blend, REAL* positions, INT count)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetLineBlend == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetLineBlend);
        }
        if ( g_GdipGetLineBlend != NULL )
        {
            status = (*g_GdipGetLineBlend)(brush, blend, positions, count);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetLineBlendPtr)(GpLineGradient *brush, GDIPCONST REAL *blend,
                 GDIPCONST REAL* positions, INT count));
DEFINE_MEMBER(GdipSetLineBlend);

GpStatus WINGDIPAPI
GdipSetLineBlend(GpLineGradient *brush, GDIPCONST REAL *blend,
                 GDIPCONST REAL* positions, INT count)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipSetLineBlend == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipSetLineBlend);
        }
        if ( g_GdipSetLineBlend != NULL )
        {
            status = (*g_GdipSetLineBlend)(brush, blend, positions, count);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetLinePresetBlendCountPtr)(GpLineGradient *brush, INT *count));
DEFINE_MEMBER(GdipGetLinePresetBlendCount);

GpStatus WINGDIPAPI
GdipGetLinePresetBlendCount(GpLineGradient *brush, INT *count)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetLinePresetBlendCount == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetLinePresetBlendCount);
        }
        if ( g_GdipGetLinePresetBlendCount != NULL )
        {
            status = (*g_GdipGetLinePresetBlendCount)(brush, count);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetLinePresetBlendPtr)(GpLineGradient *brush, ARGB *blend,
                                           REAL* positions, INT count));
DEFINE_MEMBER(GdipGetLinePresetBlend);

GpStatus WINGDIPAPI
GdipGetLinePresetBlend(GpLineGradient *brush, ARGB *blend, REAL* positions, INT count)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetLinePresetBlend == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetLinePresetBlend);
        }
        if ( g_GdipGetLinePresetBlend != NULL )
        {
            status = (*g_GdipGetLinePresetBlend)(brush, blend, positions, count);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetLinePresetBlendPtr)(GpLineGradient *brush, GDIPCONST ARGB *blend,
                       GDIPCONST REAL* positions, INT count));
DEFINE_MEMBER(GdipSetLinePresetBlend);

GpStatus WINGDIPAPI
GdipSetLinePresetBlend(GpLineGradient *brush, GDIPCONST ARGB *blend,
                       GDIPCONST REAL* positions, INT count)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipSetLinePresetBlend == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipSetLinePresetBlend);
        }
        if ( g_GdipSetLinePresetBlend != NULL )
        {
            status = (*g_GdipSetLinePresetBlend)(brush, blend, positions, count);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetLineSigmaBlendPtr)(GpLineGradient *brush, REAL focus, REAL scale));
DEFINE_MEMBER(GdipSetLineSigmaBlend);

GpStatus WINGDIPAPI
GdipSetLineSigmaBlend(GpLineGradient *brush, REAL focus, REAL scale)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipSetLineSigmaBlend == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipSetLineSigmaBlend);
        }
        if ( g_GdipSetLineSigmaBlend != NULL )
        {
            status = (*g_GdipSetLineSigmaBlend)(brush, focus, scale);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetLineLinearBlendPtr)(GpLineGradient *brush, REAL focus, REAL scale));
DEFINE_MEMBER(GdipSetLineLinearBlend);

GpStatus WINGDIPAPI
GdipSetLineLinearBlend(GpLineGradient *brush, REAL focus, REAL scale)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipSetLineLinearBlend == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipSetLineLinearBlend);
        }
        if ( g_GdipSetLineLinearBlend != NULL )
        {
            status = (*g_GdipSetLineLinearBlend)(brush, focus, scale);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetLineWrapModePtr)(GpLineGradient *brush, GpWrapMode wrapmode));
DEFINE_MEMBER(GdipSetLineWrapMode);

GpStatus WINGDIPAPI
GdipSetLineWrapMode(GpLineGradient *brush, GpWrapMode wrapmode)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipSetLineWrapMode == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipSetLineWrapMode);
        }
        if ( g_GdipSetLineWrapMode != NULL )
        {
            status = (*g_GdipSetLineWrapMode)(brush, wrapmode);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetLineWrapModePtr)(GpLineGradient *brush, GpWrapMode *wrapmode));
DEFINE_MEMBER(GdipGetLineWrapMode);

GpStatus WINGDIPAPI
GdipGetLineWrapMode(GpLineGradient *brush, GpWrapMode *wrapmode)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetLineWrapMode == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetLineWrapMode);
        }
        if ( g_GdipGetLineWrapMode != NULL )
        {
            status = (*g_GdipGetLineWrapMode)(brush, wrapmode);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetLineTransformPtr)(GpLineGradient *brush, GpMatrix *matrix));
DEFINE_MEMBER(GdipGetLineTransform);

GpStatus WINGDIPAPI
GdipGetLineTransform(GpLineGradient *brush, GpMatrix *matrix)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetLineTransform == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetLineTransform);
        }
        if ( g_GdipGetLineTransform != NULL )
        {
            status = (*g_GdipGetLineTransform)(brush, matrix);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetLineTransformPtr)(GpLineGradient *brush, GDIPCONST GpMatrix *matrix));
DEFINE_MEMBER(GdipSetLineTransform);

GpStatus WINGDIPAPI
GdipSetLineTransform(GpLineGradient *brush, GDIPCONST GpMatrix *matrix)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipSetLineTransform == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipSetLineTransform);
        }
        if ( g_GdipSetLineTransform != NULL )
        {
            status = (*g_GdipSetLineTransform)(brush, matrix);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipResetLineTransformPtr)(GpLineGradient* brush));
DEFINE_MEMBER(GdipResetLineTransform);

GpStatus WINGDIPAPI
GdipResetLineTransform(GpLineGradient* brush)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipResetLineTransform == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipResetLineTransform);
        }
        if ( g_GdipResetLineTransform != NULL )
        {
            status = (*g_GdipResetLineTransform)(brush);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipMultiplyLineTransformPtr)(GpLineGradient* brush, GDIPCONST GpMatrix *matrix,
                            GpMatrixOrder order));
DEFINE_MEMBER(GdipMultiplyLineTransform);

GpStatus WINGDIPAPI
GdipMultiplyLineTransform(GpLineGradient* brush, GDIPCONST GpMatrix *matrix,
                            GpMatrixOrder order)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipMultiplyLineTransform == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipMultiplyLineTransform);
        }
        if ( g_GdipMultiplyLineTransform != NULL )
        {
            status = (*g_GdipMultiplyLineTransform)(brush, matrix, order);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipTranslateLineTransformPtr)(GpLineGradient* brush, REAL dx, REAL dy,
                            GpMatrixOrder order));
DEFINE_MEMBER(GdipTranslateLineTransform);

GpStatus WINGDIPAPI
GdipTranslateLineTransform(GpLineGradient* brush, REAL dx, REAL dy, GpMatrixOrder order)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipTranslateLineTransform == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipTranslateLineTransform);
        }
        if ( g_GdipTranslateLineTransform != NULL )
        {
            status = (*g_GdipTranslateLineTransform)(brush, dx, dy, order);
        }
    }
    return status;
}

DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipScaleLineTransformPtr)(GpLineGradient* brush, REAL sx, REAL sy, GpMatrixOrder order));
DEFINE_MEMBER(GdipScaleLineTransform);

GpStatus WINGDIPAPI
GdipScaleLineTransform(GpLineGradient* brush, REAL sx, REAL sy,
                            GpMatrixOrder order)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipScaleLineTransform == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipScaleLineTransform);
        }
        if ( g_GdipScaleLineTransform != NULL )
        {
            status = (*g_GdipScaleLineTransform)(brush, sx, sy, order);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipRotateLineTransformPtr)(GpLineGradient* brush, REAL angle, GpMatrixOrder order));
DEFINE_MEMBER(GdipRotateLineTransform);

GpStatus WINGDIPAPI
GdipRotateLineTransform(GpLineGradient* brush, REAL angle, 
                        GpMatrixOrder order)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipRotateLineTransform == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipRotateLineTransform);
        }
        if ( g_GdipRotateLineTransform != NULL )
        {
            status = (*g_GdipRotateLineTransform)(brush, angle, order);
        }
    }
    return status;
}

//----------------------------------------------------------------------------
// PathGradientBrush APIs
//----------------------------------------------------------------------------

DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipCreatePathGradientPtr)(GDIPCONST GpPointF* points,
                                    INT count, GpWrapMode wrapMode, GpPathGradient **polyGradient));
DEFINE_MEMBER(GdipCreatePathGradient);

GpStatus WINGDIPAPI
GdipCreatePathGradient(GDIPCONST GpPointF* points,
                                    INT count,
                                    GpWrapMode wrapMode,
                                    GpPathGradient **polyGradient)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipCreatePathGradient == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipCreatePathGradient);
        }
        if ( g_GdipCreatePathGradient != NULL )
        {
            status = (*g_GdipCreatePathGradient)(points, count, wrapMode, polyGradient);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipCreatePathGradientIPtr)(GDIPCONST GpPoint* points,
                                    INT count, GpWrapMode wrapMode, GpPathGradient **polyGradient));
DEFINE_MEMBER(GdipCreatePathGradientI);

GpStatus WINGDIPAPI
GdipCreatePathGradientI(GDIPCONST GpPoint* points,
                                    INT count,
                                    GpWrapMode wrapMode,
                                    GpPathGradient **polyGradient)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipCreatePathGradientI == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipCreatePathGradientI);
        }
        if ( g_GdipCreatePathGradientI != NULL )
        {
            status = (*g_GdipCreatePathGradientI)(points, count, wrapMode, polyGradient);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipCreatePathGradientFromPathPtr)(GDIPCONST GpPath* path,
                                    GpPathGradient **polyGradient));
DEFINE_MEMBER(GdipCreatePathGradientFromPath);

GpStatus WINGDIPAPI
GdipCreatePathGradientFromPath(GDIPCONST GpPath* path,
                                    GpPathGradient **polyGradient)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipCreatePathGradientFromPath == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipCreatePathGradientFromPath);
        }
        if ( g_GdipCreatePathGradientFromPath != NULL )
        {
            status = (*g_GdipCreatePathGradientFromPath)(path, polyGradient);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetPathGradientCenterColorPtr)(GpPathGradient *brush, ARGB* colors));
DEFINE_MEMBER(GdipGetPathGradientCenterColor);

GpStatus WINGDIPAPI
GdipGetPathGradientCenterColor(GpPathGradient *brush, ARGB* colors)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetPathGradientCenterColor == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetPathGradientCenterColor);
        }
        if ( g_GdipGetPathGradientCenterColor != NULL )
        {
            status = (*g_GdipGetPathGradientCenterColor)(brush, colors);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetPathGradientCenterColorPtr)(GpPathGradient *brush, ARGB colors));
DEFINE_MEMBER(GdipSetPathGradientCenterColor);

GpStatus WINGDIPAPI
GdipSetPathGradientCenterColor(GpPathGradient *brush, ARGB colors)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipSetPathGradientCenterColor == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipSetPathGradientCenterColor);
        }
        if ( g_GdipSetPathGradientCenterColor != NULL )
        {
            status = (*g_GdipSetPathGradientCenterColor)(brush, colors);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetPathGradientSurroundColorsWithCountPtr)(
                        GpPathGradient *brush, ARGB* color, INT* count));
DEFINE_MEMBER(GdipGetPathGradientSurroundColorsWithCount);

GpStatus WINGDIPAPI
GdipGetPathGradientSurroundColorsWithCount(GpPathGradient *brush, ARGB* color, INT* count)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetPathGradientSurroundColorsWithCount == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetPathGradientSurroundColorsWithCount);
        }
        if ( g_GdipGetPathGradientSurroundColorsWithCount != NULL )
        {
            status = (*g_GdipGetPathGradientSurroundColorsWithCount)(brush, color, count);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetPathGradientSurroundColorsWithCountPtr)(
                        GpPathGradient *brush, GDIPCONST ARGB* color, INT* count));
DEFINE_MEMBER(GdipSetPathGradientSurroundColorsWithCount);

GpStatus WINGDIPAPI
GdipSetPathGradientSurroundColorsWithCount(GpPathGradient *brush, GDIPCONST ARGB* color, INT* count)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipSetPathGradientSurroundColorsWithCount == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipSetPathGradientSurroundColorsWithCount);
        }
        if ( g_GdipSetPathGradientSurroundColorsWithCount != NULL )
        {
            status = (*g_GdipSetPathGradientSurroundColorsWithCount)(brush, color, count);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetPathGradientPathPtr)(GpPathGradient *brush, GpPath *path));
DEFINE_MEMBER(GdipGetPathGradientPath);

GpStatus WINGDIPAPI
GdipGetPathGradientPath(GpPathGradient *brush, GpPath *path)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetPathGradientPath == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetPathGradientPath);
        }
        if ( g_GdipGetPathGradientPath != NULL )
        {
            status = (*g_GdipGetPathGradientPath)(brush, path);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetPathGradientPathPtr)(GpPathGradient *brush, GDIPCONST GpPath *path));
DEFINE_MEMBER(GdipSetPathGradientPath);

GpStatus WINGDIPAPI
GdipSetPathGradientPath(GpPathGradient *brush, GDIPCONST GpPath *path)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipSetPathGradientPath == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipSetPathGradientPath);
        }
        if ( g_GdipSetPathGradientPath != NULL )
        {
            status = (*g_GdipSetPathGradientPath)(brush, path);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetPathGradientCenterPointPtr)(
                        GpPathGradient *brush, GpPointF* points));
DEFINE_MEMBER(GdipGetPathGradientCenterPoint);

GpStatus WINGDIPAPI
GdipGetPathGradientCenterPoint(
                        GpPathGradient *brush, GpPointF* points)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetPathGradientCenterPoint == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetPathGradientCenterPoint);
        }
        if ( g_GdipGetPathGradientCenterPoint != NULL )
        {
            status = (*g_GdipGetPathGradientCenterPoint)(brush, points);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetPathGradientCenterPointIPtr)(
                        GpPathGradient *brush, GpPoint* points));
DEFINE_MEMBER(GdipGetPathGradientCenterPointI);

GpStatus WINGDIPAPI
GdipGetPathGradientCenterPointI(GpPathGradient *brush, GpPoint* points)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetPathGradientCenterPointI == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetPathGradientCenterPointI);
        }
        if ( g_GdipGetPathGradientCenterPointI != NULL )
        {
            status = (*g_GdipGetPathGradientCenterPointI)(brush, points);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetPathGradientCenterPointPtr)(
                        GpPathGradient *brush, GDIPCONST GpPointF* points));
DEFINE_MEMBER(GdipSetPathGradientCenterPoint);

GpStatus WINGDIPAPI
GdipSetPathGradientCenterPoint(GpPathGradient *brush, GDIPCONST GpPointF* points)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipSetPathGradientCenterPoint == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipSetPathGradientCenterPoint);
        }
        if ( g_GdipSetPathGradientCenterPoint != NULL )
        {
            status = (*g_GdipSetPathGradientCenterPoint)(brush, points);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetPathGradientCenterPointIPtr)(
                        GpPathGradient *brush, GDIPCONST GpPoint* points));
DEFINE_MEMBER(GdipSetPathGradientCenterPointI);

GpStatus WINGDIPAPI
GdipSetPathGradientCenterPointI(GpPathGradient *brush, GDIPCONST GpPoint* points)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipSetPathGradientCenterPointI == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipSetPathGradientCenterPointI);
        }
        if ( g_GdipSetPathGradientCenterPointI != NULL )
        {
            status = (*g_GdipSetPathGradientCenterPointI)(brush, points);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetPathGradientRectPtr)(GpPathGradient *brush, GpRectF *rect));
DEFINE_MEMBER(GdipGetPathGradientRect);

GpStatus WINGDIPAPI
GdipGetPathGradientRect(GpPathGradient *brush, GpRectF *rect)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetPathGradientRect == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetPathGradientRect);
        }
        if ( g_GdipGetPathGradientRect != NULL )
        {
            status = (*g_GdipGetPathGradientRect)(brush, rect);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetPathGradientRectIPtr)(GpPathGradient *brush, GpRect *rect));
DEFINE_MEMBER(GdipGetPathGradientRectI);

GpStatus WINGDIPAPI
GdipGetPathGradientRectI(GpPathGradient *brush, GpRect *rect)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetPathGradientRectI == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetPathGradientRectI);
        }
        if ( g_GdipGetPathGradientRectI != NULL )
        {
            status = (*g_GdipGetPathGradientRectI)(brush, rect);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetPathGradientPointCountPtr)(GpPathGradient *brush, INT* count));
DEFINE_MEMBER(GdipGetPathGradientPointCount);

GpStatus WINGDIPAPI
GdipGetPathGradientPointCount(GpPathGradient *brush, INT* count)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetPathGradientPointCount == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetPathGradientPointCount);
        }
        if ( g_GdipGetPathGradientPointCount != NULL )
        {
            status = (*g_GdipGetPathGradientPointCount)(brush, count);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetPathGradientSurroundColorCountPtr)(GpPathGradient *brush, INT* count));
DEFINE_MEMBER(GdipGetPathGradientSurroundColorCount);

GpStatus WINGDIPAPI
GdipGetPathGradientSurroundColorCount(GpPathGradient *brush, INT* count)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetPathGradientSurroundColorCount == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetPathGradientSurroundColorCount);
        }
        if ( g_GdipGetPathGradientSurroundColorCount != NULL )
        {
            status = (*g_GdipGetPathGradientSurroundColorCount)(brush, count);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetPathGradientGammaCorrectionPtr)(GpPathGradient *brush,  BOOL useGammaCorrection));
DEFINE_MEMBER(GdipSetPathGradientGammaCorrection);

GpStatus WINGDIPAPI
GdipSetPathGradientGammaCorrection(GpPathGradient *brush, BOOL useGammaCorrection)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipSetPathGradientGammaCorrection == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipSetPathGradientGammaCorrection);
        }
        if ( g_GdipSetPathGradientGammaCorrection != NULL )
        {
            status = (*g_GdipSetPathGradientGammaCorrection)(brush, useGammaCorrection);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetPathGradientGammaCorrectionPtr)(GpPathGradient *brush, 
                                   BOOL *useGammaCorrection));
DEFINE_MEMBER(GdipGetPathGradientGammaCorrection);

GpStatus WINGDIPAPI
GdipGetPathGradientGammaCorrection(GpPathGradient *brush, BOOL *useGammaCorrection)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetPathGradientGammaCorrection == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetPathGradientGammaCorrection);
        }
        if ( g_GdipGetPathGradientGammaCorrection != NULL )
        {
            status = (*g_GdipGetPathGradientGammaCorrection)(brush, useGammaCorrection);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetPathGradientBlendCountPtr)(GpPathGradient *brush,INT *count));
DEFINE_MEMBER(GdipGetPathGradientBlendCount);

GpStatus WINGDIPAPI
GdipGetPathGradientBlendCount(GpPathGradient *brush, INT *count)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetPathGradientBlendCount == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetPathGradientBlendCount);
        }
        if ( g_GdipGetPathGradientBlendCount != NULL )
        {
            status = (*g_GdipGetPathGradientBlendCount)(brush, count);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetPathGradientBlendPtr)(GpPathGradient *brush,
                                    REAL *blend, REAL *positions, INT count));
DEFINE_MEMBER(GdipGetPathGradientBlend);

GpStatus WINGDIPAPI
GdipGetPathGradientBlend(GpPathGradient *brush, REAL *blend, REAL *positions, INT count)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetPathGradientBlend == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetPathGradientBlend);
        }
        if ( g_GdipGetPathGradientBlend != NULL )
        {
            status = (*g_GdipGetPathGradientBlend)(brush, blend, positions, count);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetPathGradientBlendPtr)(GpPathGradient *brush,
                GDIPCONST REAL *blend, GDIPCONST REAL *positions, INT count));
DEFINE_MEMBER(GdipSetPathGradientBlend);

GpStatus WINGDIPAPI
GdipSetPathGradientBlend(GpPathGradient *brush,
                GDIPCONST REAL *blend, GDIPCONST REAL *positions, INT count)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipSetPathGradientBlend == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipSetPathGradientBlend);
        }
        if ( g_GdipSetPathGradientBlend != NULL )
        {
            status = (*g_GdipSetPathGradientBlend)(brush, blend, positions, count);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetPathGradientPresetBlendCountPtr)(GpPathGradient *brush, INT *count));
DEFINE_MEMBER(GdipGetPathGradientPresetBlendCount);

GpStatus WINGDIPAPI
GdipGetPathGradientPresetBlendCount(GpPathGradient *brush, INT *count)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetPathGradientPresetBlendCount == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetPathGradientPresetBlendCount);
        }
        if ( g_GdipGetPathGradientPresetBlendCount != NULL )
        {
            status = (*g_GdipGetPathGradientPresetBlendCount)(brush, count);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetPathGradientPresetBlendPtr)(GpPathGradient *brush, ARGB *blend,
                                                REAL* positions, INT count));
DEFINE_MEMBER(GdipGetPathGradientPresetBlend);

GpStatus WINGDIPAPI
GdipGetPathGradientPresetBlend(GpPathGradient *brush, ARGB *blend, REAL* positions, INT count)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetPathGradientPresetBlend == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetPathGradientPresetBlend);
        }
        if ( g_GdipGetPathGradientPresetBlend != NULL )
        {
            status = (*g_GdipGetPathGradientPresetBlend)(brush, blend, positions, count);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetPathGradientPresetBlendPtr)(GpPathGradient *brush, GDIPCONST ARGB *blend,
                                        GDIPCONST REAL* positions, INT count));
DEFINE_MEMBER(GdipSetPathGradientPresetBlend);

GpStatus WINGDIPAPI
GdipSetPathGradientPresetBlend(GpPathGradient *brush, GDIPCONST ARGB *blend,
                                        GDIPCONST REAL* positions, INT count)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipSetPathGradientPresetBlend == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipSetPathGradientPresetBlend);
        }
        if ( g_GdipSetPathGradientPresetBlend != NULL )
        {
            status = (*g_GdipSetPathGradientPresetBlend)(brush, blend, positions, count);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetPathGradientSigmaBlendPtr)(GpPathGradient *brush, REAL focus, REAL scale));
DEFINE_MEMBER(GdipSetPathGradientSigmaBlend);

GpStatus WINGDIPAPI
GdipSetPathGradientSigmaBlend(GpPathGradient *brush, REAL focus, REAL scale)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipSetPathGradientSigmaBlend == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipSetPathGradientSigmaBlend);
        }
        if ( g_GdipSetPathGradientSigmaBlend != NULL )
        {
            status = (*g_GdipSetPathGradientSigmaBlend)(brush, focus, scale);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetPathGradientLinearBlendPtr)(GpPathGradient *brush, REAL focus, REAL scale));
DEFINE_MEMBER(GdipSetPathGradientLinearBlend);

GpStatus WINGDIPAPI
GdipSetPathGradientLinearBlend(GpPathGradient *brush, REAL focus, REAL scale)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipSetPathGradientLinearBlend == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipSetPathGradientLinearBlend);
        }
        if ( g_GdipSetPathGradientLinearBlend != NULL )
        {
            status = (*g_GdipSetPathGradientLinearBlend)(brush, focus, scale);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetPathGradientWrapModePtr)(GpPathGradient *brush,GpWrapMode *wrapmode));
DEFINE_MEMBER(GdipGetPathGradientWrapMode);

GpStatus WINGDIPAPI
GdipGetPathGradientWrapMode(GpPathGradient *brush, GpWrapMode *wrapmode)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetPathGradientWrapMode == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetPathGradientWrapMode);
        }
        if ( g_GdipGetPathGradientWrapMode != NULL )
        {
            status = (*g_GdipGetPathGradientWrapMode)(brush, wrapmode);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetPathGradientWrapModePtr)(GpPathGradient *brush,GpWrapMode wrapmode));
DEFINE_MEMBER(GdipSetPathGradientWrapMode);

GpStatus WINGDIPAPI
GdipSetPathGradientWrapMode(GpPathGradient *brush, GpWrapMode wrapmode)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipSetPathGradientWrapMode == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipSetPathGradientWrapMode);
        }
        if ( g_GdipSetPathGradientWrapMode != NULL )
        {
            status = (*g_GdipSetPathGradientWrapMode)(brush, wrapmode);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetPathGradientTransformPtr)(GpPathGradient *brush,GpMatrix *matrix));
DEFINE_MEMBER(GdipGetPathGradientTransform);

GpStatus WINGDIPAPI
GdipGetPathGradientTransform(GpPathGradient *brush, GpMatrix *matrix)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetPathGradientTransform == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetPathGradientTransform);
        }
        if ( g_GdipGetPathGradientTransform != NULL )
        {
            status = (*g_GdipGetPathGradientTransform)(brush, matrix);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetPathGradientTransformPtr)(GpPathGradient *brush, GpMatrix *matrix));
DEFINE_MEMBER(GdipSetPathGradientTransform);

GpStatus WINGDIPAPI
GdipSetPathGradientTransform(GpPathGradient *brush, GpMatrix *matrix)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipSetPathGradientTransform == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipSetPathGradientTransform);
        }
        if ( g_GdipSetPathGradientTransform != NULL )
        {
            status = (*g_GdipSetPathGradientTransform)(brush, matrix);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipResetPathGradientTransformPtr)(GpPathGradient* brush));
DEFINE_MEMBER(GdipResetPathGradientTransform);

GpStatus WINGDIPAPI
GdipResetPathGradientTransform(GpPathGradient* brush)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipResetPathGradientTransform == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipResetPathGradientTransform);
        }
        if ( g_GdipResetPathGradientTransform != NULL )
        {
            status = (*g_GdipResetPathGradientTransform)(brush);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipMultiplyPathGradientTransformPtr)(GpPathGradient* brush, 
                                  GDIPCONST GpMatrix *matrix,GpMatrixOrder order));
DEFINE_MEMBER(GdipMultiplyPathGradientTransform);

GpStatus WINGDIPAPI
GdipMultiplyPathGradientTransform(GpPathGradient* brush, 
                                  GDIPCONST GpMatrix *matrix,
                                  GpMatrixOrder order)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipMultiplyPathGradientTransform == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipMultiplyPathGradientTransform);
        }
        if ( g_GdipMultiplyPathGradientTransform != NULL )
        {
            status = (*g_GdipMultiplyPathGradientTransform)(brush, matrix, order);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipTranslatePathGradientTransformPtr)(GpPathGradient* brush, REAL dx, REAL dy,
                                   GpMatrixOrder order));
DEFINE_MEMBER(GdipTranslatePathGradientTransform);

GpStatus WINGDIPAPI
GdipTranslatePathGradientTransform(GpPathGradient* brush, REAL dx, REAL dy,
                                   GpMatrixOrder order)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipTranslatePathGradientTransform == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipTranslatePathGradientTransform);
        }
        if ( g_GdipTranslatePathGradientTransform != NULL )
        {
            status = (*g_GdipTranslatePathGradientTransform)(brush, dx, dy, order);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipScalePathGradientTransformPtr)(GpPathGradient* brush, REAL sx, REAL sy,
                               GpMatrixOrder order));
DEFINE_MEMBER(GdipScalePathGradientTransform);

GpStatus WINGDIPAPI
GdipScalePathGradientTransform(GpPathGradient* brush, REAL sx, REAL sy, GpMatrixOrder order)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipScalePathGradientTransform == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipScalePathGradientTransform);
        }
        if ( g_GdipScalePathGradientTransform != NULL )
        {
            status = (*g_GdipScalePathGradientTransform)(brush, sx, sy, order);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipRotatePathGradientTransformPtr)(GpPathGradient* brush, REAL angle,
                                GpMatrixOrder order));
DEFINE_MEMBER(GdipRotatePathGradientTransform);

GpStatus WINGDIPAPI
GdipRotatePathGradientTransform(GpPathGradient* brush, REAL angle, GpMatrixOrder order)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipRotatePathGradientTransform == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipRotatePathGradientTransform);
        }
        if ( g_GdipRotatePathGradientTransform != NULL )
        {
            status = (*g_GdipRotatePathGradientTransform)(brush, angle, order);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetPathGradientFocusScalesPtr)(GpPathGradient *brush, REAL* xScale, 
                               REAL* yScale));
DEFINE_MEMBER(GdipGetPathGradientFocusScales);

GpStatus WINGDIPAPI
GdipGetPathGradientFocusScales(GpPathGradient *brush, REAL* xScale, REAL* yScale)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetPathGradientFocusScales == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetPathGradientFocusScales);
        }
        if ( g_GdipGetPathGradientFocusScales != NULL )
        {
            status = (*g_GdipGetPathGradientFocusScales)(brush, xScale, yScale);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetPathGradientFocusScalesPtr)(GpPathGradient *brush, REAL xScale, 
                               REAL yScale));
DEFINE_MEMBER(GdipSetPathGradientFocusScales);

GpStatus WINGDIPAPI
GdipSetPathGradientFocusScales(GpPathGradient *brush, REAL xScale, REAL yScale)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipSetPathGradientFocusScales == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipSetPathGradientFocusScales);
        }
        if ( g_GdipSetPathGradientFocusScales != NULL )
        {
            status = (*g_GdipSetPathGradientFocusScales)(brush, xScale, yScale);
        }
    }
    return status;
}


//----------------------------------------------------------------------------
// Platform Shunt
//----------------------------------------------------------------------------

VOID WINAPI
Gdiplus_BrushInit()
{
}

