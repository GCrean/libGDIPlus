#include "stdafx.h"
#include "GdiplusShunt.h"

//----------------------------------------------------------------------------
// Text APIs
//----------------------------------------------------------------------------


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipDrawStringPtr)(
                   GpGraphics *graphics, GDIPCONST WCHAR *string,
                   INT length, GDIPCONST GpFont *font,
                   GDIPCONST RectF *layoutRect,
                   GDIPCONST GpStringFormat *stringFormat, GDIPCONST GpBrush *brush));
DEFINE_MEMBER(GdipDrawString);

GpStatus WINGDIPAPI
GdipDrawString(
    GpGraphics *graphics, GDIPCONST WCHAR *string,
    INT length, GDIPCONST GpFont *font,
    GDIPCONST RectF *layoutRect,
    GDIPCONST GpStringFormat *stringFormat, GDIPCONST GpBrush *brush
)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipDrawString == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipDrawString);
        }
        if ( g_GdipDrawString != NULL )
        {
            status = (*g_GdipDrawString)(graphics, string, length, font, layoutRect, stringFormat, brush);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipMeasureStringPtr)(
                   GpGraphics *graphics,
                   GDIPCONST WCHAR *string, INT length,
                   GDIPCONST GpFont *font, GDIPCONST RectF *layoutRect,
                   GDIPCONST GpStringFormat *stringFormat, RectF *boundingBox,
                   INT *codepointsFitted, INT *linesFilled));
DEFINE_MEMBER(GdipMeasureString);

GpStatus WINGDIPAPI
GdipMeasureString(
    GpGraphics *graphics,
    GDIPCONST WCHAR *string, INT length,
    GDIPCONST GpFont *font, GDIPCONST RectF *layoutRect,
    GDIPCONST GpStringFormat *stringFormat, RectF *boundingBox,
    INT *codepointsFitted, INT *linesFilled
)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipMeasureString == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipMeasureString);
        }
        if ( g_GdipMeasureString != NULL )
        {
            status = (*g_GdipMeasureString)(graphics, string, length, font, layoutRect, stringFormat, boundingBox, codepointsFitted, linesFilled);
        }
    }
    return status;
}

/* This function is using reference */
DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipMeasureCharacterRangesPtr)(
                   GpGraphics *graphics, GDIPCONST WCHAR *string,
                   INT length, GDIPCONST GpFont *font,
                   GDIPCONST RectF &layoutRect, GDIPCONST GpStringFormat *stringFormat,
                   INT regionCount, GpRegion **regions));
DEFINE_MEMBER(GdipMeasureCharacterRanges);

GpStatus WINGDIPAPI
GdipMeasureCharacterRanges(
    GpGraphics *graphics, GDIPCONST WCHAR *string,
    INT length, GDIPCONST GpFont *font,
    GDIPCONST RectF &layoutRect, GDIPCONST GpStringFormat *stringFormat,
    INT regionCount, GpRegion **regions)

{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipMeasureCharacterRanges == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipMeasureCharacterRanges);
        }
        if ( g_GdipMeasureCharacterRanges != NULL )
        {
            status = (*g_GdipMeasureCharacterRanges)(graphics, string,length, font, layoutRect, stringFormat, regionCount, regions);
        }
    }
    return status;
}

DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipDrawDriverStringPtr)(
                GpGraphics *graphics, GDIPCONST UINT16 *text,
                INT length, GDIPCONST GpFont *font,
                GDIPCONST GpBrush *brush, GDIPCONST PointF *positions,
                INT flags, GDIPCONST GpMatrix *matrix));
DEFINE_MEMBER(GdipDrawDriverString);

GpStatus WINGDIPAPI
GdipDrawDriverString(
    GpGraphics *graphics, GDIPCONST UINT16 *text,
    INT length, GDIPCONST GpFont *font,
    GDIPCONST GpBrush *brush, GDIPCONST PointF *positions,
    INT flags, GDIPCONST GpMatrix *matrix
)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipDrawDriverString == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipDrawDriverString);
        }
        if ( g_GdipDrawDriverString != NULL )
        {
            status = (*g_GdipDrawDriverString)(graphics, text, length, font, brush, positions, flags, matrix);
        }
    }
    return status;
}



DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipMeasureDriverStringPtr)(
                   GpGraphics *graphics, GDIPCONST UINT16 *text, INT length,
                   GDIPCONST GpFont *font, GDIPCONST PointF *positions, INT flags,
                   GDIPCONST GpMatrix *matrix, RectF *boundingBox));
DEFINE_MEMBER(GdipMeasureDriverString);

GpStatus WINGDIPAPI
GdipMeasureDriverString(
    GpGraphics *graphics,
    GDIPCONST UINT16 *text,
    INT length,
    GDIPCONST GpFont *font,
    GDIPCONST PointF *positions,
    INT flags,
    GDIPCONST GpMatrix *matrix,
    RectF *boundingBox
)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipMeasureDriverString == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipMeasureDriverString);
        }
        if ( g_GdipMeasureDriverString != NULL )
        {
            status = (*g_GdipMeasureDriverString)(graphics, text, length, font, positions, flags, matrix, boundingBox);
        }
    }
    return status;
}

//----------------------------------------------------------------------------
// String format APIs
//----------------------------------------------------------------------------


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipCreateStringFormatPtr)(
                   INT formatAttributes, LANGID language, GpStringFormat **format));
DEFINE_MEMBER(GdipCreateStringFormat);

GpStatus WINGDIPAPI
GdipCreateStringFormat(
    INT formatAttributes, LANGID language, GpStringFormat **format)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipCreateStringFormat == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipCreateStringFormat);
        }
        if ( g_GdipCreateStringFormat != NULL )
        {
            status = (*g_GdipCreateStringFormat)(formatAttributes, language, format);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipStringFormatGetGenericDefaultPtr)(GpStringFormat **format));
DEFINE_MEMBER(GdipStringFormatGetGenericDefault);

GpStatus WINGDIPAPI
GdipStringFormatGetGenericDefault(GpStringFormat **format)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipStringFormatGetGenericDefault == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipStringFormatGetGenericDefault);
        }
        if ( g_GdipStringFormatGetGenericDefault != NULL )
        {
            status = (*g_GdipStringFormatGetGenericDefault)(format);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipStringFormatGetGenericTypographicPtr)(GpStringFormat **format));
DEFINE_MEMBER(GdipStringFormatGetGenericTypographic);

GpStatus WINGDIPAPI
GdipStringFormatGetGenericTypographic(GpStringFormat **format)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipStringFormatGetGenericTypographic == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipStringFormatGetGenericTypographic);
        }
        if ( g_GdipStringFormatGetGenericTypographic != NULL )
        {
            status = (*g_GdipStringFormatGetGenericTypographic)(format);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipDeleteStringFormatPtr)(GpStringFormat *format));
DEFINE_MEMBER(GdipDeleteStringFormat);

GpStatus WINGDIPAPI
GdipDeleteStringFormat(GpStringFormat *format)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipDeleteStringFormat == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipDeleteStringFormat);
        }
        if ( g_GdipDeleteStringFormat != NULL )
        {
            status = (*g_GdipDeleteStringFormat)(format);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipCloneStringFormatPtr)(GDIPCONST GpStringFormat *format, 
                                     GpStringFormat **newFormat));
DEFINE_MEMBER(GdipCloneStringFormat);

GpStatus WINGDIPAPI
GdipCloneStringFormat(GDIPCONST GpStringFormat *format, 
                      GpStringFormat **newFormat)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipCloneStringFormat == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipCloneStringFormat);
        }
        if ( g_GdipCloneStringFormat != NULL )
        {
            status = (*g_GdipCloneStringFormat)(format, newFormat);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetStringFormatFlagsPtr)(GpStringFormat *format, INT flags));
DEFINE_MEMBER(GdipSetStringFormatFlags);

GpStatus WINGDIPAPI
GdipSetStringFormatFlags(GpStringFormat *format, INT flags)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipSetStringFormatFlags == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipSetStringFormatFlags);
        }
        if ( g_GdipSetStringFormatFlags != NULL )
        {
            status = (*g_GdipSetStringFormatFlags)(format, flags);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetStringFormatFlagsPtr)(GDIPCONST GpStringFormat *format, 
               INT *flags));
DEFINE_MEMBER(GdipGetStringFormatFlags);

GpStatus WINGDIPAPI GdipGetStringFormatFlags(GDIPCONST GpStringFormat *format, INT *flags)

{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetStringFormatFlags == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetStringFormatFlags);
        }
        if ( g_GdipGetStringFormatFlags != NULL )
        {
            status = (*g_GdipGetStringFormatFlags)(format, flags);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetStringFormatAlignPtr)(GpStringFormat *format, StringAlignment align));
DEFINE_MEMBER(GdipSetStringFormatAlign);

GpStatus WINGDIPAPI
GdipSetStringFormatAlign(GpStringFormat *format, StringAlignment align)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipSetStringFormatAlign == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipSetStringFormatAlign);
        }
        if ( g_GdipSetStringFormatAlign != NULL )
        {
            status = (*g_GdipSetStringFormatAlign)(format, align);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetStringFormatAlignPtr)(GDIPCONST GpStringFormat *format, 
               StringAlignment *align));
DEFINE_MEMBER(GdipGetStringFormatAlign);

GpStatus WINGDIPAPI
GdipGetStringFormatAlign(GDIPCONST GpStringFormat *format, StringAlignment *align)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetStringFormatAlign == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetStringFormatAlign);
        }
        if ( g_GdipGetStringFormatAlign != NULL )
        {
            status = (*g_GdipGetStringFormatAlign)(format, align);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetStringFormatLineAlignPtr)(GpStringFormat *format,
                StringAlignment align));
DEFINE_MEMBER(GdipSetStringFormatLineAlign);

GpStatus WINGDIPAPI
GdipSetStringFormatLineAlign(GpStringFormat *format, StringAlignment align)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipSetStringFormatLineAlign == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipSetStringFormatLineAlign);
        }
        if ( g_GdipSetStringFormatLineAlign != NULL )
        {
            status = (*g_GdipSetStringFormatLineAlign)(format, align);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetStringFormatLineAlignPtr)(GDIPCONST GpStringFormat *format,
               StringAlignment *align));
DEFINE_MEMBER(GdipGetStringFormatLineAlign);

GpStatus WINGDIPAPI
GdipGetStringFormatLineAlign(GDIPCONST GpStringFormat *format,
                             StringAlignment *align)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetStringFormatLineAlign == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetStringFormatLineAlign);
        }
        if ( g_GdipGetStringFormatLineAlign != NULL )
        {
            status = (*g_GdipGetStringFormatLineAlign)(format, align);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetStringFormatTrimmingPtr)(GpStringFormat *format, StringTrimming trimming));
DEFINE_MEMBER(GdipSetStringFormatTrimming);

GpStatus WINGDIPAPI
GdipSetStringFormatTrimming(GpStringFormat *format, StringTrimming trimming)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipSetStringFormatTrimming == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipSetStringFormatTrimming);
        }
        if ( g_GdipSetStringFormatTrimming != NULL )
        {
            status = (*g_GdipSetStringFormatTrimming)(format, trimming);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetStringFormatTrimmingPtr)(GDIPCONST GpStringFormat *format, StringTrimming *trimming));
DEFINE_MEMBER(GdipGetStringFormatTrimming);

GpStatus WINGDIPAPI
GdipGetStringFormatTrimming(GDIPCONST GpStringFormat *format, StringTrimming *trimming)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetStringFormatTrimming == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetStringFormatTrimming);
        }
        if ( g_GdipGetStringFormatTrimming != NULL )
        {
            status = (*g_GdipGetStringFormatTrimming)(format, trimming);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetStringFormatHotkeyPrefixPtr)(GpStringFormat *format, INT hotkeyPrefix));
DEFINE_MEMBER(GdipSetStringFormatHotkeyPrefix);

GpStatus WINGDIPAPI
GdipSetStringFormatHotkeyPrefix(GpStringFormat *format, INT hotkeyPrefix)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipSetStringFormatHotkeyPrefix == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipSetStringFormatHotkeyPrefix);
        }
        if ( g_GdipSetStringFormatHotkeyPrefix != NULL )
        {
            status = (*g_GdipSetStringFormatHotkeyPrefix)(format, hotkeyPrefix);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetStringFormatHotkeyPrefixPtr)(GDIPCONST GpStringFormat *format, 
                                               INT *hotkeyPrefix));
DEFINE_MEMBER(GdipGetStringFormatHotkeyPrefix);

GpStatus WINGDIPAPI
GdipGetStringFormatHotkeyPrefix(GDIPCONST GpStringFormat *format, 
                                INT *hotkeyPrefix)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetStringFormatHotkeyPrefix == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetStringFormatHotkeyPrefix);
        }
        if ( g_GdipGetStringFormatHotkeyPrefix != NULL )
        {
            status = (*g_GdipGetStringFormatHotkeyPrefix)(format, hotkeyPrefix);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetStringFormatTabStopsPtr)(GpStringFormat *format, REAL firstTabOffset, 
                INT count, GDIPCONST REAL *tabStops));
DEFINE_MEMBER(GdipSetStringFormatTabStops);

GpStatus WINGDIPAPI
GdipSetStringFormatTabStops(GpStringFormat *format, REAL firstTabOffset, 
                            INT count, GDIPCONST REAL *tabStops)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipSetStringFormatTabStops == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipSetStringFormatTabStops);
        }
        if ( g_GdipSetStringFormatTabStops != NULL )
        {
            status = (*g_GdipSetStringFormatTabStops)(format, firstTabOffset, count, tabStops);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetStringFormatTabStopsPtr)(GDIPCONST GpStringFormat *format, INT count, 
                REAL *firstTabOffset, REAL *tabStops));
DEFINE_MEMBER(GdipGetStringFormatTabStops);

GpStatus WINGDIPAPI
GdipGetStringFormatTabStops(GDIPCONST GpStringFormat *format, INT count, 
                            REAL *firstTabOffset, REAL *tabStops)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetStringFormatTabStops == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetStringFormatTabStops);
        }
        if ( g_GdipGetStringFormatTabStops != NULL )
        {
            status = (*g_GdipGetStringFormatTabStops)(format, count, firstTabOffset, tabStops);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetStringFormatTabStopCountPtr)(GDIPCONST GpStringFormat *format, INT * count));
DEFINE_MEMBER(GdipGetStringFormatTabStopCount);

GpStatus WINGDIPAPI
GdipGetStringFormatTabStopCount(GDIPCONST GpStringFormat *format, INT * count)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetStringFormatTabStopCount == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetStringFormatTabStopCount);
        }
        if ( g_GdipGetStringFormatTabStopCount != NULL )
        {
            status = (*g_GdipGetStringFormatTabStopCount)(format, count);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetStringFormatDigitSubstitutionPtr)(GpStringFormat *format, LANGID language,
                StringDigitSubstitute substitute));
DEFINE_MEMBER(GdipSetStringFormatDigitSubstitution);

GpStatus WINGDIPAPI
GdipSetStringFormatDigitSubstitution(GpStringFormat *format, LANGID language,
                                     StringDigitSubstitute substitute)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipSetStringFormatDigitSubstitution == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipSetStringFormatDigitSubstitution);
        }
        if ( g_GdipSetStringFormatDigitSubstitution != NULL )
        {
            status = (*g_GdipSetStringFormatDigitSubstitution)(format, language, substitute);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetStringFormatDigitSubstitutionPtr)(GDIPCONST GpStringFormat *format, 
                LANGID *language,
                                                                                         StringDigitSubstitute *substitute));
DEFINE_MEMBER(GdipGetStringFormatDigitSubstitution);

GpStatus WINGDIPAPI
GdipGetStringFormatDigitSubstitution(GDIPCONST GpStringFormat *format, 
                                     LANGID *language,
                                     StringDigitSubstitute *substitute)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetStringFormatDigitSubstitution == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetStringFormatDigitSubstitution);
        }
        if ( g_GdipGetStringFormatDigitSubstitution != NULL )
        {
            status = (*g_GdipGetStringFormatDigitSubstitution)(format, language, substitute);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetStringFormatMeasurableCharacterRangeCountPtr)(
                   GDIPCONST GpStringFormat *format, INT *count
                   ));
DEFINE_MEMBER(GdipGetStringFormatMeasurableCharacterRangeCount);

GpStatus WINGDIPAPI
GdipGetStringFormatMeasurableCharacterRangeCount(
    GDIPCONST GpStringFormat *format, INT *count)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetStringFormatMeasurableCharacterRangeCount == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetStringFormatMeasurableCharacterRangeCount);
        }
        if ( g_GdipGetStringFormatMeasurableCharacterRangeCount != NULL )
        {
            status = (*g_GdipGetStringFormatMeasurableCharacterRangeCount)(format, count);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetStringFormatMeasurableCharacterRangesPtr)(
                   GpStringFormat *format, INT rangeCount,
                       GDIPCONST CharacterRange *ranges
                       ));
DEFINE_MEMBER(GdipSetStringFormatMeasurableCharacterRanges);

GpStatus WINGDIPAPI
GdipSetStringFormatMeasurableCharacterRanges(
    GpStringFormat *format, INT rangeCount,
    GDIPCONST CharacterRange *ranges)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipSetStringFormatMeasurableCharacterRanges == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipSetStringFormatMeasurableCharacterRanges);
        }
        if ( g_GdipSetStringFormatMeasurableCharacterRanges != NULL )
        {
            status = (*g_GdipSetStringFormatMeasurableCharacterRanges)(format, rangeCount, ranges);
        }
    }
    return status;
}


//----------------------------------------------------------------------------
// Platform Shunt
//----------------------------------------------------------------------------

VOID WINAPI
Gdiplus_StringInit()
{
}
