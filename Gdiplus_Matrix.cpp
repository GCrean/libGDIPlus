#include "stdafx.h"
#include "GdiplusShunt.h"

//----------------------------------------------------------------------------
// Matrix APIs
//----------------------------------------------------------------------------


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipCreateMatrixPtr)(GpMatrix **matrix));
DEFINE_MEMBER(GdipCreateMatrix);

GpStatus WINGDIPAPI
GdipCreateMatrix(GpMatrix **matrix)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipCreateMatrix == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipCreateMatrix);
        }
        if ( g_GdipCreateMatrix != NULL )
        {
            status = (*g_GdipCreateMatrix)(matrix);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipCreateMatrix2Ptr)(REAL m11, REAL m12, REAL m21, REAL m22, REAL dx,
                REAL dy, GpMatrix **matrix));
DEFINE_MEMBER(GdipCreateMatrix2);

GpStatus WINGDIPAPI
GdipCreateMatrix2(REAL m11, REAL m12, REAL m21, REAL m22, REAL dx,
 REAL dy, GpMatrix **matrix)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipCreateMatrix2 == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipCreateMatrix2);
        }
        if ( g_GdipCreateMatrix2 != NULL )
        {
            status = (*g_GdipCreateMatrix2)(m11, m12, m21, m22, dx, dy, matrix);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipCreateMatrix3Ptr)(GDIPCONST GpRectF *rect, GDIPCONST GpPointF *dstplg,
                                 GpMatrix **matrix));
DEFINE_MEMBER(GdipCreateMatrix3);

GpStatus WINGDIPAPI
GdipCreateMatrix3(GDIPCONST GpRectF *rect, GDIPCONST GpPointF *dstplg,
                  GpMatrix **matrix)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipCreateMatrix3 == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipCreateMatrix3);
        }
        if ( g_GdipCreateMatrix3 != NULL )
        {
            status = (*g_GdipCreateMatrix3)(rect, dstplg, matrix);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipCreateMatrix3IPtr)(GDIPCONST GpRect *rect, GDIPCONST GpPoint *dstplg,
                                   GpMatrix **matrix));
DEFINE_MEMBER(GdipCreateMatrix3I);

GpStatus WINGDIPAPI
GdipCreateMatrix3I(GDIPCONST GpRect *rect, GDIPCONST GpPoint *dstplg,
                    GpMatrix **matrix)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipCreateMatrix3I == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipCreateMatrix3I);
        }
        if ( g_GdipCreateMatrix3I != NULL )
        {
            status = (*g_GdipCreateMatrix3I)(rect, dstplg, matrix);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipCloneMatrixPtr)(GpMatrix *matrix, GpMatrix **cloneMatrix));
DEFINE_MEMBER(GdipCloneMatrix);

GpStatus WINGDIPAPI
GdipCloneMatrix(GpMatrix *matrix, GpMatrix **cloneMatrix)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipCloneMatrix == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipCloneMatrix);
        }
        if ( g_GdipCloneMatrix != NULL )
        {
            status = (*g_GdipCloneMatrix)(matrix, cloneMatrix);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipDeleteMatrixPtr)(GpMatrix *matrix));
DEFINE_MEMBER(GdipDeleteMatrix);

GpStatus WINGDIPAPI
GdipDeleteMatrix(GpMatrix *matrix)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipDeleteMatrix == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipDeleteMatrix);
        }
        if ( g_GdipDeleteMatrix != NULL )
        {
            status = (*g_GdipDeleteMatrix)(matrix);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetMatrixElementsPtr)(GpMatrix *matrix, REAL m11, REAL m12, REAL m21, REAL m22,
                                     REAL dx, REAL dy));
DEFINE_MEMBER(GdipSetMatrixElements);

GpStatus WINGDIPAPI
GdipSetMatrixElements(GpMatrix *matrix, REAL m11, REAL m12, REAL m21, REAL m22,
                      REAL dx, REAL dy)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipSetMatrixElements == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipSetMatrixElements);
        }
        if ( g_GdipSetMatrixElements != NULL )
        {
            status = (*g_GdipSetMatrixElements)(matrix, m11, m12, m21, m22, dx, dy);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipMultiplyMatrixPtr)(GpMatrix *matrix, GpMatrix* matrix2, GpMatrixOrder order));
DEFINE_MEMBER(GdipMultiplyMatrix);

GpStatus WINGDIPAPI
GdipMultiplyMatrix(GpMatrix *matrix, GpMatrix* matrix2, GpMatrixOrder order)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipMultiplyMatrix == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipMultiplyMatrix);
        }
        if ( g_GdipMultiplyMatrix != NULL )
        {
            status = (*g_GdipMultiplyMatrix)(matrix, matrix2, order);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipTranslateMatrixPtr)(GpMatrix *matrix, REAL offsetX, REAL offsetY,
                                   GpMatrixOrder order));
DEFINE_MEMBER(GdipTranslateMatrix);

GpStatus WINGDIPAPI
GdipTranslateMatrix(GpMatrix *matrix, REAL offsetX, REAL offsetY,
                    GpMatrixOrder order)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipTranslateMatrix == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipTranslateMatrix);
        }
        if ( g_GdipTranslateMatrix != NULL )
        {
            status = (*g_GdipTranslateMatrix)(matrix, offsetX, offsetY, order);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipScaleMatrixPtr)(GpMatrix *matrix, REAL scaleX, REAL scaleY,
                               GpMatrixOrder order));
DEFINE_MEMBER(GdipScaleMatrix);

GpStatus WINGDIPAPI
GdipScaleMatrix(GpMatrix *matrix, REAL scaleX, REAL scaleY,
                GpMatrixOrder order)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipScaleMatrix == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipScaleMatrix);
        }
        if ( g_GdipScaleMatrix != NULL )
        {
            status = (*g_GdipScaleMatrix)(matrix, scaleX, scaleY, order);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipRotateMatrixPtr)(GpMatrix *matrix, REAL angle, GpMatrixOrder order));
DEFINE_MEMBER(GdipRotateMatrix);

GpStatus WINGDIPAPI
GdipRotateMatrix(GpMatrix *matrix, REAL angle, GpMatrixOrder order)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipRotateMatrix == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipRotateMatrix);
        }
        if ( g_GdipRotateMatrix != NULL )
        {
            status = (*g_GdipRotateMatrix)(matrix, angle, order);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipShearMatrixPtr)(GpMatrix *matrix, REAL shearX, REAL shearY,
                               GpMatrixOrder order));
DEFINE_MEMBER(GdipShearMatrix);

GpStatus WINGDIPAPI
GdipShearMatrix(GpMatrix *matrix, REAL shearX, REAL shearY,
                GpMatrixOrder order)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipShearMatrix == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipShearMatrix);
        }
        if ( g_GdipShearMatrix != NULL )
        {
            status = (*g_GdipShearMatrix)(matrix, shearX, shearY, order);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipInvertMatrixPtr)(GpMatrix *matrix));
DEFINE_MEMBER(GdipInvertMatrix);

GpStatus WINGDIPAPI
GdipInvertMatrix(GpMatrix *matrix)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipInvertMatrix == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipInvertMatrix);
        }
        if ( g_GdipInvertMatrix != NULL )
        {
            status = (*g_GdipInvertMatrix)(matrix);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipTransformMatrixPointsPtr)(GpMatrix *matrix, GpPointF *pts, INT count));
DEFINE_MEMBER(GdipTransformMatrixPoints);

GpStatus WINGDIPAPI
GdipTransformMatrixPoints(GpMatrix *matrix, GpPointF *pts, INT count)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipTransformMatrixPoints == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipTransformMatrixPoints);
        }
        if ( g_GdipTransformMatrixPoints != NULL )
        {
            status = (*g_GdipTransformMatrixPoints)(matrix, pts, count);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipTransformMatrixPointsIPtr)(GpMatrix *matrix, GpPoint *pts, INT count));
DEFINE_MEMBER(GdipTransformMatrixPointsI);

GpStatus WINGDIPAPI
GdipTransformMatrixPointsI(GpMatrix *matrix, GpPoint *pts, INT count)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipTransformMatrixPointsI == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipTransformMatrixPointsI);
        }
        if ( g_GdipTransformMatrixPointsI != NULL )
        {
            status = (*g_GdipTransformMatrixPointsI)(matrix, pts, count);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipVectorTransformMatrixPointsPtr)(GpMatrix *matrix, GpPointF *pts, INT count));
DEFINE_MEMBER(GdipVectorTransformMatrixPoints);

GpStatus WINGDIPAPI
GdipVectorTransformMatrixPoints(GpMatrix *matrix, GpPointF *pts, INT count)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipVectorTransformMatrixPoints == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipVectorTransformMatrixPoints);
        }
        if ( g_GdipVectorTransformMatrixPoints != NULL )
        {
            status = (*g_GdipVectorTransformMatrixPoints)(matrix, pts, count);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipVectorTransformMatrixPointsIPtr)(GpMatrix *matrix, GpPoint *pts, INT count));
DEFINE_MEMBER(GdipVectorTransformMatrixPointsI);

GpStatus WINGDIPAPI
GdipVectorTransformMatrixPointsI(GpMatrix *matrix, GpPoint *pts, INT count)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipVectorTransformMatrixPointsI == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipVectorTransformMatrixPointsI);
        }
        if ( g_GdipVectorTransformMatrixPointsI != NULL )
        {
            status = (*g_GdipVectorTransformMatrixPointsI)(matrix, pts, count);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetMatrixElementsPtr)(GDIPCONST GpMatrix *matrix, REAL *matrixOut));
DEFINE_MEMBER(GdipGetMatrixElements);

GpStatus WINGDIPAPI
GdipGetMatrixElements(GDIPCONST GpMatrix *matrix, REAL *matrixOut)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipGetMatrixElements == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetMatrixElements);
        }
        if ( g_GdipGetMatrixElements != NULL )
        {
            status = (*g_GdipGetMatrixElements)(matrix, matrixOut);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipIsMatrixInvertiblePtr)(GDIPCONST GpMatrix *matrix, BOOL *result));
DEFINE_MEMBER(GdipIsMatrixInvertible);

GpStatus WINGDIPAPI
GdipIsMatrixInvertible(GDIPCONST GpMatrix *matrix, BOOL *result)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipIsMatrixInvertible == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipIsMatrixInvertible);
        }
        if ( g_GdipIsMatrixInvertible != NULL )
        {
            status = (*g_GdipIsMatrixInvertible)(matrix, result);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipIsMatrixIdentityPtr)(GDIPCONST GpMatrix *matrix, BOOL *result));
DEFINE_MEMBER(GdipIsMatrixIdentity);

GpStatus WINGDIPAPI
GdipIsMatrixIdentity(GDIPCONST GpMatrix *matrix, BOOL *result)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipIsMatrixIdentity == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipIsMatrixIdentity);
        }
        if ( g_GdipIsMatrixIdentity != NULL )
        {
            status = (*g_GdipIsMatrixIdentity)(matrix, result);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipIsMatrixEqualPtr)(GDIPCONST GpMatrix *matrix, GDIPCONST GpMatrix *matrix2, BOOL *result));
DEFINE_MEMBER(GdipIsMatrixEqual);

GpStatus WINGDIPAPI
GdipIsMatrixEqual(GDIPCONST GpMatrix *matrix, GDIPCONST GpMatrix *matrix2, BOOL *result)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipIsMatrixEqual == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipIsMatrixEqual);
        }
        if ( g_GdipIsMatrixEqual != NULL )
        {
            status = (*g_GdipIsMatrixEqual)(matrix, matrix2, result);
        }
    }
    return status;
}

//----------------------------------------------------------------------------
// Platform Shunt
//----------------------------------------------------------------------------

VOID WINAPI
Gdiplus_MatrixInit()
{
}

