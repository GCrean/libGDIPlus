#ifndef GDIPLUSSHUNT_H
#define GDIPLUSSHUNT_H
#include "GdiplusPlatform.h"

namespace {
#define DEFINE_POINTER(functptr)            typedef functptr
#define DEFINE_MEMBER(name)                 __declspec(selectany) name## Ptr g_##name = NULL
#ifdef _UNICODE
#if defined(UNDER_CE)
#define INITIALIZE_MEMBER(module, name)     g_##name = (name## Ptr) GetProcAddressW(module, L#name)
#else
#define INITIALIZE_MEMBER(module, name)     g_##name = (name## Ptr) GetProcAddress(module, #name)
#endif // UNDER_CE
#else
#define INITIALIZE_MEMBER(module, name)     g_##name = (name## Ptr) GetProcAddress(module, #name)
#endif // _UNICODE
};

extern HMODULE g_hGdiplusModule;

VOID WINAPI Gdiplus_BrushInit();
VOID WINAPI Gdiplus_CachedInit();
VOID WINAPI Gdiplus_CapInit();
VOID WINAPI Gdiplus_FontInit();
VOID WINAPI Gdiplus_GraphicsInit();
VOID WINAPI Gdiplus_ImageInit();
VOID WINAPI Gdiplus_MatrixInit();
VOID WINAPI Gdiplus_PathInit();
VOID WINAPI Gdiplus_PenInit();
VOID WINAPI Gdiplus_RegionInit();
VOID WINAPI Gdiplus_StringInit();

#endif //GDIPLUSSHUNT_H