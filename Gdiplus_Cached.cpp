#include "stdafx.h"
#include "GdiplusShunt.h"

//----------------------------------------------------------------------------
// Cached Bitmap APIs
//----------------------------------------------------------------------------

DEFINE_POINTER( GpStatus (WINGDIPAPI *GdipCreateCachedBitmapPtr)(
    GpBitmap *bitmap, GpGraphics *graphics, GpCachedBitmap **cachedBitmap));
DEFINE_MEMBER(GdipCreateCachedBitmap);

GpStatus WINGDIPAPI
GdipCreateCachedBitmap(
    GpBitmap *bitmap,
    GpGraphics *graphics,
    GpCachedBitmap **cachedBitmap
)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipCreateCachedBitmap == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipCreateCachedBitmap);
        }
        if ( g_GdipCreateCachedBitmap != NULL )
        {
            status = (*g_GdipCreateCachedBitmap)(bitmap, graphics, cachedBitmap);
        }
    }
    return status;
}


DEFINE_POINTER( GpStatus (WINGDIPAPI *GdipDeleteCachedBitmapPtr)(GpCachedBitmap *cachedBitmap));
DEFINE_MEMBER(GdipDeleteCachedBitmap);

GpStatus WINGDIPAPI
GdipDeleteCachedBitmap(GpCachedBitmap *cachedBitmap)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipDeleteCachedBitmap == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipDeleteCachedBitmap);
        }
        if ( g_GdipDeleteCachedBitmap != NULL )
        {
            status = (*g_GdipDeleteCachedBitmap)(cachedBitmap);
        }
    }
    return status;
}


DEFINE_POINTER( GpStatus (WINGDIPAPI *GdipDrawCachedBitmapPtr)(
    GpGraphics *graphics, GpCachedBitmap *cachedBitmap, INT x, INT y));
DEFINE_MEMBER(GdipDrawCachedBitmap);

GpStatus WINGDIPAPI
GdipDrawCachedBitmap(
    GpGraphics *graphics,
    GpCachedBitmap *cachedBitmap,
    INT x,
    INT y
)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipDrawCachedBitmap == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipDrawCachedBitmap);
        }
        if ( g_GdipDrawCachedBitmap != NULL )
        {
            status = (*g_GdipDrawCachedBitmap)(graphics, cachedBitmap, x, y);
        }
    }
    return status;
}


DEFINE_POINTER( UINT (WINGDIPAPI *GdipEmfToWmfBitsPtr)(
    HENHMETAFILE hemf, UINT         cbData16,
    LPBYTE       pData16, INT          iMapMode,
    INT          eFlags));
DEFINE_MEMBER(GdipEmfToWmfBits);

UINT WINGDIPAPI
GdipEmfToWmfBits(
    HENHMETAFILE hemf,
    UINT         cbData16,
    LPBYTE       pData16,
    INT          iMapMode,
    INT          eFlags
)
{
    UINT status = 0;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipEmfToWmfBits == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipEmfToWmfBits);
        }
        if ( g_GdipEmfToWmfBits != NULL )
        {
            status = (*g_GdipEmfToWmfBits)(hemf, cbData16, pData16, iMapMode,eFlags);
        }
    }
    return status;
}


DEFINE_POINTER( GpStatus (WINGDIPAPI *GdipSetImageAttributesCachedBackgroundPtr)(
    GpImageAttributes *imageattr, BOOL enableFlag));
DEFINE_MEMBER(GdipSetImageAttributesCachedBackground);

GpStatus WINGDIPAPI
GdipSetImageAttributesCachedBackground(
    GpImageAttributes *imageattr,
    BOOL enableFlag
)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipSetImageAttributesCachedBackground == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipSetImageAttributesCachedBackground);
        }
        if ( g_GdipSetImageAttributesCachedBackground != NULL )
        {
            status = (*g_GdipSetImageAttributesCachedBackground)(imageattr, enableFlag);
        }
    }
    return status;
}


DEFINE_POINTER( GpStatus (WINGDIPAPI *GdipTestControlPtr)(
    GpTestControlEnum control, void * param));
DEFINE_MEMBER(GdipTestControl);

GpStatus WINGDIPAPI
GdipTestControl(
    GpTestControlEnum control,
    void * param
)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipTestControl == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipTestControl);
        }
        if ( g_GdipTestControl != NULL )
        {
            status = (*g_GdipTestControl)(control, param);
        }
    }
    return status;
}


DEFINE_POINTER( GpStatus (WINAPI *GdiplusNotificationHookPtr)(OUT ULONG_PTR *token));
DEFINE_MEMBER(GdiplusNotificationHook);

GpStatus WINAPI
GdiplusNotificationHook(OUT ULONG_PTR *token)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdiplusNotificationHook == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdiplusNotificationHook);
        }
        if ( g_GdiplusNotificationHook != NULL )
        {
            status = (*g_GdiplusNotificationHook)(token);
        }
    }
    return status;
}


DEFINE_POINTER( VOID (WINAPI *GdiplusNotificationUnhookPtr)(ULONG_PTR token));
DEFINE_MEMBER(GdiplusNotificationUnhook);

VOID WINAPI
GdiplusNotificationUnhook(ULONG_PTR token)
{
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdiplusNotificationUnhook == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdiplusNotificationUnhook);
        }
        if ( g_GdiplusNotificationUnhook != NULL )
        {
            (*g_GdiplusNotificationUnhook)(token);
        }
    }
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipConvertToEmfPlusPtr)(
                  const GpGraphics* refGraphics, GpMetafile*  metafile,
                  INT* conversionFailureFlag, EmfType emfType,
                  const WCHAR* description, GpMetafile** out_metafile));
DEFINE_MEMBER(GdipConvertToEmfPlus);

GpStatus WINGDIPAPI
GdipConvertToEmfPlus(
   const GpGraphics* refGraphics,
   GpMetafile*  metafile,
   INT* conversionFailureFlag,
   EmfType      emfType,
   const WCHAR* description,
   GpMetafile** out_metafile
)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipConvertToEmfPlus == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule,GdipConvertToEmfPlus);
        }
        if ( g_GdipConvertToEmfPlus != NULL )
        {
            status = (*g_GdipConvertToEmfPlus)(refGraphics, metafile, conversionFailureFlag, emfType, description, out_metafile);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipConvertToEmfPlusToFilePtr)(
                  const GpGraphics* refGraphics, GpMetafile*  metafile,
                  INT* conversionFailureFlag, const WCHAR* filename, EmfType emfType,
                  const WCHAR* description, GpMetafile** out_metafile));
DEFINE_MEMBER(GdipConvertToEmfPlusToFile);

GpStatus WINGDIPAPI
GdipConvertToEmfPlusToFile(
   const GpGraphics* refGraphics,
   GpMetafile*  metafile,
   INT* conversionFailureFlag,
   const WCHAR* filename, 
   EmfType      emfType,
   const WCHAR* description,
   GpMetafile** out_metafile
)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipConvertToEmfPlusToFile == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule,GdipConvertToEmfPlusToFile);
        }
        if ( g_GdipConvertToEmfPlusToFile != NULL )
        {
            status = (*g_GdipConvertToEmfPlusToFile)(refGraphics, metafile, conversionFailureFlag, filename, emfType, description, out_metafile);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipConvertToEmfPlusToStreamPtr)(
                  const GpGraphics* refGraphics, GpMetafile*  metafile, INT* conversionFailureFlag,
                           IStream* stream, EmfType emfType, const WCHAR* description, GpMetafile** out_metafile));
DEFINE_MEMBER(GdipConvertToEmfPlusToStream);

GpStatus WINGDIPAPI
GdipConvertToEmfPlusToStream(
   const GpGraphics* refGraphics,
   GpMetafile*  metafile,
   INT* conversionFailureFlag,
   IStream* stream, 
   EmfType      emfType,
   const WCHAR* description,
   GpMetafile** out_metafile
)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipConvertToEmfPlusToStream == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule,GdipConvertToEmfPlusToStream);
        }
        if ( g_GdipConvertToEmfPlusToStream != NULL )
        {
            status = (*g_GdipConvertToEmfPlusToStream)(refGraphics, metafile, conversionFailureFlag, stream, emfType, description, out_metafile);
        }
    }
    return status;
}


//----------------------------------------------------------------------------
// Platform Shunt
//----------------------------------------------------------------------------

VOID WINAPI
Gdiplus_CachedInit()
{
}

