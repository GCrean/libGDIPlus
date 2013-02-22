#include "stdafx.h"
#include "GdiplusShunt.h"

//----------------------------------------------------------------------------
// GraphicsPath APIs
//----------------------------------------------------------------------------


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipCreatePathPtr)(GpFillMode brushMode, GpPath **path));
DEFINE_MEMBER(GdipCreatePath);

GpStatus WINGDIPAPI
GdipCreatePath(GpFillMode brushMode, GpPath **path)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipCreatePath == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipCreatePath);
        }
        if ( g_GdipCreatePath != NULL )
        {
            status = (*g_GdipCreatePath)(brushMode, path);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipCreatePath2Ptr)(GDIPCONST GpPointF* points, GDIPCONST BYTE* data, INT, GpFillMode fillmode, GpPath **path));
DEFINE_MEMBER(GdipCreatePath2);

GpStatus WINGDIPAPI
GdipCreatePath2(GDIPCONST GpPointF* points, GDIPCONST BYTE* data, INT count, GpFillMode fillmode, GpPath **path)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipCreatePath2 == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipCreatePath2);
        }
        if ( g_GdipCreatePath2 != NULL )
        {
            status = (*g_GdipCreatePath2)(points, data, count, fillmode, path);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipCreatePath2IPtr)(GDIPCONST GpPoint* points, GDIPCONST BYTE* data, INT count, GpFillMode fillmode, GpPath **path));
DEFINE_MEMBER(GdipCreatePath2I);

GpStatus WINGDIPAPI
GdipCreatePath2I(GDIPCONST GpPoint* points, GDIPCONST BYTE* data, INT count, GpFillMode fillmode, GpPath **path)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipCreatePath2I == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipCreatePath2I);
        }
        if ( g_GdipCreatePath2I != NULL )
        {
            status = (*g_GdipCreatePath2I)(points, data, count, fillmode, path);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipClonePathPtr)(GpPath* path, GpPath **clonePath));
DEFINE_MEMBER(GdipClonePath);

GpStatus WINGDIPAPI
GdipClonePath(GpPath* path, GpPath **clonePath)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipClonePath == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipClonePath);
        }
        if ( g_GdipClonePath != NULL )
        {
            status = (*g_GdipClonePath)(path, clonePath);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipDeletePathPtr)(GpPath* path));
DEFINE_MEMBER(GdipDeletePath);

GpStatus WINGDIPAPI
GdipDeletePath(GpPath* path)

{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipDeletePath == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipDeletePath);
        }
        if ( g_GdipDeletePath != NULL )
        {
            status = (*g_GdipDeletePath)(path);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipResetPathPtr)(GpPath* path));
DEFINE_MEMBER(GdipResetPath);

GpStatus WINGDIPAPI
GdipResetPath(GpPath* path)

{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipResetPath == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipResetPath);
        }
        if ( g_GdipResetPath != NULL )
        {
            status = (*g_GdipResetPath)(path);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetPointCountPtr)(GpPath* path, INT* count));
DEFINE_MEMBER(GdipGetPointCount);

GpStatus WINGDIPAPI
GdipGetPointCount(GpPath* path, INT* count)

{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetPointCount == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetPointCount);
        }
        if ( g_GdipGetPointCount != NULL )
        {
            status = (*g_GdipGetPointCount)(path, count);
        }
    }
    return status;
}

DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetPathTypesPtr)(GpPath* path, BYTE* types, INT count));
DEFINE_MEMBER(GdipGetPathTypes);

GpStatus WINGDIPAPI
GdipGetPathTypes(GpPath* path, BYTE* types, INT count)

{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetPathTypes == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetPathTypes);
        }
        if ( g_GdipGetPathTypes != NULL )
        {
            status = (*g_GdipGetPathTypes)(path, types, count);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetPathPointsPtr)(GpPath* path, GpPointF* points, INT count));
DEFINE_MEMBER(GdipGetPathPoints);

GpStatus WINGDIPAPI
GdipGetPathPoints(GpPath* path, GpPointF* points, INT count)

{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetPathPoints == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetPathPoints);
        }
        if ( g_GdipGetPathPoints != NULL )
        {
            status = (*g_GdipGetPathPoints)(path, points, count);
        }
    }
    return status;
}

DEFINE_POINTER(GpStatus (WINGDIPAPI* GdipGetPathPointsIPtr)(GpPath* path, GpPoint* points, INT count));
DEFINE_MEMBER(GdipGetPathPointsI);

GpStatus WINGDIPAPI
GdipGetPathPointsI(GpPath* path, GpPoint* points, INT count)

{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetPathPointsI == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetPathPointsI);
        }
        if ( g_GdipGetPathPointsI != NULL )
        {
            status = (*g_GdipGetPathPointsI)(path, points, count);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetPathFillModePtr)(GpPath *path, GpFillMode *fillmode));
DEFINE_MEMBER(GdipGetPathFillMode);

GpStatus WINGDIPAPI
GdipGetPathFillMode(GpPath *path, GpFillMode *fillmode)

{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetPathFillMode == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetPathFillMode);
        }
        if ( g_GdipGetPathFillMode != NULL )
        {
            status = (*g_GdipGetPathFillMode)(path, fillmode);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetPathFillModePtr)(GpPath *path, GpFillMode fillmode));
DEFINE_MEMBER(GdipSetPathFillMode);

GpStatus WINGDIPAPI
GdipSetPathFillMode(GpPath *path, GpFillMode fillmode)

{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipSetPathFillMode == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipSetPathFillMode);
        }
        if ( g_GdipSetPathFillMode != NULL )
        {
            status = (*g_GdipSetPathFillMode)(path, fillmode);
        }
    }
    return status;
}

DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetPathDataPtr)(GpPath *path, GpPathData* pathData));
DEFINE_MEMBER(GdipGetPathData);

GpStatus WINGDIPAPI
GdipGetPathData(GpPath *path, GpPathData* pathData)

{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetPathData == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetPathData);
        }
        if ( g_GdipGetPathData != NULL )
        {
            status = (*g_GdipGetPathData)(path, pathData);
        }
    }
    return status;
}

DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipStartPathFigurePtr)(GpPath *path));
DEFINE_MEMBER(GdipStartPathFigure);


GpStatus WINGDIPAPI
GdipStartPathFigure(GpPath *path)

{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipStartPathFigure == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipStartPathFigure);
        }
        if ( g_GdipStartPathFigure != NULL )
        {
            status = (*g_GdipStartPathFigure)(path);
        }
    }
    return status;
}

DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipClosePathFigurePtr)(GpPath *path));
DEFINE_MEMBER(GdipClosePathFigure);

GpStatus WINGDIPAPI
GdipClosePathFigure(GpPath *path)

{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipClosePathFigure == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipClosePathFigure);
        }
        if ( g_GdipClosePathFigure != NULL )
        {
            status = (*g_GdipClosePathFigure)(path);
        }
    }
    return status;
}

DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipClosePathFiguresPtr)(GpPath *path));
DEFINE_MEMBER(GdipClosePathFigures);

GpStatus WINGDIPAPI
GdipClosePathFigures(GpPath *path)

{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipClosePathFigures == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipClosePathFigures);
        }
        if ( g_GdipClosePathFigures != NULL )
        {
            status = (*g_GdipClosePathFigures)(path);
        }
    }
    return status;
}

DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetPathMarkerPtr)(GpPath* path));
DEFINE_MEMBER(GdipSetPathMarker);

GpStatus WINGDIPAPI
GdipSetPathMarker(GpPath* path)

{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipSetPathMarker == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipSetPathMarker);
        }
        if ( g_GdipSetPathMarker != NULL )
        {
            status = (*g_GdipSetPathMarker)(path);
        }
    }
    return status;
}

DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipClearPathMarkersPtr)(GpPath* path));
DEFINE_MEMBER(GdipClearPathMarkers);

GpStatus WINGDIPAPI
GdipClearPathMarkers(GpPath* path)

{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipClearPathMarkers == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipClearPathMarkers);
        }
        if ( g_GdipClearPathMarkers != NULL )
        {
            status = (*g_GdipClearPathMarkers)(path);
        }
    }
    return status;
}

DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipReversePathPtr)(GpPath* path));
DEFINE_MEMBER(GdipReversePath);

GpStatus WINGDIPAPI
GdipReversePath(GpPath* path)

{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipReversePath == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipReversePath);
        }
        if ( g_GdipReversePath != NULL )
        {
            status = (*g_GdipReversePath)(path);
        }
    }
    return status;
}

DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetPathLastPointPtr)(GpPath* path, GpPointF* lastPoint));
DEFINE_MEMBER(GdipGetPathLastPoint);

GpStatus WINGDIPAPI
GdipGetPathLastPoint(GpPath* path, GpPointF* lastPoint)

{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetPathLastPoint == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetPathLastPoint);
        }
        if ( g_GdipGetPathLastPoint != NULL )
        {
            status = (*g_GdipGetPathLastPoint)(path, lastPoint);
        }
    }
    return status;
}

DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipAddPathLinePtr)(GpPath *path, REAL x1, REAL y1, REAL x2, REAL y2));
DEFINE_MEMBER(GdipAddPathLine);

GpStatus WINGDIPAPI
GdipAddPathLine(GpPath *path, REAL x1, REAL y1, REAL x2, REAL y2)

{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipAddPathLine == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipAddPathLine);
        }
        if ( g_GdipAddPathLine != NULL )
        {
            status = (*g_GdipAddPathLine)(path, x1, y1, x2, y2);
        }
    }
    return status;
}

DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipAddPathLine2Ptr)(GpPath *path, GDIPCONST GpPointF *points, INT count));
DEFINE_MEMBER(GdipAddPathLine2);

GpStatus WINGDIPAPI
GdipAddPathLine2(GpPath *path, GDIPCONST GpPointF *points, INT count)

{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipAddPathLine2 == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipAddPathLine2);
        }
        if ( g_GdipAddPathLine2 != NULL )
        {
            status = (*g_GdipAddPathLine2)(path, points, count);
        }
    }
    return status;
}

DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipAddPathArcPtr)(GpPath *path, REAL x, REAL y, REAL width, REAL height,
               REAL startAngle, REAL sweepAngle));
DEFINE_MEMBER(GdipAddPathArc);

GpStatus WINGDIPAPI
GdipAddPathArc(GpPath *path, REAL x, REAL y, REAL width, REAL height,
               REAL startAngle, REAL sweepAngle)

{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipAddPathArc == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipAddPathArc);
        }
        if ( g_GdipAddPathArc != NULL )
        {
            status = (*g_GdipAddPathArc)(path, x, y, width, height, startAngle, sweepAngle);
        }
    }
    return status;
}

DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipAddPathBezierPtr)(GpPath *path, REAL x1, REAL y1, REAL x2, REAL y2,
                         REAL x3, REAL y3, REAL x4, REAL y4));
DEFINE_MEMBER(GdipAddPathBezier);

GpStatus WINGDIPAPI
GdipAddPathBezier(GpPath *path, REAL x1, REAL y1, REAL x2, REAL y2,
                           REAL x3, REAL y3, REAL x4, REAL y4)

{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipAddPathBezier == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipAddPathBezier);
        }
        if ( g_GdipAddPathBezier != NULL )
        {
            status = (*g_GdipAddPathBezier)(path, x1, y1, x2, y2, x3, y3, x4, y4);
        }
    }
    return status;
}

DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipAddPathBeziersPtr)(GpPath *path, GDIPCONST GpPointF *points, INT count));
DEFINE_MEMBER(GdipAddPathBeziers);

GpStatus WINGDIPAPI
GdipAddPathBeziers(GpPath *path, GDIPCONST GpPointF *points, INT count)

{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipAddPathBeziers == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipAddPathBeziers);
        }
        if ( g_GdipAddPathBeziers != NULL )
        {
            status = (*g_GdipAddPathBeziers)(path, points, count);
        }
    }
    return status;
}

DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipAddPathCurvePtr)(GpPath *path, GDIPCONST GpPointF *points, INT count));
DEFINE_MEMBER(GdipAddPathCurve);

GpStatus WINGDIPAPI
GdipAddPathCurve(GpPath *path, GDIPCONST GpPointF *points, INT count)

{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipAddPathCurve == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipAddPathCurve);
        }
        if ( g_GdipAddPathCurve != NULL )
        {
            status = (*g_GdipAddPathCurve)(path, points, count);
        }
    }
    return status;
}

DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipAddPathCurve2Ptr)(GpPath *path, GDIPCONST GpPointF *points, INT count,
               REAL tension));
DEFINE_MEMBER(GdipAddPathCurve2);

GpStatus WINGDIPAPI
GdipAddPathCurve2(GpPath *path, GDIPCONST GpPointF *points, INT count,
                           REAL tension)

{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipAddPathCurve2 == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipAddPathCurve2);
        }
        if ( g_GdipAddPathCurve2 != NULL )
        {
            status = (*g_GdipAddPathCurve2)(path, points, count, tension);
        }
    }
    return status;
}

DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipAddPathCurve3Ptr)(GpPath *path, GDIPCONST GpPointF *points, INT count,
               INT offset, INT numberOfSegments, REAL tension));
DEFINE_MEMBER(GdipAddPathCurve3);

GpStatus WINGDIPAPI
GdipAddPathCurve3(GpPath *path, GDIPCONST GpPointF *points, INT count,
                           INT offset, INT numberOfSegments, REAL tension)

{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipAddPathCurve3 == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipAddPathCurve3);
        }
        if ( g_GdipAddPathCurve3 != NULL )
        {
            status = (*g_GdipAddPathCurve3)(path, points, count, offset, numberOfSegments, tension);
        }
    }
    return status;
}

DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipAddPathClosedCurvePtr)(GpPath *path, GDIPCONST GpPointF *points, INT count));
DEFINE_MEMBER(GdipAddPathClosedCurve);

GpStatus WINGDIPAPI
GdipAddPathClosedCurve(GpPath *path, GDIPCONST GpPointF *points, INT count)

{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipAddPathClosedCurve == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipAddPathClosedCurve);
        }
        if ( g_GdipAddPathClosedCurve != NULL )
        {
            status = (*g_GdipAddPathClosedCurve)(path, points, count);
        }
    }
    return status;
}

DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipAddPathClosedCurve2Ptr)(GpPath *path, GDIPCONST GpPointF *points, INT count,
               REAL tension));
DEFINE_MEMBER(GdipAddPathClosedCurve2);

GpStatus WINGDIPAPI
GdipAddPathClosedCurve2(GpPath *path, GDIPCONST GpPointF *points, INT count,
                                 REAL tension)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipAddPathClosedCurve2 == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipAddPathClosedCurve2);
        }
        if ( g_GdipAddPathClosedCurve2 != NULL )
        {
            status = (*g_GdipAddPathClosedCurve2)(path, points, count, tension);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipAddPathRectanglePtr)(GpPath *path, REAL x, REAL y, REAL width, REAL height));
DEFINE_MEMBER(GdipAddPathRectangle);

GpStatus WINGDIPAPI
GdipAddPathRectangle(GpPath *path, REAL x, REAL y, REAL width, REAL height)

{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipAddPathRectangle == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipAddPathRectangle);
        }
        if ( g_GdipAddPathRectangle != NULL )
        {
            status = (*g_GdipAddPathRectangle)(path, x, y, width, height);
        }
    }
    return status;
}

DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipAddPathRectanglesPtr)(GpPath *path, GDIPCONST GpRectF *rects, INT count));
DEFINE_MEMBER(GdipAddPathRectangles);

GpStatus WINGDIPAPI
GdipAddPathRectangles(GpPath *path, GDIPCONST GpRectF *rects, INT count)

{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipAddPathRectangles == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipAddPathRectangles);
        }
        if ( g_GdipAddPathRectangles != NULL )
        {
            status = (*g_GdipAddPathRectangles)(path, rects, count);
        }
    }
    return status;
}

DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipAddPathEllipsePtr)(GpPath *path, REAL x, REAL y, REAL width,
               REAL height));
DEFINE_MEMBER(GdipAddPathEllipse);

GpStatus WINGDIPAPI
GdipAddPathEllipse(GpPath *path, REAL x, REAL y, REAL width,
                            REAL height)

{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipAddPathEllipse == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipAddPathEllipse);
        }
        if ( g_GdipAddPathEllipse != NULL )
        {
            status = (*g_GdipAddPathEllipse)(path, x, y, width, height);
        }
    }
    return status;
}

DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipAddPathPiePtr)(GpPath *path, REAL x, REAL y, REAL width, REAL height,
               REAL startAngle, REAL sweepAngle));
DEFINE_MEMBER(GdipAddPathPie);

GpStatus WINGDIPAPI
GdipAddPathPie(GpPath *path, REAL x, REAL y, REAL width, REAL height,
                        REAL startAngle, REAL sweepAngle)

{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipAddPathPie == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipAddPathPie);
        }
        if ( g_GdipAddPathPie != NULL )
        {
            status = (*g_GdipAddPathPie)(path, x, y, width, height, startAngle, sweepAngle);
        }
    }
    return status;
}

DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipAddPathPolygonPtr)(GpPath *path, GDIPCONST GpPointF *points, INT count));
DEFINE_MEMBER(GdipAddPathPolygon);

GpStatus WINGDIPAPI
GdipAddPathPolygon(GpPath *path, GDIPCONST GpPointF *points, INT count)

{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipAddPathPolygon == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipAddPathPolygon);
        }
        if ( g_GdipAddPathPolygon != NULL )
        {
            status = (*g_GdipAddPathPolygon)(path, points, count);
        }
    }
    return status;
}

DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipAddPathPathPtr)(GpPath *path, GDIPCONST GpPath* addingPath, BOOL connect));
DEFINE_MEMBER(GdipAddPathPath);

GpStatus WINGDIPAPI
GdipAddPathPath(GpPath *path, GDIPCONST GpPath* addingPath, BOOL connect)

{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipAddPathPath == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipAddPathPath);
        }
        if ( g_GdipAddPathPath != NULL )
        {
            status = (*g_GdipAddPathPath)(path, addingPath, connect);
        }
    }
    return status;
}

DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipAddPathStringPtr)(GpPath *path, GDIPCONST WCHAR *string,
               INT length, GDIPCONST GpFontFamily *family, INT style,
               REAL emSize, GDIPCONST RectF *layoutRect,
               GDIPCONST GpStringFormat *format));
DEFINE_MEMBER(GdipAddPathString);

GpStatus WINGDIPAPI
GdipAddPathString(GpPath *path, GDIPCONST WCHAR *string,
                        INT length, GDIPCONST GpFontFamily *family, INT style,
                        REAL emSize, GDIPCONST RectF *layoutRect,
                        GDIPCONST GpStringFormat *format)

{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipAddPathString == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipAddPathString);
        }
        if ( g_GdipAddPathString != NULL )
        {
            status = (*g_GdipAddPathString)(path, string, length, family, style, emSize, layoutRect, format);
        }
    }
    return status;
}

DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipAddPathStringIPtr)(GpPath *path, GDIPCONST WCHAR *string,
               INT length, GDIPCONST GpFontFamily *family, INT style,
               REAL emSize, GDIPCONST Rect *layoutRect,
               GDIPCONST GpStringFormat *format));
DEFINE_MEMBER(GdipAddPathStringI);

GpStatus WINGDIPAPI
GdipAddPathStringI(GpPath *path, GDIPCONST WCHAR *string,
                        INT length, GDIPCONST GpFontFamily *family, INT style,
                        REAL emSize, GDIPCONST Rect *layoutRect,
                        GDIPCONST GpStringFormat *format)

{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipAddPathStringI == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipAddPathStringI);
        }
        if ( g_GdipAddPathStringI != NULL )
        {
            status = (*g_GdipAddPathStringI)(path, string, length, family, style, emSize, layoutRect, format);
        }
    }
    return status;
}

DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipAddPathLineIPtr)(GpPath *path, INT x1, INT y1, INT x2, INT y2));
DEFINE_MEMBER(GdipAddPathLineI);

GpStatus WINGDIPAPI
GdipAddPathLineI(GpPath *path, INT x1, INT y1, INT x2, INT y2)

{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipAddPathLineI == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipAddPathLineI);
        }
        if ( g_GdipAddPathLineI != NULL )
        {
            status = (*g_GdipAddPathLineI)(path, x1, y1, x2, y2);
        }
    }
    return status;
}

DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipAddPathLine2IPtr)(GpPath *path, GDIPCONST GpPoint *points, INT count));
DEFINE_MEMBER(GdipAddPathLine2I);

GpStatus WINGDIPAPI
GdipAddPathLine2I(GpPath *path, GDIPCONST GpPoint *points, INT count)

{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipAddPathLine2I == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipAddPathLine2I);
        }
        if ( g_GdipAddPathLine2I != NULL )
        {
            status = (*g_GdipAddPathLine2I)(path, points, count);
        }
    }
    return status;
}

DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipAddPathArcIPtr)(GpPath *path, INT x, INT y, INT width, INT height,
               REAL startAngle, REAL sweepAngle));
DEFINE_MEMBER(GdipAddPathArcI);

GpStatus WINGDIPAPI
GdipAddPathArcI(GpPath *path, INT x, INT y, INT width, INT height,
                        REAL startAngle, REAL sweepAngle)

{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipAddPathArcI == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipAddPathArcI);
        }
        if ( g_GdipAddPathArcI != NULL )
        {
            status = (*g_GdipAddPathArcI)(path, x, y, width, height, startAngle, sweepAngle);
        }
    }
    return status;
}

DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipAddPathBezierIPtr)(GpPath *path, INT x1, INT y1, INT x2, INT y2,
               INT x3, INT y3, INT x4, INT y4));
DEFINE_MEMBER(GdipAddPathBezierI);

GpStatus WINGDIPAPI
GdipAddPathBezierI(GpPath *path, INT x1, INT y1, INT x2, INT y2,
                           INT x3, INT y3, INT x4, INT y4)

{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipAddPathBezierI == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipAddPathBezierI);
        }
        if ( g_GdipAddPathBezierI != NULL )
        {
            status = (*g_GdipAddPathBezierI)(path, x1, y1, x2, y2, x3, y3, x4, y4);
        }
    }
    return status;
}

DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipAddPathBeziersIPtr)(GpPath *path, GDIPCONST GpPoint *points, INT count));
DEFINE_MEMBER(GdipAddPathBeziersI);

GpStatus WINGDIPAPI
GdipAddPathBeziersI(GpPath *path, GDIPCONST GpPoint *points, INT count)

{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipAddPathBeziersI == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipAddPathBeziersI);
        }
        if ( g_GdipAddPathBeziersI != NULL )
        {
            status = (*g_GdipAddPathBeziersI)(path, points, count);
        }
    }
    return status;
}

DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipAddPathCurveIPtr)(GpPath *path, GDIPCONST GpPoint *points, INT count));
DEFINE_MEMBER(GdipAddPathCurveI);

GpStatus WINGDIPAPI
GdipAddPathCurveI(GpPath *path, GDIPCONST GpPoint *points, INT count)

{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipAddPathCurveI == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipAddPathCurveI);
        }
        if ( g_GdipAddPathCurveI != NULL )
        {
            status = (*g_GdipAddPathCurveI)(path, points, count);
        }
    }
    return status;
}

DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipAddPathCurve2IPtr)(GpPath *path, GDIPCONST GpPoint *points, INT count,
               REAL tension));
DEFINE_MEMBER(GdipAddPathCurve2I);

GpStatus WINGDIPAPI
GdipAddPathCurve2I(GpPath *path, GDIPCONST GpPoint *points, INT count,
                           REAL tension)

{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipAddPathCurve2I == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipAddPathCurve2I);
        }
        if ( g_GdipAddPathCurve2I != NULL )
        {
            status = (*g_GdipAddPathCurve2I)(path, points, count, tension);
        }
    }
    return status;
}

DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipAddPathCurve3IPtr)(GpPath *path, GDIPCONST GpPoint *points, INT count,
               INT offset, INT numberOfSegments, REAL tension));
DEFINE_MEMBER(GdipAddPathCurve3I);

GpStatus WINGDIPAPI
GdipAddPathCurve3I(GpPath *path, GDIPCONST GpPoint *points, INT count,
                           INT offset, INT numberOfSegments, REAL tension)

{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipAddPathCurve3I == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipAddPathCurve3I);
        }
        if ( g_GdipAddPathCurve3I != NULL )
        {
            status = (*g_GdipAddPathCurve3I)(path, points, count, offset, numberOfSegments, tension);
        }
    }
    return status;
}

DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipAddPathClosedCurveIPtr)(GpPath *path, GDIPCONST GpPoint *points, INT count));
DEFINE_MEMBER(GdipAddPathClosedCurveI);

GpStatus WINGDIPAPI
GdipAddPathClosedCurveI(GpPath *path, GDIPCONST GpPoint *points, INT count)

{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipAddPathClosedCurveI == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipAddPathClosedCurveI);
        }
        if ( g_GdipAddPathClosedCurveI != NULL )
        {
            status = (*g_GdipAddPathClosedCurveI)(path, points, count);
        }
    }
    return status;
}

DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipAddPathClosedCurve2IPtr)(GpPath *path, GDIPCONST GpPoint *points, INT count,
               REAL tension));
DEFINE_MEMBER(GdipAddPathClosedCurve2I);

GpStatus WINGDIPAPI
GdipAddPathClosedCurve2I(GpPath *path, GDIPCONST GpPoint *points, INT count,
                                 REAL tension)

{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipAddPathClosedCurve2I == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipAddPathClosedCurve2I);
        }
        if ( g_GdipAddPathClosedCurve2I != NULL )
        {
            status = (*g_GdipAddPathClosedCurve2I)(path, points, count, tension);
        }
    }
    return status;
}

DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipAddPathRectangleIPtr)(GpPath *path, INT x, INT y, INT width, INT height));
DEFINE_MEMBER(GdipAddPathRectangleI);

GpStatus WINGDIPAPI
GdipAddPathRectangleI(GpPath *path, INT x, INT y, INT width, INT height)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipAddPathRectangleI == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipAddPathRectangleI);
        }
        if ( g_GdipAddPathRectangleI != NULL )
        {
            status = (*g_GdipAddPathRectangleI)(path, x, y, width, height);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipAddPathRectanglesIPtr)(GpPath *path, GDIPCONST GpRect *rects, INT count));
DEFINE_MEMBER(GdipAddPathRectanglesI);

GpStatus WINGDIPAPI
GdipAddPathRectanglesI(GpPath *path, GDIPCONST GpRect *rects, INT count)

{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipAddPathRectanglesI == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipAddPathRectanglesI);
        }
        if ( g_GdipAddPathRectanglesI != NULL )
        {
            status = (*g_GdipAddPathRectanglesI)(path, rects, count);
        }
    }
    return status;
}

DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipAddPathEllipseIPtr)(GpPath *path, INT x, INT y, INT width, INT height));
DEFINE_MEMBER(GdipAddPathEllipseI);

GpStatus WINGDIPAPI
GdipAddPathEllipseI(GpPath *path, INT x, INT y, INT width, INT height)

{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipAddPathEllipseI == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipAddPathEllipseI);
        }
        if ( g_GdipAddPathEllipseI != NULL )
        {
            status = (*g_GdipAddPathEllipseI)(path, x, y, width, height);
        }
    }
    return status;
}

DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipAddPathPieIPtr)(GpPath *path, INT x, INT y, INT width, INT height,
               REAL startAngle, REAL sweepAngle));
DEFINE_MEMBER(GdipAddPathPieI);

GpStatus WINGDIPAPI
GdipAddPathPieI(GpPath *path, INT x, INT y, INT width, INT height,
                        REAL startAngle, REAL sweepAngle)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipAddPathPieI == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipAddPathPieI);
        }
        if ( g_GdipAddPathPieI != NULL )
        {
            status = (*g_GdipAddPathPieI)(path, x, y, width, height, startAngle, sweepAngle);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipAddPathPolygonIPtr)(GpPath *path, GDIPCONST GpPoint *points, INT count));
DEFINE_MEMBER(GdipAddPathPolygonI);

GpStatus WINGDIPAPI
GdipAddPathPolygonI(GpPath *path, GDIPCONST GpPoint *points, INT count)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipAddPathPolygonI == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipAddPathPolygonI);
        }
        if ( g_GdipAddPathPolygonI != NULL )
        {
            status = (*g_GdipAddPathPolygonI)(path, points, count);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipFlattenPathPtr)(GpPath *path, GpMatrix* matrix, REAL flatness));
DEFINE_MEMBER(GdipFlattenPath);

GpStatus WINGDIPAPI
GdipFlattenPath(GpPath *path, GpMatrix* matrix, REAL flatness)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipFlattenPath == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipFlattenPath);
        }
        if ( g_GdipFlattenPath != NULL )
        {
            status = (*g_GdipFlattenPath)(path, matrix, flatness);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipWindingModeOutlinePtr)(GpPath *path, GpMatrix *matrix,REAL flatness));
DEFINE_MEMBER(GdipWindingModeOutline);

GpStatus WINGDIPAPI
GdipWindingModeOutline(GpPath *path, GpMatrix *matrix,REAL flatness)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipWindingModeOutline == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipWindingModeOutline);
        }
        if ( g_GdipWindingModeOutline != NULL )
        {
            status = (*g_GdipWindingModeOutline)(path, matrix, flatness);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipWidenPathPtr)(GpPath *nativePath,GpPen *pen,
                           GpMatrix *matrix, REAL flatness));
DEFINE_MEMBER(GdipWidenPath);

GpStatus WINGDIPAPI
GdipWidenPath(
    GpPath *nativePath,
    GpPen *pen,
    GpMatrix *matrix,
    REAL flatness
)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipWidenPath == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipWidenPath);
        }
        if ( g_GdipWidenPath != NULL )
        {
            status = (*g_GdipWidenPath)(nativePath, pen, matrix, flatness);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipWarpPathPtr)(GpPath *path, GpMatrix* matrix,
                           GDIPCONST GpPointF *points, INT count,
                           REAL srcx, REAL srcy, REAL srcwidth, REAL srcheight,
                           WarpMode warpMode, REAL flatness));
DEFINE_MEMBER(GdipWarpPath);

GpStatus WINGDIPAPI
GdipWarpPath(GpPath *path, GpMatrix* matrix,
            GDIPCONST GpPointF *points, INT count,
            REAL srcx, REAL srcy, REAL srcwidth, REAL srcheight,
            WarpMode warpMode, REAL flatness)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipWarpPath == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipWarpPath);
        }
        if ( g_GdipWarpPath != NULL )
        {
            status = (*g_GdipWarpPath)(path, matrix, points, count, srcx, srcy, srcwidth, srcheight, warpMode, flatness);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipTransformPathPtr)(GpPath* path, GpMatrix* matrix));
DEFINE_MEMBER(GdipTransformPath);

GpStatus WINGDIPAPI
GdipTransformPath(GpPath* path, GpMatrix* matrix)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipTransformPath == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipTransformPath);
        }
        if ( g_GdipTransformPath != NULL )
        {
            status = (*g_GdipTransformPath)(path, matrix);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetPathWorldBoundsPtr)(GpPath* path, GpRectF* bounds, 
               GDIPCONST GpMatrix *matrix, GDIPCONST GpPen *pen));
DEFINE_MEMBER(GdipGetPathWorldBounds);

GpStatus WINGDIPAPI
GdipGetPathWorldBounds(GpPath* path, GpRectF* bounds, 
                       GDIPCONST GpMatrix *matrix, GDIPCONST GpPen *pen)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetPathWorldBounds == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetPathWorldBounds);
        }
        if ( g_GdipGetPathWorldBounds != NULL )
        {
            status = (*g_GdipGetPathWorldBounds)(path, bounds, matrix, pen);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetPathWorldBoundsIPtr)(GpPath* path, GpRect* bounds, 
               GDIPCONST GpMatrix *matrix, GDIPCONST GpPen *pen));
DEFINE_MEMBER(GdipGetPathWorldBoundsI);

GpStatus WINGDIPAPI
GdipGetPathWorldBoundsI(GpPath* path, GpRect* bounds, 
                        GDIPCONST GpMatrix *matrix, GDIPCONST GpPen *pen)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetPathWorldBoundsI == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetPathWorldBoundsI);
        }
        if ( g_GdipGetPathWorldBoundsI != NULL )
        {
            status = (*g_GdipGetPathWorldBoundsI)(path, bounds, matrix, pen);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipIsVisiblePathPointPtr)(GpPath* path, REAL x, REAL y,
               GpGraphics *graphics, BOOL *result));
DEFINE_MEMBER(GdipIsVisiblePathPoint);

GpStatus WINGDIPAPI
GdipIsVisiblePathPoint(GpPath* path, REAL x, REAL y,
                       GpGraphics *graphics, BOOL *result)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipIsVisiblePathPoint == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipIsVisiblePathPoint);
        }
        if ( g_GdipIsVisiblePathPoint != NULL )
        {
            status = (*g_GdipIsVisiblePathPoint)(path, x, y, graphics, result);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipIsVisiblePathPointIPtr)(GpPath* path, INT x, INT y,
               GpGraphics *graphics, BOOL *result));
DEFINE_MEMBER(GdipIsVisiblePathPointI);

GpStatus WINGDIPAPI
GdipIsVisiblePathPointI(GpPath* path, INT x, INT y,
                        GpGraphics *graphics, BOOL *result)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipIsVisiblePathPointI == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipIsVisiblePathPointI);
        }
        if ( g_GdipIsVisiblePathPointI != NULL )
        {
            status = (*g_GdipIsVisiblePathPointI)(path, x, y, graphics, result);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipIsOutlineVisiblePathPointPtr)(GpPath* path, REAL x, REAL y, GpPen *pen,
               GpGraphics *graphics, BOOL *result));
DEFINE_MEMBER(GdipIsOutlineVisiblePathPoint);

GpStatus WINGDIPAPI
GdipIsOutlineVisiblePathPoint(GpPath* path, REAL x, REAL y, GpPen *pen,
                              GpGraphics *graphics, BOOL *result)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipIsOutlineVisiblePathPoint == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipIsOutlineVisiblePathPoint);
        }
        if ( g_GdipIsOutlineVisiblePathPoint != NULL )
        {
            status = (*g_GdipIsOutlineVisiblePathPoint)(path, x, y, pen, graphics, result);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipIsOutlineVisiblePathPointIPtr)(GpPath* path, INT x, INT y, GpPen *pen,
               GpGraphics *graphics, BOOL *result));
DEFINE_MEMBER(GdipIsOutlineVisiblePathPointI);

GpStatus WINGDIPAPI
GdipIsOutlineVisiblePathPointI(GpPath* path, INT x, INT y, GpPen *pen,
                               GpGraphics *graphics, BOOL *result)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipIsOutlineVisiblePathPointI == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipIsOutlineVisiblePathPointI);
        }
        if ( g_GdipIsOutlineVisiblePathPointI != NULL )
        {
            status = (*g_GdipIsOutlineVisiblePathPointI)(path, x, y, pen, graphics, result);
        }
    }
    return status;
}


//----------------------------------------------------------------------------
// PathIterator APIs
//----------------------------------------------------------------------------


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipCreatePathIterPtr)(GpPathIterator **iterator, GpPath* path));
DEFINE_MEMBER(GdipCreatePathIter);

GpStatus WINGDIPAPI
GdipCreatePathIter(GpPathIterator **iterator, GpPath* path)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipCreatePathIter == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipCreatePathIter);
        }
        if ( g_GdipCreatePathIter != NULL )
        {
            status = (*g_GdipCreatePathIter)(iterator, path);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipDeletePathIterPtr)(GpPathIterator *iterator));
DEFINE_MEMBER(GdipDeletePathIter);

GpStatus WINGDIPAPI
GdipDeletePathIter(GpPathIterator *iterator)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipDeletePathIter == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipDeletePathIter);
        }
        if ( g_GdipDeletePathIter != NULL )
        {
            status = (*g_GdipDeletePathIter)(iterator);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipPathIterNextSubpathPtr)(GpPathIterator* iterator, INT *resultCount,
                       INT* startIndex, INT* endIndex, BOOL* isClosed));
DEFINE_MEMBER(GdipPathIterNextSubpath);

GpStatus WINGDIPAPI
GdipPathIterNextSubpath(GpPathIterator* iterator, INT *resultCount,
        INT* startIndex, INT* endIndex, BOOL* isClosed)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipPathIterNextSubpath == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipPathIterNextSubpath);
        }
        if ( g_GdipPathIterNextSubpath != NULL )
        {
            status = (*g_GdipPathIterNextSubpath)(iterator, resultCount, startIndex, endIndex, isClosed);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipPathIterNextSubpathPathPtr)(GpPathIterator* iterator, INT* resultCount,
                       GpPath* path, BOOL* isClosed));
DEFINE_MEMBER(GdipPathIterNextSubpathPath);

GpStatus WINGDIPAPI
GdipPathIterNextSubpathPath(GpPathIterator* iterator, INT* resultCount,
        GpPath* path, BOOL* isClosed)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipPathIterNextSubpathPath == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipPathIterNextSubpathPath);
        }
        if ( g_GdipPathIterNextSubpathPath != NULL )
        {
            status = (*g_GdipPathIterNextSubpathPath)(iterator, resultCount, path, isClosed);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipPathIterNextPathTypePtr)(GpPathIterator* iterator, INT* resultCount,
                       BYTE* pathType, INT* startIndex, INT* endIndex));
DEFINE_MEMBER(GdipPathIterNextPathType);

GpStatus WINGDIPAPI
GdipPathIterNextPathType(GpPathIterator* iterator, INT* resultCount,
        BYTE* pathType, INT* startIndex, INT* endIndex)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipPathIterNextPathType == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipPathIterNextPathType);
        }
        if ( g_GdipPathIterNextPathType != NULL )
        {
            status = (*g_GdipPathIterNextPathType)(iterator, resultCount, pathType, startIndex, endIndex);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipPathIterNextMarkerPtr)(GpPathIterator* iterator, INT *resultCount,
                       INT* startIndex, INT* endIndex));
DEFINE_MEMBER(GdipPathIterNextMarker);

GpStatus WINGDIPAPI
GdipPathIterNextMarker(GpPathIterator* iterator, INT *resultCount,
        INT* startIndex, INT* endIndex)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipPathIterNextMarker == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipPathIterNextMarker);
        }
        if ( g_GdipPathIterNextMarker != NULL )
        {
            status = (*g_GdipPathIterNextMarker)(iterator, resultCount, startIndex, endIndex);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipPathIterNextMarkerPathPtr)(GpPathIterator* iterator, INT* resultCount,
                       GpPath* path));
DEFINE_MEMBER(GdipPathIterNextMarkerPath);

GpStatus WINGDIPAPI
GdipPathIterNextMarkerPath(GpPathIterator* iterator, INT* resultCount,
        GpPath* path)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipPathIterNextMarkerPath == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipPathIterNextMarkerPath);
        }
        if ( g_GdipPathIterNextMarkerPath != NULL )
        {
            status = (*g_GdipPathIterNextMarkerPath)(iterator, resultCount, path);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipPathIterGetCountPtr)(GpPathIterator* iterator, INT* count));
DEFINE_MEMBER(GdipPathIterGetCount);

GpStatus WINGDIPAPI
GdipPathIterGetCount(GpPathIterator* iterator, INT* count)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipPathIterGetCount == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipPathIterGetCount);
        }
        if ( g_GdipPathIterGetCount != NULL )
        {
            status = (*g_GdipPathIterGetCount)(iterator, count);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipPathIterGetSubpathCountPtr)(GpPathIterator* iterator, INT* count));
DEFINE_MEMBER(GdipPathIterGetSubpathCount);

GpStatus WINGDIPAPI
GdipPathIterGetSubpathCount(GpPathIterator* iterator, INT* count)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipPathIterGetSubpathCount == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipPathIterGetSubpathCount);
        }
        if ( g_GdipPathIterGetSubpathCount != NULL )
        {
            status = (*g_GdipPathIterGetSubpathCount)(iterator, count);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipPathIterIsValidPtr)(GpPathIterator* iterator, BOOL* valid));
DEFINE_MEMBER(GdipPathIterIsValid);

GpStatus WINGDIPAPI
GdipPathIterIsValid(GpPathIterator* iterator, BOOL* valid)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipPathIterIsValid == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipPathIterIsValid);
        }
        if ( g_GdipPathIterIsValid != NULL )
        {
            status = (*g_GdipPathIterIsValid)(iterator, valid);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipPathIterHasCurvePtr)(GpPathIterator* iterator, BOOL* hasCurve));
DEFINE_MEMBER(GdipPathIterHasCurve);

GpStatus WINGDIPAPI
GdipPathIterHasCurve(GpPathIterator* iterator, BOOL* hasCurve)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipPathIterHasCurve == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipPathIterHasCurve);
        }
        if ( g_GdipPathIterHasCurve != NULL )
        {
            status = (*g_GdipPathIterHasCurve)(iterator, hasCurve);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipPathIterRewindPtr)(GpPathIterator* iterator));
DEFINE_MEMBER(GdipPathIterRewind);

GpStatus WINGDIPAPI
GdipPathIterRewind(GpPathIterator* iterator)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipPathIterRewind == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipPathIterRewind);
        }
        if ( g_GdipPathIterRewind != NULL )
        {
            status = (*g_GdipPathIterRewind)(iterator);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipPathIterEnumeratePtr)(GpPathIterator* iterator, INT* resultCount,
                   GpPointF *points, BYTE *types, INT count));
DEFINE_MEMBER(GdipPathIterEnumerate);

GpStatus WINGDIPAPI
GdipPathIterEnumerate(GpPathIterator* iterator, INT* resultCount,
    GpPointF *points, BYTE *types, INT count)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipPathIterEnumerate == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipPathIterEnumerate);
        }
        if ( g_GdipPathIterEnumerate != NULL )
        {
            status = (*g_GdipPathIterEnumerate)(iterator, resultCount, points, types, count);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipPathIterCopyDataPtr)(GpPathIterator* iterator, INT* resultCount,
                   GpPointF* points, BYTE* types, INT startIndex, INT endIndex));
DEFINE_MEMBER(GdipPathIterCopyData);

GpStatus WINGDIPAPI
GdipPathIterCopyData(GpPathIterator* iterator, INT* resultCount,
    GpPointF* points, BYTE* types, INT startIndex, INT endIndex)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipPathIterCopyData == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipPathIterCopyData);
        }
        if ( g_GdipPathIterCopyData != NULL )
        {
            status = (*g_GdipPathIterCopyData)(iterator, resultCount, points, types, startIndex, endIndex);
        }
    }
    return status;
}


//----------------------------------------------------------------------------
// Platform Shunt
//----------------------------------------------------------------------------

VOID WINAPI
Gdiplus_PathInit()
{
}
