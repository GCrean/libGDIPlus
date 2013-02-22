#include "stdafx.h"
#include <initguid.h>
#include "GdiplusShunt.h"


//----------------------------------------------------------------------------
// Platform Init
//----------------------------------------------------------------------------

__declspec(selectany) HMODULE g_hGdiplusModule = NULL;

HMODULE WINAPI
Gdiplus_PlatformGetModule()
{
    return g_hGdiplusModule;
}

HMODULE WINAPI
Gdiplus_PlatformLoadLibrary()
{
    if ( g_hGdiplusModule == NULL )
    {
#ifdef _UNICODE
        g_hGdiplusModule = LoadLibraryW( L"Gdiplus.dll" );
#else
        g_hGdiplusModule = LoadLibraryA( "Gdiplus.dll" );
#endif
    }
    return g_hGdiplusModule;
}

VOID WINAPI
Gdiplus_PlatformFreeLibrary()
{
    if ( g_hGdiplusModule != NULL )
    {
        FreeLibrary( g_hGdiplusModule );
        g_hGdiplusModule = NULL;
    }
}


VOID WINAPI
Gdiplus_PlatformInit()
{
    if ( g_hGdiplusModule == NULL )
    {
        Gdiplus_PlatformLoadLibrary();
        if ( g_hGdiplusModule != NULL )
        {
            Gdiplus_BrushInit();
            Gdiplus_CachedInit();
            Gdiplus_CapInit();
            Gdiplus_FontInit();
            Gdiplus_GraphicsInit();
            Gdiplus_ImageInit();
            Gdiplus_MatrixInit();
            Gdiplus_PathInit();
            Gdiplus_PenInit();
            Gdiplus_RegionInit();
            Gdiplus_StringInit();
        }
    }
}


//----------------------------------------------------------------------------
// Platform Shunt
//----------------------------------------------------------------------------

DEFINE_POINTER(void* (WINGDIPAPI *GdipAllocPtr)(size_t size));
DEFINE_MEMBER(GdipAlloc);

extern "C"
void* WINGDIPAPI
GdipAlloc(size_t size)
{
    void* ptrAlloc = NULL;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipAlloc == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipAlloc);
        }
        if ( g_GdipAlloc != NULL )
        {
            ptrAlloc = (*g_GdipAlloc)(size);
        }
    }
    return ptrAlloc;
}


DEFINE_POINTER(void (WINGDIPAPI *GdipFreePtr)(void* ptr));
DEFINE_MEMBER(GdipFree);

extern "C"
void WINGDIPAPI
GdipFree(void* ptr)
{
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipFree == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipFree);
        }
        if ( g_GdipFree != NULL )
        {
            (*g_GdipFree)(ptr);
        }
    }
}


DEFINE_POINTER(Status (WINAPI *GdiplusStartupPtr)(
                   ULONG_PTR *token, const GdiplusStartupInput *input,
                   GdiplusStartupOutput *output));
DEFINE_MEMBER(GdiplusStartup);

extern "C"
Status WINAPI GdiplusStartup(
    OUT ULONG_PTR *token,
    const GdiplusStartupInput *input,
    OUT GdiplusStartupOutput *output)
{
    GpStatus status = GdiplusNotInitialized;

    // Load library happens here
    Gdiplus_PlatformLoadLibrary();

    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdiplusStartup == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdiplusStartup);
        }
        if ( g_GdiplusStartup != NULL )
        {
            status = (*g_GdiplusStartup)(token, input, output);
        }
    }
    return status;
}


DEFINE_POINTER(VOID (WINAPI *GdiplusShutdownPtr)(ULONG_PTR token));
DEFINE_MEMBER(GdiplusShutdown);

extern "C"
VOID WINAPI GdiplusShutdown(ULONG_PTR token)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdiplusShutdown == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdiplusShutdown);
        }
        if ( g_GdiplusShutdown != NULL )
        {
            (*g_GdiplusShutdown)(token);
        }
        // we don't unload this library
    }
}
