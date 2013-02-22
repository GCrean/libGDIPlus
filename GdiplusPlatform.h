#ifndef GDIPLUSPLATFORM_H
#define GDIPLUSPLATFORM_H

struct IDirectDrawSurface7;

typedef signed   short   INT16;
typedef unsigned short  UINT16;

#include <pshpack8.h>   // set structure packing to 8

#include "SDKInclude/GdiplusEnums.h"
#include "SDKInclude/GdiplusTypes.h"
#include "SDKInclude/GdiplusPixelFormats.h"
#include "SDKInclude/GdiplusColor.h"
#include "SDKInclude/GdiplusMetaHeader.h"
#include "SDKInclude/GdiplusImaging.h"
#include "SDKInclude/GdiplusColorMatrix.h"
#if (GDIPVER >= 0x0110)
    #include "SDKInclude/GdiplusEffects.h"
#endif
#include "SDKInclude/GdiplusGpStubs.h"
#include "SDKInclude/GdiplusFlat.h"
#include "SDKInclude/GdiplusInit.h"

#include <poppack.h>    // pop structure packing back to previous state

#endif //GDIPLUSPLATFORM_H