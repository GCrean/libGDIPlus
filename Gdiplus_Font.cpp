#include "stdafx.h"
#include "GdiplusShunt.h"

//----------------------------------------------------------------------------
// FontFamily APIs
//----------------------------------------------------------------------------


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipCreateFontFamilyFromNamePtr)(GDIPCONST WCHAR *name,
                         GpFontCollection *fontCollection,
                         GpFontFamily **FontFamily));
DEFINE_MEMBER(GdipCreateFontFamilyFromName);

GpStatus WINGDIPAPI
GdipCreateFontFamilyFromName(GDIPCONST WCHAR *name,
                             GpFontCollection *fontCollection,
                             GpFontFamily **FontFamily)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipCreateFontFamilyFromName == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipCreateFontFamilyFromName);
        }
        if ( g_GdipCreateFontFamilyFromName != NULL )
        {
            status = (*g_GdipCreateFontFamilyFromName)(name, fontCollection, FontFamily);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipDeleteFontFamilyPtr)(GpFontFamily *FontFamily));
DEFINE_MEMBER(GdipDeleteFontFamily);

GpStatus WINGDIPAPI
GdipDeleteFontFamily(GpFontFamily *FontFamily)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipDeleteFontFamily == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipDeleteFontFamily);
        }
        if ( g_GdipDeleteFontFamily != NULL )
        {
            status = (*g_GdipDeleteFontFamily)(FontFamily);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipCloneFontFamilyPtr)(GpFontFamily *FontFamily, GpFontFamily **clonedFontFamily));
DEFINE_MEMBER(GdipCloneFontFamily);

GpStatus WINGDIPAPI
GdipCloneFontFamily(GpFontFamily *FontFamily, GpFontFamily **clonedFontFamily)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipCloneFontFamily == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipCloneFontFamily);
        }
        if ( g_GdipCloneFontFamily != NULL )
        {
            status = (*g_GdipCloneFontFamily)(FontFamily, clonedFontFamily);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetGenericFontFamilySansSerifPtr)(GpFontFamily **nativeFamily));
DEFINE_MEMBER(GdipGetGenericFontFamilySansSerif);

GpStatus WINGDIPAPI
GdipGetGenericFontFamilySansSerif(GpFontFamily **nativeFamily)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipGetGenericFontFamilySansSerif == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetGenericFontFamilySansSerif);
        }
        if ( g_GdipGetGenericFontFamilySansSerif != NULL )
        {
            status = (*g_GdipGetGenericFontFamilySansSerif)(nativeFamily);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetGenericFontFamilySerifPtr)(GpFontFamily **nativeFamily));
DEFINE_MEMBER(GdipGetGenericFontFamilySerif);

GpStatus WINGDIPAPI
GdipGetGenericFontFamilySerif(GpFontFamily **nativeFamily)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipGetGenericFontFamilySerif == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetGenericFontFamilySerif);
        }
        if ( g_GdipGetGenericFontFamilySerif != NULL )
        {
            status = (*g_GdipGetGenericFontFamilySerif)(nativeFamily);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetGenericFontFamilyMonospacePtr)(GpFontFamily **nativeFamily));
DEFINE_MEMBER(GdipGetGenericFontFamilyMonospace);

GpStatus WINGDIPAPI
GdipGetGenericFontFamilyMonospace(GpFontFamily **nativeFamily)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipGetGenericFontFamilyMonospace == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetGenericFontFamilyMonospace);
        }
        if ( g_GdipGetGenericFontFamilyMonospace != NULL )
        {
            status = (*g_GdipGetGenericFontFamilyMonospace)(nativeFamily);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetFamilyNamePtr)(
                   GDIPCONST GpFontFamily  *family,
                   LPWSTR name, LANGID language));
DEFINE_MEMBER(GdipGetFamilyName);

GpStatus WINGDIPAPI
GdipGetFamilyName(
    GDIPCONST GpFontFamily  *family,
    LPWSTR name, LANGID language
)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipGetFamilyName == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetFamilyName);
        }
        if ( g_GdipGetFamilyName != NULL )
        {
            status = (*g_GdipGetFamilyName)(family, name, language);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipIsStyleAvailablePtr)(GDIPCONST GpFontFamily *family, INT style, 
                         BOOL * IsStyleAvailable));
DEFINE_MEMBER(GdipIsStyleAvailable);

GpStatus   WINGDIPAPI
GdipIsStyleAvailable(GDIPCONST GpFontFamily *family, INT style, 
                     BOOL * IsStyleAvailable)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipIsStyleAvailable == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipIsStyleAvailable);
        }
        if ( g_GdipIsStyleAvailable != NULL )
        {
            status = (*g_GdipIsStyleAvailable)(family, style, IsStyleAvailable);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipFontCollectionEnumerablePtr)(
                   GpFontCollection* fontCollection, GpGraphics* graphics, INT * numFound));
DEFINE_MEMBER(GdipFontCollectionEnumerable);

GpStatus WINGDIPAPI
GdipFontCollectionEnumerable(
    GpFontCollection* fontCollection, GpGraphics* graphics, INT * numFound)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipFontCollectionEnumerable == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipFontCollectionEnumerable);
        }
        if ( g_GdipFontCollectionEnumerable != NULL )
        {
            status = (*g_GdipFontCollectionEnumerable)(fontCollection, graphics, numFound);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipFontCollectionEnumeratePtr)(
                   GpFontCollection* fontCollection,
                   INT numSought, GpFontFamily** gpfamilies,
                   INT* numFound, GpGraphics* graphics));
DEFINE_MEMBER(GdipFontCollectionEnumerate);

GpStatus WINGDIPAPI GdipFontCollectionEnumerate(
    GpFontCollection* fontCollection,
    INT             numSought,
    GpFontFamily**   gpfamilies,
    INT*            numFound,
    GpGraphics*     graphics
)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipFontCollectionEnumerate == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipFontCollectionEnumerate);
        }
        if ( g_GdipFontCollectionEnumerate != NULL )
        {
            status = (*g_GdipFontCollectionEnumerate)(fontCollection, numSought, gpfamilies, numFound, graphics);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetEmHeightPtr)(GDIPCONST GpFontFamily *family, INT style, 
                               UINT16 * EmHeight));
DEFINE_MEMBER(GdipGetEmHeight);

GpStatus WINGDIPAPI
GdipGetEmHeight(GDIPCONST GpFontFamily *family, INT style, 
                UINT16 * EmHeight)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipGetEmHeight == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetEmHeight);
        }
        if ( g_GdipGetEmHeight != NULL )
        {
            status = (*g_GdipGetEmHeight)(family, style, EmHeight);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetCellAscentPtr)(GDIPCONST GpFontFamily *family, INT style,
                                 UINT16 * CellAscent));
DEFINE_MEMBER(GdipGetCellAscent);

GpStatus WINGDIPAPI
GdipGetCellAscent(GDIPCONST GpFontFamily *family, INT style,
                  UINT16 * CellAscent)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipGetCellAscent == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetCellAscent);
        }
        if ( g_GdipGetCellAscent != NULL )
        {
            status = (*g_GdipGetCellAscent)(family, style, CellAscent);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetCellDescentPtr)(GDIPCONST GpFontFamily *family, INT style, 
                        UINT16 * CellDescent));
DEFINE_MEMBER(GdipGetCellDescent);

GpStatus WINGDIPAPI
GdipGetCellDescent(GDIPCONST GpFontFamily *family, INT style, 
                   UINT16 * CellDescent)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipGetCellDescent == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetCellDescent);
        }
        if ( g_GdipGetCellDescent != NULL )
        {
            status = (*g_GdipGetCellDescent)(family, style, CellDescent);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetLineSpacingPtr)(GDIPCONST GpFontFamily *family, INT style, 
                                  UINT16 * LineSpacing));
DEFINE_MEMBER(GdipGetLineSpacing);

GpStatus WINGDIPAPI
GdipGetLineSpacing(GDIPCONST GpFontFamily *family, INT style, 
                   UINT16 * LineSpacing)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipGetLineSpacing == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetLineSpacing);
        }
        if ( g_GdipGetLineSpacing != NULL )
        {
            status = (*g_GdipGetLineSpacing)(family, style, LineSpacing);
        }
    }
    return status;
}


//----------------------------------------------------------------------------
// Font APIs
//----------------------------------------------------------------------------


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipCreateFontFromDCPtr)(HDC hdc, GpFont **font));
DEFINE_MEMBER(GdipCreateFontFromDC);

GpStatus WINGDIPAPI
GdipCreateFontFromDC(HDC hdc, GpFont **font)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipCreateFontFromDC == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipCreateFontFromDC);
        }
        if ( g_GdipCreateFontFromDC != NULL )
        {
            status = (*g_GdipCreateFontFromDC)(hdc, font);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipCreateFontFromLogfontAPtr)(
                   HDC hdc, GDIPCONST LOGFONTA *logfont, GpFont **font));
DEFINE_MEMBER(GdipCreateFontFromLogfontA);

GpStatus WINGDIPAPI
GdipCreateFontFromLogfontA(
    HDC hdc, GDIPCONST LOGFONTA *logfont, GpFont **font)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipCreateFontFromLogfontA == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipCreateFontFromLogfontA);
        }
        if ( g_GdipCreateFontFromLogfontA != NULL )
        {
            status = (*g_GdipCreateFontFromLogfontA)(hdc, logfont, font);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipCreateFontFromLogfontWPtr)(
                   HDC hdc, GDIPCONST LOGFONTW *logfont, GpFont **font));
DEFINE_MEMBER(GdipCreateFontFromLogfontW);

GpStatus WINGDIPAPI
GdipCreateFontFromLogfontW(
    HDC hdc, GDIPCONST LOGFONTW *logfont, GpFont **font)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipCreateFontFromLogfontW == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipCreateFontFromLogfontW);
        }
        if ( g_GdipCreateFontFromLogfontW != NULL )
        {
            status = (*g_GdipCreateFontFromLogfontW)(hdc, logfont, font);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipCreateFontPtr)(GDIPCONST GpFontFamily *fontFamily,
                   REAL emSize, INT style, Unit unit, GpFont **font));
DEFINE_MEMBER(GdipCreateFont);

GpStatus WINGDIPAPI
GdipCreateFont(GDIPCONST GpFontFamily *fontFamily,
    REAL emSize, INT style, Unit unit, GpFont **font)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipCreateFont == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipCreateFont);
        }
        if ( g_GdipCreateFont != NULL )
        {
            status = (*g_GdipCreateFont)(fontFamily, emSize, style, unit, font);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipCloneFontPtr)(GpFont* font, GpFont** cloneFont));
DEFINE_MEMBER(GdipCloneFont);

GpStatus WINGDIPAPI
GdipCloneFont(GpFont* font, GpFont** cloneFont)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipCloneFont == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipCloneFont);
        }
        if ( g_GdipCloneFont != NULL )
        {
            status = (*g_GdipCloneFont)(font, cloneFont);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipDeleteFontPtr)(GpFont* font));
DEFINE_MEMBER(GdipDeleteFont);

GpStatus WINGDIPAPI
GdipDeleteFont(GpFont* font)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipDeleteFont == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipDeleteFont);
        }
        if ( g_GdipDeleteFont != NULL )
        {
            status = (*g_GdipDeleteFont)(font);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetFamilyPtr)(GpFont *font, GpFontFamily **family));
DEFINE_MEMBER(GdipGetFamily);

GpStatus WINGDIPAPI
GdipGetFamily(GpFont *font, GpFontFamily **family)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipGetFamily == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetFamily);
        }
        if ( g_GdipGetFamily != NULL )
        {
            status = (*g_GdipGetFamily)(font, family);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetFontStylePtr)(GpFont *font, INT *style));
DEFINE_MEMBER(GdipGetFontStyle);

GpStatus WINGDIPAPI
GdipGetFontStyle(GpFont *font, INT *style)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipGetFontStyle == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetFontStyle);
        }
        if ( g_GdipGetFontStyle != NULL )
        {
            status = (*g_GdipGetFontStyle)(font, style);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetFontSizePtr)(GpFont *font, REAL *size));
DEFINE_MEMBER(GdipGetFontSize);

GpStatus WINGDIPAPI
GdipGetFontSize(GpFont *font, REAL *size)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipGetFontSize == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetFontSize);
        }
        if ( g_GdipGetFontSize != NULL )
        {
            status = (*g_GdipGetFontSize)(font, size);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetFontUnitPtr)(GpFont *font, Unit *unit));
DEFINE_MEMBER(GdipGetFontUnit);

GpStatus WINGDIPAPI
GdipGetFontUnit(GpFont *font, Unit *unit)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipGetFontUnit == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetFontUnit);
        }
        if ( g_GdipGetFontUnit != NULL )
        {
            status = (*g_GdipGetFontUnit)(font, unit);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetFontHeightPtr)(GDIPCONST GpFont *font, GDIPCONST GpGraphics *graphics, REAL *height));
DEFINE_MEMBER(GdipGetFontHeight);

GpStatus WINGDIPAPI
GdipGetFontHeight(GDIPCONST GpFont *font, GDIPCONST GpGraphics *graphics, REAL *height)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipGetFontHeight == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetFontHeight);
        }
        if ( g_GdipGetFontHeight != NULL )
        {
            status = (*g_GdipGetFontHeight)(font, graphics, height);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetFontHeightGivenDPIPtr)(GDIPCONST GpFont *font, REAL dpi, REAL *height));
DEFINE_MEMBER(GdipGetFontHeightGivenDPI);

GpStatus WINGDIPAPI
GdipGetFontHeightGivenDPI(GDIPCONST GpFont *font, REAL dpi, REAL *height)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipGetFontHeightGivenDPI == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetFontHeightGivenDPI);
        }
        if ( g_GdipGetFontHeightGivenDPI != NULL )
        {
            status = (*g_GdipGetFontHeightGivenDPI)(font, dpi, height);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetLogFontAPtr)(GpFont * font, GpGraphics *graphics, LOGFONTA * logfontA));
DEFINE_MEMBER(GdipGetLogFontA);

GpStatus WINGDIPAPI
GdipGetLogFontA(GpFont * font, GpGraphics *graphics, LOGFONTA * logfontA)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipGetLogFontA == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetLogFontA);
        }
        if ( g_GdipGetLogFontA != NULL )
        {
            status = (*g_GdipGetLogFontA)(font, graphics, logfontA);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetLogFontWPtr)(GpFont * font, GpGraphics *graphics, LOGFONTW * logfontW));
DEFINE_MEMBER(GdipGetLogFontW);

GpStatus WINGDIPAPI
GdipGetLogFontW(GpFont * font, GpGraphics *graphics, LOGFONTW * logfontW)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipGetLogFontW == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetLogFontW);
        }
        if ( g_GdipGetLogFontW != NULL )
        {
            status = (*g_GdipGetLogFontW)(font, graphics, logfontW);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipNewInstalledFontCollectionPtr)(GpFontCollection** fontCollection));
DEFINE_MEMBER(GdipNewInstalledFontCollection);

GpStatus WINGDIPAPI
GdipNewInstalledFontCollection(GpFontCollection** fontCollection)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipNewInstalledFontCollection == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipNewInstalledFontCollection);
        }
        if ( g_GdipNewInstalledFontCollection != NULL )
        {
            status = (*g_GdipNewInstalledFontCollection)(fontCollection);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipNewPrivateFontCollectionPtr)(GpFontCollection** fontCollection));
DEFINE_MEMBER(GdipNewPrivateFontCollection);

GpStatus WINGDIPAPI
GdipNewPrivateFontCollection(GpFontCollection** fontCollection)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipNewPrivateFontCollection == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipNewPrivateFontCollection);
        }
        if ( g_GdipNewPrivateFontCollection != NULL )
        {
            status = (*g_GdipNewPrivateFontCollection)(fontCollection);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipDeletePrivateFontCollectionPtr)(GpFontCollection** fontCollection));
DEFINE_MEMBER(GdipDeletePrivateFontCollection);

GpStatus WINGDIPAPI
GdipDeletePrivateFontCollection(GpFontCollection** fontCollection)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipDeletePrivateFontCollection == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipDeletePrivateFontCollection);
        }
        if ( g_GdipDeletePrivateFontCollection != NULL )
        {
            status = (*g_GdipDeletePrivateFontCollection)(fontCollection);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetFontCollectionFamilyCountPtr)(GpFontCollection* fontCollection,INT * numFound));
DEFINE_MEMBER(GdipGetFontCollectionFamilyCount);

GpStatus WINGDIPAPI
GdipGetFontCollectionFamilyCount(GpFontCollection* fontCollection,INT * numFound)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipGetFontCollectionFamilyCount == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetFontCollectionFamilyCount);
        }
        if ( g_GdipGetFontCollectionFamilyCount != NULL )
        {
            status = (*g_GdipGetFontCollectionFamilyCount)(fontCollection, numFound);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetFontCollectionFamilyListPtr)(
                   GpFontCollection* fontCollection, INT numSought,
                       GpFontFamily** gpfamilies, INT* numFound));
DEFINE_MEMBER(GdipGetFontCollectionFamilyList);

GpStatus WINGDIPAPI
GdipGetFontCollectionFamilyList(
    GpFontCollection* fontCollection, INT numSought,
    GpFontFamily** gpfamilies, INT* numFound)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipGetFontCollectionFamilyList == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetFontCollectionFamilyList);
        }
        if ( g_GdipGetFontCollectionFamilyList != NULL )
        {
            status = (*g_GdipGetFontCollectionFamilyList)(fontCollection, numSought, gpfamilies, numFound);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipPrivateAddFontFilePtr)(
                   GpFontCollection* fontCollection, GDIPCONST WCHAR* filename));
DEFINE_MEMBER(GdipPrivateAddFontFile);

GpStatus WINGDIPAPI
GdipPrivateAddFontFile(
    GpFontCollection* fontCollection,
    GDIPCONST WCHAR* filename
)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipPrivateAddFontFile == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipPrivateAddFontFile);
        }
        if ( g_GdipPrivateAddFontFile != NULL )
        {
            status = (*g_GdipPrivateAddFontFile)(fontCollection, filename);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipPrivateAddMemoryFontPtr)(
                   GpFontCollection* fontCollection, GDIPCONST void* memory,INT length));
DEFINE_MEMBER(GdipPrivateAddMemoryFont);

GpStatus WINGDIPAPI
GdipPrivateAddMemoryFont(
    GpFontCollection* fontCollection, GDIPCONST void* memory,INT length)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipPrivateAddMemoryFont == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipPrivateAddMemoryFont);
        }
        if ( g_GdipPrivateAddMemoryFont != NULL )
        {
            status = (*g_GdipPrivateAddMemoryFont)(fontCollection, memory, length);
        }
    }
    return status;
}


//----------------------------------------------------------------------------
// Platform Shunt
//----------------------------------------------------------------------------

VOID WINAPI
Gdiplus_FontInit()
{
}

