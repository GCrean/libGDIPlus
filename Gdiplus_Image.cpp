#include "stdafx.h"
#include "GdiplusShunt.h"

//----------------------------------------------------------------------------
// Image APIs
//----------------------------------------------------------------------------


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipLoadImageFromStreamPtr)(IStream* stream, GpImage **image));
DEFINE_MEMBER(GdipLoadImageFromStream);

GpStatus WINGDIPAPI
GdipLoadImageFromStream(IStream* stream, GpImage **image)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipLoadImageFromStream == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipLoadImageFromStream);
        }
        if ( g_GdipLoadImageFromStream != NULL )
        {
            status = (*g_GdipLoadImageFromStream)(stream, image);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipLoadImageFromFilePtr)(GDIPCONST WCHAR* filename, GpImage **image));
DEFINE_MEMBER(GdipLoadImageFromFile);

GpStatus WINGDIPAPI
GdipLoadImageFromFile(GDIPCONST WCHAR* filename, GpImage **image)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipLoadImageFromFile == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipLoadImageFromFile);
        }
        if ( g_GdipLoadImageFromFile != NULL )
        {
            status = (*g_GdipLoadImageFromFile)(filename, image);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipLoadImageFromStreamICMPtr)(IStream* stream, GpImage **image));
DEFINE_MEMBER(GdipLoadImageFromStreamICM);

GpStatus WINGDIPAPI
GdipLoadImageFromStreamICM(IStream* stream, GpImage **image)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipLoadImageFromStreamICM == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipLoadImageFromStreamICM);
        }
        if ( g_GdipLoadImageFromStreamICM != NULL )
        {
            status = (*g_GdipLoadImageFromStreamICM)(stream, image);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipLoadImageFromFileICMPtr)(GDIPCONST WCHAR* filename, GpImage **image));
DEFINE_MEMBER(GdipLoadImageFromFileICM);

GpStatus WINGDIPAPI
GdipLoadImageFromFileICM(GDIPCONST WCHAR* filename, GpImage **image)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipLoadImageFromFileICM == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipLoadImageFromFileICM);
        }
        if ( g_GdipLoadImageFromFileICM != NULL )
        {
            status = (*g_GdipLoadImageFromFileICM)(filename, image);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipCloneImagePtr)(GpImage *image, GpImage **cloneImage));
DEFINE_MEMBER(GdipCloneImage);

GpStatus WINGDIPAPI
GdipCloneImage(GpImage *image, GpImage **cloneImage)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipCloneImage == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipCloneImage);
        }
        if ( g_GdipCloneImage != NULL )
        {
            status = (*g_GdipCloneImage)(image, cloneImage);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipDisposeImagePtr)(GpImage *image));
DEFINE_MEMBER(GdipDisposeImage);

GpStatus WINGDIPAPI
GdipDisposeImage(GpImage *image)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipDisposeImage == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipDisposeImage);
        }
        if ( g_GdipDisposeImage != NULL )
        {
            status = (*g_GdipDisposeImage)(image);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSaveImageToFilePtr)(GpImage *image, GDIPCONST WCHAR* filename,
                                   GDIPCONST CLSID* clsidEncoder, GDIPCONST EncoderParameters* encoderParams));
DEFINE_MEMBER(GdipSaveImageToFile);

GpStatus WINGDIPAPI
GdipSaveImageToFile(GpImage *image, GDIPCONST WCHAR* filename,
                    GDIPCONST CLSID* clsidEncoder, GDIPCONST EncoderParameters* encoderParams)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipSaveImageToFile == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipSaveImageToFile);
        }
        if ( g_GdipSaveImageToFile != NULL )
        {
            status = (*g_GdipSaveImageToFile)(image, filename, clsidEncoder, encoderParams);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSaveImageToStreamPtr)(GpImage *image, IStream* stream,
                         GDIPCONST CLSID* clsidEncoder, 
                         GDIPCONST EncoderParameters* encoderParams));
DEFINE_MEMBER(GdipSaveImageToStream);

GpStatus WINGDIPAPI
GdipSaveImageToStream(GpImage *image, IStream* stream,
                      GDIPCONST CLSID* clsidEncoder, 
                      GDIPCONST EncoderParameters* encoderParams)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipSaveImageToStream == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipSaveImageToStream);
        }
        if ( g_GdipSaveImageToStream != NULL )
        {
            status = (*g_GdipSaveImageToStream)(image, stream, clsidEncoder, encoderParams);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSaveAddPtr)(GpImage *image, GDIPCONST EncoderParameters* encoderParams));
DEFINE_MEMBER(GdipSaveAdd);

GpStatus WINGDIPAPI
GdipSaveAdd(GpImage *image, GDIPCONST EncoderParameters* encoderParams)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipSaveAdd == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipSaveAdd);
        }
        if ( g_GdipSaveAdd != NULL )
        {
            status = (*g_GdipSaveAdd)(image, encoderParams);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSaveAddImagePtr)(GpImage *image, GpImage* newImage,
                                GDIPCONST EncoderParameters* encoderParams));
DEFINE_MEMBER(GdipSaveAddImage);

GpStatus WINGDIPAPI
GdipSaveAddImage(GpImage *image, GpImage* newImage,
                 GDIPCONST EncoderParameters* encoderParams)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipSaveAddImage == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipSaveAddImage);
        }
        if ( g_GdipSaveAddImage != NULL )
        {
            status = (*g_GdipSaveAddImage)(image, newImage, encoderParams);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetImageGraphicsContextPtr)(GpImage *image, GpGraphics **graphics));
DEFINE_MEMBER(GdipGetImageGraphicsContext);

GpStatus WINGDIPAPI
GdipGetImageGraphicsContext(GpImage *image, GpGraphics **graphics)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipGetImageGraphicsContext == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetImageGraphicsContext);
        }
        if ( g_GdipGetImageGraphicsContext != NULL )
        {
            status = (*g_GdipGetImageGraphicsContext)(image, graphics);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetImageBoundsPtr)(GpImage *image, GpRectF *srcRect, GpUnit *srcUnit));
DEFINE_MEMBER(GdipGetImageBounds);

GpStatus WINGDIPAPI
GdipGetImageBounds(GpImage *image, GpRectF *srcRect, GpUnit *srcUnit)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipGetImageBounds == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetImageBounds);
        }
        if ( g_GdipGetImageBounds != NULL )
        {
            status = (*g_GdipGetImageBounds)(image, srcRect, srcUnit);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetImageDimensionPtr)(GpImage *image, REAL *width, REAL *height));
DEFINE_MEMBER(GdipGetImageDimension);

GpStatus WINGDIPAPI
GdipGetImageDimension(GpImage *image, REAL *width, REAL *height)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipGetImageDimension == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetImageDimension);
        }
        if ( g_GdipGetImageDimension != NULL )
        {
            status = (*g_GdipGetImageDimension)(image, width, height);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetImageTypePtr)(GpImage *image, ImageType *type));
DEFINE_MEMBER(GdipGetImageType);

GpStatus WINGDIPAPI
GdipGetImageType(GpImage *image, ImageType *type)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipGetImageType == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetImageType);
        }
        if ( g_GdipGetImageType != NULL )
        {
            status = (*g_GdipGetImageType)(image, type);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetImageWidthPtr)(GpImage *image, UINT *width));
DEFINE_MEMBER(GdipGetImageWidth);

GpStatus WINGDIPAPI
GdipGetImageWidth(GpImage *image, UINT *width)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipGetImageWidth == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetImageWidth);
        }
        if ( g_GdipGetImageWidth != NULL )
        {
            status = (*g_GdipGetImageWidth)(image, width);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetImageHeightPtr)(GpImage *image, UINT *height));
DEFINE_MEMBER(GdipGetImageHeight);

GpStatus WINGDIPAPI
GdipGetImageHeight(GpImage *image, UINT *height)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipGetImageHeight == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetImageHeight);
        }
        if ( g_GdipGetImageHeight != NULL )
        {
            status = (*g_GdipGetImageHeight)(image, height);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetImageHorizontalResolutionPtr)(GpImage *image, REAL *resolution));
DEFINE_MEMBER(GdipGetImageHorizontalResolution);

GpStatus WINGDIPAPI
GdipGetImageHorizontalResolution(GpImage *image, REAL *resolution)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipGetImageHorizontalResolution == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetImageHorizontalResolution);
        }
        if ( g_GdipGetImageHorizontalResolution != NULL )
        {
            status = (*g_GdipGetImageHorizontalResolution)(image, resolution);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetImageVerticalResolutionPtr)(GpImage *image, REAL *resolution));
DEFINE_MEMBER(GdipGetImageVerticalResolution);

GpStatus WINGDIPAPI
GdipGetImageVerticalResolution(GpImage *image, REAL *resolution)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipGetImageVerticalResolution == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetImageVerticalResolution);
        }
        if ( g_GdipGetImageVerticalResolution != NULL )
        {
            status = (*g_GdipGetImageVerticalResolution)(image, resolution);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetImageFlagsPtr)(GpImage *image, UINT *flags));
DEFINE_MEMBER(GdipGetImageFlags);

GpStatus WINGDIPAPI
GdipGetImageFlags(GpImage *image, UINT *flags)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipGetImageFlags == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetImageFlags);
        }
        if ( g_GdipGetImageFlags != NULL )
        {
            status = (*g_GdipGetImageFlags)(image, flags);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetImageRawFormatPtr)(GpImage *image, GUID *format));
DEFINE_MEMBER(GdipGetImageRawFormat);

GpStatus WINGDIPAPI
GdipGetImageRawFormat(GpImage *image, GUID *format)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipGetImageRawFormat == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetImageRawFormat);
        }
        if ( g_GdipGetImageRawFormat != NULL )
        {
            status = (*g_GdipGetImageRawFormat)(image, format);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetImagePixelFormatPtr)(GpImage *image, PixelFormat *format));
DEFINE_MEMBER(GdipGetImagePixelFormat);

GpStatus WINGDIPAPI
GdipGetImagePixelFormat(GpImage *image, PixelFormat *format)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipGetImagePixelFormat == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetImagePixelFormat);
        }
        if ( g_GdipGetImagePixelFormat != NULL )
        {
            status = (*g_GdipGetImagePixelFormat)(image, format);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetImageThumbnailPtr)(GpImage *image, UINT thumbWidth, UINT thumbHeight,
                                     GpImage **thumbImage, GetThumbnailImageAbort callback, VOID * callbackData));
DEFINE_MEMBER(GdipGetImageThumbnail);

GpStatus WINGDIPAPI
GdipGetImageThumbnail(GpImage *image, UINT thumbWidth, UINT thumbHeight,
                      GpImage **thumbImage, GetThumbnailImageAbort callback, VOID * callbackData)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipGetImageThumbnail == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetImageThumbnail);
        }
        if ( g_GdipGetImageThumbnail != NULL )
        {
            status = (*g_GdipGetImageThumbnail)(image, thumbWidth, thumbHeight, thumbImage, callback, callbackData);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetEncoderParameterListSizePtr)(GpImage *image, GDIPCONST CLSID* clsidEncoder, UINT* size));
DEFINE_MEMBER(GdipGetEncoderParameterListSize);

GpStatus WINGDIPAPI
GdipGetEncoderParameterListSize(GpImage *image, GDIPCONST CLSID* clsidEncoder, UINT* size)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipGetEncoderParameterListSize == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetEncoderParameterListSize);
        }
        if ( g_GdipGetEncoderParameterListSize != NULL )
        {
            status = (*g_GdipGetEncoderParameterListSize)(image, clsidEncoder, size);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetEncoderParameterListPtr)(GpImage *image, GDIPCONST CLSID* clsidEncoder,
                                           UINT size, EncoderParameters* buffer));
DEFINE_MEMBER(GdipGetEncoderParameterList);

GpStatus WINGDIPAPI
GdipGetEncoderParameterList(GpImage *image, GDIPCONST CLSID* clsidEncoder,
                            UINT size, EncoderParameters* buffer)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipGetEncoderParameterList == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetEncoderParameterList);
        }
        if ( g_GdipGetEncoderParameterList != NULL )
        {
            status = (*g_GdipGetEncoderParameterList)(image, clsidEncoder, size, buffer);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipImageGetFrameDimensionsCountPtr)(GpImage* image, UINT* count));
DEFINE_MEMBER(GdipImageGetFrameDimensionsCount);

GpStatus WINGDIPAPI
GdipImageGetFrameDimensionsCount(GpImage* image, UINT* count)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipImageGetFrameDimensionsCount == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipImageGetFrameDimensionsCount);
        }
        if ( g_GdipImageGetFrameDimensionsCount != NULL )
        {
            status = (*g_GdipImageGetFrameDimensionsCount)(image, count);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipImageGetFrameDimensionsListPtr)(GpImage* image, GUID* dimensionIDs, UINT count));
DEFINE_MEMBER(GdipImageGetFrameDimensionsList);

GpStatus WINGDIPAPI
GdipImageGetFrameDimensionsList(GpImage* image, GUID* dimensionIDs, UINT count)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipImageGetFrameDimensionsList == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipImageGetFrameDimensionsList);
        }
        if ( g_GdipImageGetFrameDimensionsList != NULL )
        {
            status = (*g_GdipImageGetFrameDimensionsList)(image, dimensionIDs, count);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipImageGetFrameCountPtr)(GpImage *image, GDIPCONST GUID* dimensionID, UINT* count));
DEFINE_MEMBER(GdipImageGetFrameCount);

GpStatus WINGDIPAPI
GdipImageGetFrameCount(GpImage *image, GDIPCONST GUID* dimensionID, UINT* count)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipImageGetFrameCount == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipImageGetFrameCount);
        }
        if ( g_GdipImageGetFrameCount != NULL )
        {
            status = (*g_GdipImageGetFrameCount)(image, dimensionID, count);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipImageSelectActiveFramePtr)(GpImage *image, GDIPCONST GUID* dimensionID, UINT frameIndex));
DEFINE_MEMBER(GdipImageSelectActiveFrame);

GpStatus WINGDIPAPI
GdipImageSelectActiveFrame(GpImage *image, GDIPCONST GUID* dimensionID, UINT frameIndex)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipImageSelectActiveFrame == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipImageSelectActiveFrame);
        }
        if ( g_GdipImageSelectActiveFrame != NULL )
        {
            status = (*g_GdipImageSelectActiveFrame)(image, dimensionID, frameIndex);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipImageRotateFlipPtr)(GpImage *image, RotateFlipType rfType));
DEFINE_MEMBER(GdipImageRotateFlip);

GpStatus WINGDIPAPI
GdipImageRotateFlip(GpImage *image, RotateFlipType rfType)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipImageRotateFlip == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipImageRotateFlip);
        }
        if ( g_GdipImageRotateFlip != NULL )
        {
            status = (*g_GdipImageRotateFlip)(image, rfType);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetImagePalettePtr)(GpImage *image, ColorPalette *palette, INT size));
DEFINE_MEMBER(GdipGetImagePalette);

GpStatus WINGDIPAPI
GdipGetImagePalette(GpImage *image, ColorPalette *palette, INT size)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipGetImagePalette == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetImagePalette);
        }
        if ( g_GdipGetImagePalette != NULL )
        {
            status = (*g_GdipGetImagePalette)(image, palette, size);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetImagePalettePtr)(GpImage *image, GDIPCONST ColorPalette *palette));
DEFINE_MEMBER(GdipSetImagePalette);

GpStatus WINGDIPAPI
GdipSetImagePalette(GpImage *image, GDIPCONST ColorPalette *palette)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipSetImagePalette == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipSetImagePalette);
        }
        if ( g_GdipSetImagePalette != NULL )
        {
            status = (*g_GdipSetImagePalette)(image, palette);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetImagePaletteSizePtr)(GpImage *image, INT *size));
DEFINE_MEMBER(GdipGetImagePaletteSize);

GpStatus WINGDIPAPI
GdipGetImagePaletteSize(GpImage *image, INT *size)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipGetImagePaletteSize == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetImagePaletteSize);
        }
        if ( g_GdipGetImagePaletteSize != NULL )
        {
            status = (*g_GdipGetImagePaletteSize)(image, size);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetPropertyCountPtr)(GpImage *image, UINT* numOfProperty));
DEFINE_MEMBER(GdipGetPropertyCount);

GpStatus WINGDIPAPI
GdipGetPropertyCount(GpImage *image, UINT* numOfProperty)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipGetPropertyCount == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetPropertyCount);
        }
        if ( g_GdipGetPropertyCount != NULL )
        {
            status = (*g_GdipGetPropertyCount)(image, numOfProperty);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetPropertyIdListPtr)(GpImage *image, UINT numOfProperty, PROPID* list));
DEFINE_MEMBER(GdipGetPropertyIdList);

GpStatus WINGDIPAPI
GdipGetPropertyIdList(GpImage *image, UINT numOfProperty, PROPID* list)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipGetPropertyIdList == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetPropertyIdList);
        }
        if ( g_GdipGetPropertyIdList != NULL )
        {
            status = (*g_GdipGetPropertyIdList)(image, numOfProperty, list);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetPropertyItemSizePtr)(GpImage *image, PROPID propId, UINT* size));
DEFINE_MEMBER(GdipGetPropertyItemSize);

GpStatus WINGDIPAPI
GdipGetPropertyItemSize(GpImage *image, PROPID propId, UINT* size)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipGetPropertyItemSize == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetPropertyItemSize);
        }
        if ( g_GdipGetPropertyItemSize != NULL )
        {
            status = (*g_GdipGetPropertyItemSize)(image, propId, size);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetPropertyItemPtr)(GpImage *image, PROPID propId,UINT propSize,
                                   PropertyItem* buffer));
DEFINE_MEMBER(GdipGetPropertyItem);

GpStatus WINGDIPAPI
GdipGetPropertyItem(GpImage *image, PROPID propId,UINT propSize,
                    PropertyItem* buffer)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipGetPropertyItem == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetPropertyItem);
        }
        if ( g_GdipGetPropertyItem != NULL )
        {
            status = (*g_GdipGetPropertyItem)(image, propId, propSize, buffer);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetPropertySizePtr)(GpImage *image, UINT* totalBufferSize, 
                                   UINT* numProperties));
DEFINE_MEMBER(GdipGetPropertySize);

GpStatus WINGDIPAPI
GdipGetPropertySize(GpImage *image, UINT* totalBufferSize, 
                    UINT* numProperties)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipGetPropertySize == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetPropertySize);
        }
        if ( g_GdipGetPropertySize != NULL )
        {
            status = (*g_GdipGetPropertySize)(image, totalBufferSize, numProperties);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetAllPropertyItemsPtr)(GpImage *image, UINT totalBufferSize,
                                       UINT numProperties, PropertyItem* allItems));
DEFINE_MEMBER(GdipGetAllPropertyItems);

GpStatus WINGDIPAPI
GdipGetAllPropertyItems(GpImage *image, UINT totalBufferSize,
                        UINT numProperties, PropertyItem* allItems)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipGetAllPropertyItems == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetAllPropertyItems);
        }
        if ( g_GdipGetAllPropertyItems != NULL )
        {
            status = (*g_GdipGetAllPropertyItems)(image, totalBufferSize, numProperties, allItems);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipRemovePropertyItemPtr)(GpImage *image, PROPID propId));
DEFINE_MEMBER(GdipRemovePropertyItem);

GpStatus WINGDIPAPI
GdipRemovePropertyItem(GpImage *image, PROPID propId)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipRemovePropertyItem == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipRemovePropertyItem);
        }
        if ( g_GdipRemovePropertyItem != NULL )
        {
            status = (*g_GdipRemovePropertyItem)(image, propId);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetPropertyItemPtr)(GpImage *image, GDIPCONST PropertyItem* item));
DEFINE_MEMBER(GdipSetPropertyItem);

GpStatus WINGDIPAPI
GdipSetPropertyItem(GpImage *image, GDIPCONST PropertyItem* item)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipSetPropertyItem == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipSetPropertyItem);
        }
        if ( g_GdipSetPropertyItem != NULL )
        {
            status = (*g_GdipSetPropertyItem)(image, item);
        }
    }
    return status;
}


#if GDIPVER >= 0x0110
DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipFindFirstImageItemPtr)(GpImage *image, ImageItemData* item));
DEFINE_MEMBER(GdipFindFirstImageItem);

GpStatus WINGDIPAPI
GdipFindFirstImageItem(GpImage *image, ImageItemData* item)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipFindFirstImageItem == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule,GdipFindFirstImageItem);
        }
        if ( g_GdipFindFirstImageItem != NULL )
        {
            status = (*g_GdipFindFirstImageItem)(image, item);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipFindNextImageItemPtr)(GpImage *image, ImageItemData* item));
DEFINE_MEMBER(GdipFindNextImageItem);

GpStatus WINGDIPAPI
GdipFindNextImageItem(GpImage *image, ImageItemData* item)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipFindNextImageItem == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule,GdipFindNextImageItem);
        }
        if ( g_GdipFindNextImageItem != NULL )
        {
            status = (*g_GdipFindNextImageItem)(image, item);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetImageItemDataPtr)(GpImage *image, ImageItemData* item));
DEFINE_MEMBER(GdipGetImageItemData);

GpStatus WINGDIPAPI
GdipGetImageItemData(GpImage *image, ImageItemData* item)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGetImageItemData == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule,GdipGetImageItemData);
        }
        if ( g_GdipGetImageItemData != NULL )
        {
            status = (*g_GdipGetImageItemData)(image, item);
        }
    }
    return status;
}
#endif //#if GDIPVER >= 0x0110


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipImageForceValidationPtr)(GpImage *image));
DEFINE_MEMBER(GdipImageForceValidation);

GpStatus WINGDIPAPI
GdipImageForceValidation(GpImage *image)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipImageForceValidation == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipImageForceValidation);
        }
        if ( g_GdipImageForceValidation != NULL )
        {
            status = (*g_GdipImageForceValidation)(image);
        }
    }
    return status;
}

//----------------------------------------------------------------------------
// Bitmap APIs
//----------------------------------------------------------------------------


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipCreateBitmapFromStreamPtr)(IStream* stream, GpBitmap **bitmap));
DEFINE_MEMBER(GdipCreateBitmapFromStream);

GpStatus WINGDIPAPI
GdipCreateBitmapFromStream(IStream* stream, GpBitmap **bitmap)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipCreateBitmapFromStream == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipCreateBitmapFromStream);
        }
        if ( g_GdipCreateBitmapFromStream != NULL )
        {
            status = (*g_GdipCreateBitmapFromStream)(stream, bitmap);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipCreateBitmapFromFilePtr)(GDIPCONST WCHAR* filename, GpBitmap **bitmap));
DEFINE_MEMBER(GdipCreateBitmapFromFile);

GpStatus WINGDIPAPI
GdipCreateBitmapFromFile(GDIPCONST WCHAR* filename, GpBitmap **bitmap)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipCreateBitmapFromFile == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipCreateBitmapFromFile);
        }
        if ( g_GdipCreateBitmapFromFile != NULL )
        {
            status = (*g_GdipCreateBitmapFromFile)(filename, bitmap);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipCreateBitmapFromStreamICMPtr)(IStream* stream, GpBitmap **bitmap));
DEFINE_MEMBER(GdipCreateBitmapFromStreamICM);

GpStatus WINGDIPAPI
GdipCreateBitmapFromStreamICM(IStream* stream, GpBitmap **bitmap)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipCreateBitmapFromStreamICM == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipCreateBitmapFromStreamICM);
        }
        if ( g_GdipCreateBitmapFromStreamICM != NULL )
        {
            status = (*g_GdipCreateBitmapFromStreamICM)(stream, bitmap);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipCreateBitmapFromFileICMPtr)(GDIPCONST WCHAR* filename, GpBitmap **bitmap));
DEFINE_MEMBER(GdipCreateBitmapFromFileICM);

GpStatus WINGDIPAPI
GdipCreateBitmapFromFileICM(GDIPCONST WCHAR* filename, GpBitmap **bitmap)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipCreateBitmapFromFileICM == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipCreateBitmapFromFileICM);
        }
        if ( g_GdipCreateBitmapFromFileICM != NULL )
        {
            status = (*g_GdipCreateBitmapFromFileICM)(filename, bitmap);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipCreateBitmapFromScan0Ptr)(INT width, INT height,
                         INT stride, PixelFormat format,
                         BYTE* scan0, GpBitmap** bitmap));
DEFINE_MEMBER(GdipCreateBitmapFromScan0);

GpStatus WINGDIPAPI
GdipCreateBitmapFromScan0(INT width, INT height,
                          INT stride, PixelFormat format,
                          BYTE* scan0, GpBitmap** bitmap)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipCreateBitmapFromScan0 == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipCreateBitmapFromScan0);
        }
        if ( g_GdipCreateBitmapFromScan0 != NULL )
        {
            status = (*g_GdipCreateBitmapFromScan0)(width, height, stride, format, scan0, bitmap);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipCreateBitmapFromGraphicsPtr)(INT width, INT height, GpGraphics* target,
                                            GpBitmap** bitmap));
DEFINE_MEMBER(GdipCreateBitmapFromGraphics);

GpStatus WINGDIPAPI
GdipCreateBitmapFromGraphics(INT width, INT height, GpGraphics* target,
                             GpBitmap** bitmap)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipCreateBitmapFromGraphics == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipCreateBitmapFromGraphics);
        }
        if ( g_GdipCreateBitmapFromGraphics != NULL )
        {
            status = (*g_GdipCreateBitmapFromGraphics)(width, height, target, bitmap);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipCreateBitmapFromDirectDrawSurfacePtr)(IDirectDrawSurface7* surface, GpBitmap** bitmap));
DEFINE_MEMBER(GdipCreateBitmapFromDirectDrawSurface);

GpStatus WINGDIPAPI
GdipCreateBitmapFromDirectDrawSurface(IDirectDrawSurface7* surface, GpBitmap** bitmap)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipCreateBitmapFromDirectDrawSurface == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipCreateBitmapFromDirectDrawSurface);
        }
        if ( g_GdipCreateBitmapFromDirectDrawSurface != NULL )
        {
            status = (*g_GdipCreateBitmapFromDirectDrawSurface)(surface, bitmap);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipCreateBitmapFromGdiDibPtr)(GDIPCONST BITMAPINFO* gdiBitmapInfo,
                                          VOID* gdiBitmapData, GpBitmap** bitmap));
DEFINE_MEMBER(GdipCreateBitmapFromGdiDib);

GpStatus WINGDIPAPI
GdipCreateBitmapFromGdiDib(GDIPCONST BITMAPINFO* gdiBitmapInfo,
                           VOID* gdiBitmapData, GpBitmap** bitmap)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipCreateBitmapFromGdiDib == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipCreateBitmapFromGdiDib);
        }
        if ( g_GdipCreateBitmapFromGdiDib != NULL )
        {
            status = (*g_GdipCreateBitmapFromGdiDib)(gdiBitmapInfo, gdiBitmapData, bitmap);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipCreateBitmapFromHBITMAPPtr)(HBITMAP hbm, HPALETTE hpal, GpBitmap** bitmap));
DEFINE_MEMBER(GdipCreateBitmapFromHBITMAP);

GpStatus WINGDIPAPI
GdipCreateBitmapFromHBITMAP(HBITMAP hbm, HPALETTE hpal, GpBitmap** bitmap)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipCreateBitmapFromHBITMAP == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipCreateBitmapFromHBITMAP);
        }
        if ( g_GdipCreateBitmapFromHBITMAP != NULL )
        {
            status = (*g_GdipCreateBitmapFromHBITMAP)(hbm, hpal, bitmap);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipCreateHBITMAPFromBitmapPtr)(GpBitmap* bitmap, HBITMAP* hbmReturn, ARGB background));
DEFINE_MEMBER(GdipCreateHBITMAPFromBitmap);

GpStatus WINGDIPAPI
GdipCreateHBITMAPFromBitmap(GpBitmap* bitmap, HBITMAP* hbmReturn, ARGB background)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipCreateHBITMAPFromBitmap == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipCreateHBITMAPFromBitmap);
        }
        if ( g_GdipCreateHBITMAPFromBitmap != NULL )
        {
            status = (*g_GdipCreateHBITMAPFromBitmap)(bitmap, hbmReturn, background);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipCreateBitmapFromHICONPtr)(HICON hicon, GpBitmap** bitmap));
DEFINE_MEMBER(GdipCreateBitmapFromHICON);

GpStatus WINGDIPAPI
GdipCreateBitmapFromHICON(HICON hicon, GpBitmap** bitmap)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipCreateBitmapFromHICON == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipCreateBitmapFromHICON);
        }
        if ( g_GdipCreateBitmapFromHICON != NULL )
        {
            status = (*g_GdipCreateBitmapFromHICON)(hicon, bitmap);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipCreateHICONFromBitmapPtr)(GpBitmap* bitmap, HICON* hbmReturn));
DEFINE_MEMBER(GdipCreateHICONFromBitmap);

GpStatus WINGDIPAPI
GdipCreateHICONFromBitmap(GpBitmap* bitmap, HICON* hbmReturn)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipCreateHICONFromBitmap == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipCreateHICONFromBitmap);
        }
        if ( g_GdipCreateHICONFromBitmap != NULL )
        {
            status = (*g_GdipCreateHICONFromBitmap)(bitmap, hbmReturn);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipCreateBitmapFromResourcePtr)(HINSTANCE hInstance, GDIPCONST WCHAR* lpBitmapName,
                         GpBitmap** bitmap));
DEFINE_MEMBER(GdipCreateBitmapFromResource);

GpStatus WINGDIPAPI
GdipCreateBitmapFromResource(HINSTANCE hInstance, GDIPCONST WCHAR* lpBitmapName,
                             GpBitmap** bitmap)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipCreateBitmapFromResource == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipCreateBitmapFromResource);
        }
        if ( g_GdipCreateBitmapFromResource != NULL )
        {
            status = (*g_GdipCreateBitmapFromResource)(hInstance, lpBitmapName, bitmap);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipCloneBitmapAreaPtr)(REAL x, REAL y, REAL width, REAL height,
                                           PixelFormat format, GpBitmap *srcBitmap, GpBitmap **dstBitmap));
DEFINE_MEMBER(GdipCloneBitmapArea);

GpStatus WINGDIPAPI
GdipCloneBitmapArea(REAL x, REAL y, REAL width, REAL height,
                            PixelFormat format, GpBitmap *srcBitmap, GpBitmap **dstBitmap)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipCloneBitmapArea == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipCloneBitmapArea);
        }
        if ( g_GdipCloneBitmapArea != NULL )
        {
            status = (*g_GdipCloneBitmapArea)(x, y, width, height, format, srcBitmap, dstBitmap);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipCloneBitmapAreaIPtr)(INT x, INT y,
                         INT width, INT height, PixelFormat format,
                         GpBitmap *srcBitmap, GpBitmap **dstBitmap));
DEFINE_MEMBER(GdipCloneBitmapAreaI);

GpStatus WINGDIPAPI
GdipCloneBitmapAreaI(INT x, INT y,
                     INT width, INT height, PixelFormat format,
                     GpBitmap *srcBitmap, GpBitmap **dstBitmap)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipCloneBitmapAreaI == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipCloneBitmapAreaI);
        }
        if ( g_GdipCloneBitmapAreaI != NULL )
        {
            status = (*g_GdipCloneBitmapAreaI)(x, y, width, height, format, srcBitmap, dstBitmap);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipBitmapLockBitsPtr)(GpBitmap* bitmap, GDIPCONST GpRect* rect,
                                  UINT flags, PixelFormat format, BitmapData* lockedBitmapData));
DEFINE_MEMBER(GdipBitmapLockBits);

GpStatus WINGDIPAPI
GdipBitmapLockBits(GpBitmap* bitmap, GDIPCONST GpRect* rect,
                   UINT flags, PixelFormat format, BitmapData* lockedBitmapData)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipBitmapLockBits == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipBitmapLockBits);
        }
        if ( g_GdipBitmapLockBits != NULL )
        {
            status = (*g_GdipBitmapLockBits)(bitmap, rect, flags, format, lockedBitmapData);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipBitmapUnlockBitsPtr)(GpBitmap* bitmap, BitmapData* lockedBitmapData));
DEFINE_MEMBER(GdipBitmapUnlockBits);

GpStatus WINGDIPAPI
GdipBitmapUnlockBits(GpBitmap* bitmap, BitmapData* lockedBitmapData)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipBitmapUnlockBits == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipBitmapUnlockBits);
        }
        if ( g_GdipBitmapUnlockBits != NULL )
        {
            status = (*g_GdipBitmapUnlockBits)(bitmap, lockedBitmapData);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipBitmapGetPixelPtr)(GpBitmap* bitmap, INT x, INT y, ARGB *color));
DEFINE_MEMBER(GdipBitmapGetPixel);

GpStatus WINGDIPAPI
GdipBitmapGetPixel(GpBitmap* bitmap, INT x, INT y, ARGB *color)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipBitmapGetPixel == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipBitmapGetPixel);
        }
        if ( g_GdipBitmapGetPixel != NULL )
        {
            status = (*g_GdipBitmapGetPixel)(bitmap, x, y, color);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipBitmapSetPixelPtr)(GpBitmap* bitmap, INT x, INT y, ARGB color));
DEFINE_MEMBER(GdipBitmapSetPixel);

GpStatus WINGDIPAPI
GdipBitmapSetPixel(GpBitmap* bitmap, INT x, INT y, ARGB color)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipBitmapSetPixel == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipBitmapSetPixel);
        }
        if ( g_GdipBitmapSetPixel != NULL )
        {
            status = (*g_GdipBitmapSetPixel)(bitmap, x, y, color);
        }
    }
    return status;
}


#if GDIPVER >= 0x0110
DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipImageSetAbortPtr)(
                   GpImage *pImage, GdiplusAbort *pIAbort));
DEFINE_MEMBER(GdipImageSetAbort);

GpStatus WINGDIPAPI GdipImageSetAbort(
    GpImage *pImage, 
    GdiplusAbort *pIAbort
    )
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipImageSetAbort == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule,GdipImageSetAbort);
        }
        if ( g_GdipImageSetAbort != NULL )
        {
            status = (*g_GdipImageSetAbort)(pImage, pIAbort);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGraphicsSetAbortPtr)(
                   GpGraphics *pGraphics, GdiplusAbort *pIAbort));
DEFINE_MEMBER(GdipGraphicsSetAbort);

GpStatus WINGDIPAPI GdipGraphicsSetAbort(
    GpGraphics *pGraphics, 
    GdiplusAbort *pIAbort
    )
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipGraphicsSetAbort == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule,GdipGraphicsSetAbort);
        }
        if ( g_GdipGraphicsSetAbort != NULL )
        {
            status = (*g_GdipGraphicsSetAbort)(pGraphics, pIAbort);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipBitmapConvertFormatPtr)(
                   IN GpBitmap *pInputBitmap, PixelFormat format,
                   DitherType dithertype, PaletteType palettetype,
                   ColorPalette *palette, REAL alphaThresholdPercent));
DEFINE_MEMBER(GdipBitmapConvertFormat);

GpStatus WINGDIPAPI
GdipBitmapConvertFormat(
    IN GpBitmap *pInputBitmap,
    PixelFormat format,
    DitherType dithertype,
    PaletteType palettetype,
    ColorPalette *palette,
    REAL alphaThresholdPercent
    )
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipBitmapConvertFormat == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule,GdipBitmapConvertFormat);
        }
        if ( g_GdipBitmapConvertFormat != NULL )
        {
            status = (*g_GdipBitmapConvertFormat)(pInputBitmap, format, dithertype, palettetype, palette, alphaThresholdPercent);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipInitializePalettePtr)(
                   OUT ColorPalette *palette, PaletteType palettetype,
                           INT optimalColors, BOOL useTransparentColor, GpBitmap *bitmap));
DEFINE_MEMBER(GdipInitializePalette);

GpStatus WINGDIPAPI
GdipInitializePalette(
    OUT ColorPalette *palette,
    PaletteType palettetype,
    INT optimalColors,
    BOOL useTransparentColor,
    GpBitmap *bitmap
    )
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipInitializePalette == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule,GdipInitializePalette);
        }
        if ( g_GdipInitializePalette != NULL )
        {
            status = (*g_GdipInitializePalette)(palette, palettetype, optimalColors, useTransparentColor, bitmap);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipBitmapApplyEffectPtr)(
                   GpBitmap* bitmap, CGpEffect *effect, RECT *roi, BOOL useAuxData,
                   VOID **auxData, INT *auxDataSize));
DEFINE_MEMBER(GdipBitmapApplyEffect);


GpStatus WINGDIPAPI
GdipBitmapApplyEffect(
    GpBitmap* bitmap,
    CGpEffect *effect,
    RECT *roi,
    BOOL useAuxData,
    VOID **auxData,
    INT *auxDataSize
    )
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipBitmapApplyEffect == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule,GdipBitmapApplyEffect);
        }
        if ( g_GdipBitmapApplyEffect != NULL )
        {
            status = (*g_GdipBitmapApplyEffect)(bitmap, effect, roi, useAuxData, auxData, auxDataSize);
        }
    }
    return status;
}



DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipBitmapCreateApplyEffectPtr)(
                   GpBitmap **inputBitmaps,
                       INT numInputs, CGpEffect *effect, RECT *roi,
                       RECT *outputRect, GpBitmap **outputBitmap,
                       BOOL useAuxData, VOID **auxData, INT *auxDataSize));
DEFINE_MEMBER(GdipBitmapCreateApplyEffect);

GpStatus WINGDIPAPI
GdipBitmapCreateApplyEffect(
    GpBitmap **inputBitmaps,
    INT numInputs,
    CGpEffect *effect,
    RECT *roi,
    RECT *outputRect,
    GpBitmap **outputBitmap,
    BOOL useAuxData,
    VOID **auxData,
    INT *auxDataSize
)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipBitmapCreateApplyEffect == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule,GdipBitmapCreateApplyEffect);
        }
        if ( g_GdipBitmapCreateApplyEffect != NULL )
        {
            status = (*g_GdipBitmapCreateApplyEffect)(inputBitmaps, numInputs, effect, roi, outputRect, outputBitmap, useAuxData, auxData, auxDataSize);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipBitmapGetHistogramPtr)(
                   GpBitmap* bitmap, IN HistogramFormat format,
                   IN UINT NumberOfEntries, UINT *channel0,
                   UINT *channel1, UINT *channel2, UINT *channel3));
DEFINE_MEMBER(GdipBitmapGetHistogram);

GpStatus WINGDIPAPI
GdipBitmapGetHistogram(
    GpBitmap* bitmap, 
    IN HistogramFormat format,
    IN UINT NumberOfEntries,
    UINT *channel0,
    UINT *channel1,
    UINT *channel2,
    UINT *channel3
)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipBitmapGetHistogram == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule,GdipBitmapGetHistogram);
        }
        if ( g_GdipBitmapGetHistogram != NULL )
        {
            status = (*g_GdipBitmapGetHistogram)(bitmap, format, NumberOfEntries, channel0, channel1, channel2, channel3);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipBitmapGetHistogramSizePtr)(
                   IN HistogramFormat format, UINT *NumberOfEntries));
DEFINE_MEMBER(GdipBitmapGetHistogramSize);

GpStatus WINGDIPAPI
GdipBitmapGetHistogramSize(
    HistogramFormat format,
    UINT *NumberOfEntries
)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != NULL )
    {
        if ( g_GdipBitmapGetHistogramSize == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule,GdipBitmapGetHistogramSize);
        }
        if ( g_GdipBitmapGetHistogramSize != NULL )
        {
            status = (*g_GdipBitmapGetHistogramSize)(format, NumberOfEntries);
        }
    }
    return status;
}
#endif //#if GDIPVER >= 0x0110


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipBitmapSetResolutionPtr)(GpBitmap* bitmap, REAL xdpi, REAL ydpi));
DEFINE_MEMBER(GdipBitmapSetResolution);

GpStatus WINGDIPAPI
GdipBitmapSetResolution(GpBitmap* bitmap, REAL xdpi, REAL ydpi)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipBitmapSetResolution == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipBitmapSetResolution);
        }
        if ( g_GdipBitmapSetResolution != NULL )
        {
            status = (*g_GdipBitmapSetResolution)(bitmap, xdpi, ydpi);
        }
    }
    return status;
}

//----------------------------------------------------------------------------
// ImageAttributes APIs
//----------------------------------------------------------------------------


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipCreateImageAttributesPtr)(GpImageAttributes **imageattr));
DEFINE_MEMBER(GdipCreateImageAttributes);

GpStatus WINGDIPAPI
GdipCreateImageAttributes(GpImageAttributes **imageattr)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipCreateImageAttributes == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipCreateImageAttributes);
        }
        if ( g_GdipCreateImageAttributes != NULL )
        {
            status = (*g_GdipCreateImageAttributes)(imageattr);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipCloneImageAttributesPtr)(GDIPCONST GpImageAttributes *imageattr,
                                        GpImageAttributes **cloneImageattr));
DEFINE_MEMBER(GdipCloneImageAttributes);

GpStatus WINGDIPAPI
GdipCloneImageAttributes(GDIPCONST GpImageAttributes *imageattr,
                         GpImageAttributes **cloneImageattr)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipCloneImageAttributes == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipCloneImageAttributes);
        }
        if ( g_GdipCloneImageAttributes != NULL )
        {
            status = (*g_GdipCloneImageAttributes)(imageattr, cloneImageattr);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipDisposeImageAttributesPtr)(GpImageAttributes *imageattr));
DEFINE_MEMBER(GdipDisposeImageAttributes);

GpStatus WINGDIPAPI
GdipDisposeImageAttributes(GpImageAttributes *imageattr)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipDisposeImageAttributes == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipDisposeImageAttributes);
        }
        if ( g_GdipDisposeImageAttributes != NULL )
        {
            status = (*g_GdipDisposeImageAttributes)(imageattr);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetImageAttributesToIdentityPtr)(GpImageAttributes *imageattr, ColorAdjustType type));
DEFINE_MEMBER(GdipSetImageAttributesToIdentity);

GpStatus WINGDIPAPI
GdipSetImageAttributesToIdentity(GpImageAttributes *imageattr, ColorAdjustType type)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipSetImageAttributesToIdentity == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipSetImageAttributesToIdentity);
        }
        if ( g_GdipSetImageAttributesToIdentity != NULL )
        {
            status = (*g_GdipSetImageAttributesToIdentity)(imageattr, type);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipResetImageAttributesPtr)(GpImageAttributes *imageattr, ColorAdjustType type));
DEFINE_MEMBER(GdipResetImageAttributes);

GpStatus WINGDIPAPI
GdipResetImageAttributes(GpImageAttributes *imageattr, ColorAdjustType type)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipResetImageAttributes == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipResetImageAttributes);
        }
        if ( g_GdipResetImageAttributes != NULL )
        {
            status = (*g_GdipResetImageAttributes)(imageattr, type);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetImageAttributesColorMatrixPtr)(GpImageAttributes *imageattr,
                ColorAdjustType type, BOOL enableFlag,
                 GDIPCONST ColorMatrix* colorMatrix, GDIPCONST ColorMatrix* grayMatrix,
                  ColorMatrixFlags flags));
DEFINE_MEMBER(GdipSetImageAttributesColorMatrix);

GpStatus WINGDIPAPI
GdipSetImageAttributesColorMatrix(GpImageAttributes *imageattr,
 ColorAdjustType type, BOOL enableFlag,
 GDIPCONST ColorMatrix* colorMatrix, GDIPCONST ColorMatrix* grayMatrix,
 ColorMatrixFlags flags)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipSetImageAttributesColorMatrix == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipSetImageAttributesColorMatrix);
        }
        if ( g_GdipSetImageAttributesColorMatrix != NULL )
        {
            status = (*g_GdipSetImageAttributesColorMatrix)(imageattr, type, enableFlag, colorMatrix, grayMatrix, flags);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetImageAttributesThresholdPtr)(GpImageAttributes *imageattr,
                ColorAdjustType type, BOOL enableFlag, REAL threshold));
DEFINE_MEMBER(GdipSetImageAttributesThreshold);

GpStatus WINGDIPAPI
GdipSetImageAttributesThreshold(GpImageAttributes *imageattr,
 ColorAdjustType type, BOOL enableFlag, REAL threshold)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipSetImageAttributesThreshold == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipSetImageAttributesThreshold);
        }
        if ( g_GdipSetImageAttributesThreshold != NULL )
        {
            status = (*g_GdipSetImageAttributesThreshold)(imageattr, type, enableFlag, threshold);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetImageAttributesGammaPtr)(GpImageAttributes *imageattr,
                ColorAdjustType type, BOOL enableFlag, REAL gamma));
DEFINE_MEMBER(GdipSetImageAttributesGamma);

GpStatus WINGDIPAPI
GdipSetImageAttributesGamma(GpImageAttributes *imageattr,
 ColorAdjustType type, BOOL enableFlag, REAL gamma)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipSetImageAttributesGamma == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipSetImageAttributesGamma);
        }
        if ( g_GdipSetImageAttributesGamma != NULL )
        {
            status = (*g_GdipSetImageAttributesGamma)(imageattr, type, enableFlag, gamma);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetImageAttributesNoOpPtr)(GpImageAttributes *imageattr,
                ColorAdjustType type, BOOL enableFlag));
DEFINE_MEMBER(GdipSetImageAttributesNoOp);

GpStatus WINGDIPAPI
GdipSetImageAttributesNoOp(GpImageAttributes *imageattr,
 ColorAdjustType type, BOOL enableFlag)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipSetImageAttributesNoOp == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipSetImageAttributesNoOp);
        }
        if ( g_GdipSetImageAttributesNoOp != NULL )
        {
            status = (*g_GdipSetImageAttributesNoOp)(imageattr, type, enableFlag);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetImageAttributesColorKeysPtr)(GpImageAttributes *imageattr,
                ColorAdjustType type, BOOL enableFlag, ARGB colorLow, ARGB colorHigh));
DEFINE_MEMBER(GdipSetImageAttributesColorKeys);

GpStatus WINGDIPAPI
GdipSetImageAttributesColorKeys(GpImageAttributes *imageattr,
 ColorAdjustType type, BOOL enableFlag, ARGB colorLow, ARGB colorHigh)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipSetImageAttributesColorKeys == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipSetImageAttributesColorKeys);
        }
        if ( g_GdipSetImageAttributesColorKeys != NULL )
        {
            status = (*g_GdipSetImageAttributesColorKeys)(imageattr, type, enableFlag, colorLow, colorHigh);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetImageAttributesOutputChannelPtr)(GpImageAttributes *imageattr,
                ColorAdjustType type, BOOL enableFlag, ColorChannelFlags channelFlags));
DEFINE_MEMBER(GdipSetImageAttributesOutputChannel);

GpStatus WINGDIPAPI
GdipSetImageAttributesOutputChannel(GpImageAttributes *imageattr,
 ColorAdjustType type, BOOL enableFlag, ColorChannelFlags channelFlags)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipSetImageAttributesOutputChannel == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipSetImageAttributesOutputChannel);
        }
        if ( g_GdipSetImageAttributesOutputChannel != NULL )
        {
            status = (*g_GdipSetImageAttributesOutputChannel)(imageattr, type, enableFlag, channelFlags);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetImageAttributesOutputChannelColorProfilePtr)(GpImageAttributes *imageattr,
                ColorAdjustType type, BOOL enableFlag,
                 GDIPCONST WCHAR *colorProfileFilename));
DEFINE_MEMBER(GdipSetImageAttributesOutputChannelColorProfile);

GpStatus WINGDIPAPI
GdipSetImageAttributesOutputChannelColorProfile(GpImageAttributes *imageattr,
 ColorAdjustType type, BOOL enableFlag,
 GDIPCONST WCHAR *colorProfileFilename)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipSetImageAttributesOutputChannelColorProfile == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipSetImageAttributesOutputChannelColorProfile);
        }
        if ( g_GdipSetImageAttributesOutputChannelColorProfile != NULL )
        {
            status = (*g_GdipSetImageAttributesOutputChannelColorProfile)(imageattr, type, enableFlag, colorProfileFilename);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetImageAttributesRemapTablePtr)(GpImageAttributes *imageattr,
                ColorAdjustType type, BOOL enableFlag,
                 UINT mapSize, GDIPCONST ColorMap *map));
DEFINE_MEMBER(GdipSetImageAttributesRemapTable);

GpStatus WINGDIPAPI
GdipSetImageAttributesRemapTable(GpImageAttributes *imageattr,
 ColorAdjustType type, BOOL enableFlag,
 UINT mapSize, GDIPCONST ColorMap *map)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipSetImageAttributesRemapTable == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipSetImageAttributesRemapTable);
        }
        if ( g_GdipSetImageAttributesRemapTable != NULL )
        {
            status = (*g_GdipSetImageAttributesRemapTable)(imageattr, type, enableFlag, mapSize, map);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetImageAttributesWrapModePtr)(GpImageAttributes *imageAttr, WrapMode wrap,
                ARGB argb, BOOL clamp));
DEFINE_MEMBER(GdipSetImageAttributesWrapMode);

GpStatus WINGDIPAPI
GdipSetImageAttributesWrapMode(
 GpImageAttributes *imageAttr, WrapMode wrap,
 ARGB argb, BOOL clamp)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipSetImageAttributesWrapMode == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipSetImageAttributesWrapMode);
        }
        if ( g_GdipSetImageAttributesWrapMode != NULL )
        {
            status = (*g_GdipSetImageAttributesWrapMode)(imageAttr, wrap, argb, clamp);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetImageAttributesICMModePtr)(GpImageAttributes *imageAttr, BOOL on));
DEFINE_MEMBER(GdipSetImageAttributesICMMode);

GpStatus WINGDIPAPI
GdipSetImageAttributesICMMode(
    GpImageAttributes *imageAttr, BOOL on)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipSetImageAttributesICMMode == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipSetImageAttributesICMMode);
        }
        if ( g_GdipSetImageAttributesICMMode != NULL )
        {
            status = (*g_GdipSetImageAttributesICMMode)(imageAttr, on);
        }
    }
    return status;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetImageAttributesAdjustedPalettePtr)(GpImageAttributes *imageAttr, ColorPalette * colorPalette,
                   ColorAdjustType colorAdjustType));
DEFINE_MEMBER(GdipGetImageAttributesAdjustedPalette);

GpStatus WINGDIPAPI
GdipGetImageAttributesAdjustedPalette(
    GpImageAttributes *imageAttr, ColorPalette * colorPalette,
    ColorAdjustType colorAdjustType)
{
    GpStatus status = GdiplusNotInitialized;
    if ( g_hGdiplusModule != 0 )
    {
        if ( g_GdipGetImageAttributesAdjustedPalette == NULL )
        {
            INITIALIZE_MEMBER(g_hGdiplusModule, GdipGetImageAttributesAdjustedPalette);
        }
        if ( g_GdipGetImageAttributesAdjustedPalette != NULL )
        {
            status = (*g_GdipGetImageAttributesAdjustedPalette)(imageAttr, colorPalette, colorAdjustType);
        }
    }
    return status;
}


//----------------------------------------------------------------------------
// Platform Shunt
//----------------------------------------------------------------------------

VOID WINAPI
Gdiplus_ImageInit()
{
}

