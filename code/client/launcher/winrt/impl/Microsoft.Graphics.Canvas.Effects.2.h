// WARNING: Please don't edit this file. It was generated by C++/WinRT v1.0.190111.3

#pragma once
#include "winrt/impl/Microsoft.Graphics.Canvas.1.h"
#include "winrt/impl/Windows.Graphics.DirectX.1.h"
#include "winrt/impl/Windows.Graphics.Effects.1.h"
#include "winrt/impl/Windows.UI.1.h"
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Microsoft.Graphics.Canvas.Effects.1.h"

WINRT_EXPORT namespace winrt::Microsoft::Graphics::Canvas::Effects {

struct ColorManagementSimpleProfile
{
    Windows::Foundation::Numerics::float2 RedPrimary;
    Windows::Foundation::Numerics::float2 GreenPrimary;
    Windows::Foundation::Numerics::float2 BluePrimary;
    Windows::Foundation::Numerics::float2 WhitePointXZ;
    Microsoft::Graphics::Canvas::Effects::ColorManagementGamma Gamma;
};

inline bool operator==(ColorManagementSimpleProfile const& left, ColorManagementSimpleProfile const& right) noexcept
{
    return left.RedPrimary == right.RedPrimary && left.GreenPrimary == right.GreenPrimary && left.BluePrimary == right.BluePrimary && left.WhitePointXZ == right.WhitePointXZ && left.Gamma == right.Gamma;
}

inline bool operator!=(ColorManagementSimpleProfile const& left, ColorManagementSimpleProfile const& right) noexcept
{
    return !(left == right);
}

struct Matrix5x4
{
    float M11;
    float M12;
    float M13;
    float M14;
    float M21;
    float M22;
    float M23;
    float M24;
    float M31;
    float M32;
    float M33;
    float M34;
    float M41;
    float M42;
    float M43;
    float M44;
    float M51;
    float M52;
    float M53;
    float M54;
};

inline bool operator==(Matrix5x4 const& left, Matrix5x4 const& right) noexcept
{
    return left.M11 == right.M11 && left.M12 == right.M12 && left.M13 == right.M13 && left.M14 == right.M14 && left.M21 == right.M21 && left.M22 == right.M22 && left.M23 == right.M23 && left.M24 == right.M24 && left.M31 == right.M31 && left.M32 == right.M32 && left.M33 == right.M33 && left.M34 == right.M34 && left.M41 == right.M41 && left.M42 == right.M42 && left.M43 == right.M43 && left.M44 == right.M44 && left.M51 == right.M51 && left.M52 == right.M52 && left.M53 == right.M53 && left.M54 == right.M54;
}

inline bool operator!=(Matrix5x4 const& left, Matrix5x4 const& right) noexcept
{
    return !(left == right);
}

}

namespace winrt::impl {

}

WINRT_EXPORT namespace winrt::Microsoft::Graphics::Canvas::Effects {

struct WINRT_EBO AlphaMaskEffect :
    Microsoft::Graphics::Canvas::Effects::IAlphaMaskEffect
{
    AlphaMaskEffect(std::nullptr_t) noexcept {}
    AlphaMaskEffect();
    static bool IsSupported();
};

struct WINRT_EBO ArithmeticCompositeEffect :
    Microsoft::Graphics::Canvas::Effects::IArithmeticCompositeEffect
{
    ArithmeticCompositeEffect(std::nullptr_t) noexcept {}
    ArithmeticCompositeEffect();
};

struct WINRT_EBO AtlasEffect :
    Microsoft::Graphics::Canvas::Effects::IAtlasEffect
{
    AtlasEffect(std::nullptr_t) noexcept {}
    AtlasEffect();
};

struct WINRT_EBO BlendEffect :
    Microsoft::Graphics::Canvas::Effects::IBlendEffect
{
    BlendEffect(std::nullptr_t) noexcept {}
    BlendEffect();
};

struct WINRT_EBO BorderEffect :
    Microsoft::Graphics::Canvas::Effects::IBorderEffect
{
    BorderEffect(std::nullptr_t) noexcept {}
    BorderEffect();
};

struct WINRT_EBO BrightnessEffect :
    Microsoft::Graphics::Canvas::Effects::IBrightnessEffect
{
    BrightnessEffect(std::nullptr_t) noexcept {}
    BrightnessEffect();
};

struct WINRT_EBO ChromaKeyEffect :
    Microsoft::Graphics::Canvas::Effects::IChromaKeyEffect
{
    ChromaKeyEffect(std::nullptr_t) noexcept {}
    ChromaKeyEffect();
};

struct WINRT_EBO ColorManagementEffect :
    Microsoft::Graphics::Canvas::Effects::IColorManagementEffect
{
    ColorManagementEffect(std::nullptr_t) noexcept {}
    ColorManagementEffect();
    static bool IsBestQualitySupported(Microsoft::Graphics::Canvas::CanvasDevice const& device);
};

struct WINRT_EBO ColorManagementProfile :
    Microsoft::Graphics::Canvas::Effects::IColorManagementProfile
{
    ColorManagementProfile(std::nullptr_t) noexcept {}
    ColorManagementProfile(Microsoft::Graphics::Canvas::CanvasColorSpace const& colorSpace);
    static Microsoft::Graphics::Canvas::Effects::ColorManagementProfile CreateCustom(array_view<uint8_t const> iccProfile);
    static Microsoft::Graphics::Canvas::Effects::ColorManagementProfile CreateSimple(Microsoft::Graphics::Canvas::Effects::ColorManagementSimpleProfile const& simpleProfile);
    static Microsoft::Graphics::Canvas::Effects::ColorManagementProfile CreateExtended(Microsoft::Graphics::Canvas::Effects::ExtendedColorSpace const& colorSpace);
    static bool IsSupported(Microsoft::Graphics::Canvas::Effects::ColorManagementProfileType const& type, Microsoft::Graphics::Canvas::CanvasDevice const& device);
};

struct WINRT_EBO ColorMatrixEffect :
    Microsoft::Graphics::Canvas::Effects::IColorMatrixEffect
{
    ColorMatrixEffect(std::nullptr_t) noexcept {}
    ColorMatrixEffect();
};

struct WINRT_EBO ColorSourceEffect :
    Microsoft::Graphics::Canvas::Effects::IColorSourceEffect
{
    ColorSourceEffect(std::nullptr_t) noexcept {}
    ColorSourceEffect();
};

struct WINRT_EBO CompositeEffect :
    Microsoft::Graphics::Canvas::Effects::ICompositeEffect
{
    CompositeEffect(std::nullptr_t) noexcept {}
    CompositeEffect();
};

struct WINRT_EBO ContrastEffect :
    Microsoft::Graphics::Canvas::Effects::IContrastEffect
{
    ContrastEffect(std::nullptr_t) noexcept {}
    ContrastEffect();
};

struct WINRT_EBO ConvolveMatrixEffect :
    Microsoft::Graphics::Canvas::Effects::IConvolveMatrixEffect
{
    ConvolveMatrixEffect(std::nullptr_t) noexcept {}
    ConvolveMatrixEffect();
};

struct WINRT_EBO CropEffect :
    Microsoft::Graphics::Canvas::Effects::ICropEffect
{
    CropEffect(std::nullptr_t) noexcept {}
    CropEffect();
};

struct WINRT_EBO CrossFadeEffect :
    Microsoft::Graphics::Canvas::Effects::ICrossFadeEffect
{
    CrossFadeEffect(std::nullptr_t) noexcept {}
    CrossFadeEffect();
    static bool IsSupported();
};

struct WINRT_EBO DirectionalBlurEffect :
    Microsoft::Graphics::Canvas::Effects::IDirectionalBlurEffect
{
    DirectionalBlurEffect(std::nullptr_t) noexcept {}
    DirectionalBlurEffect();
};

struct WINRT_EBO DiscreteTransferEffect :
    Microsoft::Graphics::Canvas::Effects::IDiscreteTransferEffect
{
    DiscreteTransferEffect(std::nullptr_t) noexcept {}
    DiscreteTransferEffect();
};

struct WINRT_EBO DisplacementMapEffect :
    Microsoft::Graphics::Canvas::Effects::IDisplacementMapEffect
{
    DisplacementMapEffect(std::nullptr_t) noexcept {}
    DisplacementMapEffect();
};

struct WINRT_EBO DistantDiffuseEffect :
    Microsoft::Graphics::Canvas::Effects::IDistantDiffuseEffect
{
    DistantDiffuseEffect(std::nullptr_t) noexcept {}
    DistantDiffuseEffect();
};

struct WINRT_EBO DistantSpecularEffect :
    Microsoft::Graphics::Canvas::Effects::IDistantSpecularEffect
{
    DistantSpecularEffect(std::nullptr_t) noexcept {}
    DistantSpecularEffect();
};

struct WINRT_EBO DpiCompensationEffect :
    Microsoft::Graphics::Canvas::Effects::IDpiCompensationEffect
{
    DpiCompensationEffect(std::nullptr_t) noexcept {}
    DpiCompensationEffect();
};

struct WINRT_EBO EdgeDetectionEffect :
    Microsoft::Graphics::Canvas::Effects::IEdgeDetectionEffect
{
    EdgeDetectionEffect(std::nullptr_t) noexcept {}
    EdgeDetectionEffect();
};

struct WINRT_EBO EffectTransferTable3D :
    Microsoft::Graphics::Canvas::Effects::IEffectTransferTable3D
{
    EffectTransferTable3D(std::nullptr_t) noexcept {}
    static Microsoft::Graphics::Canvas::Effects::EffectTransferTable3D CreateFromColors(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, array_view<Windows::UI::Color const> colors, int32_t sizeB, int32_t sizeG, int32_t sizeR);
    static Microsoft::Graphics::Canvas::Effects::EffectTransferTable3D CreateFromBytes(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, array_view<uint8_t const> bytes, int32_t sizeB, int32_t sizeG, int32_t sizeR, Windows::Graphics::DirectX::DirectXPixelFormat const& format);
};

struct WINRT_EBO EmbossEffect :
    Microsoft::Graphics::Canvas::Effects::IEmbossEffect
{
    EmbossEffect(std::nullptr_t) noexcept {}
    EmbossEffect();
};

struct WINRT_EBO ExposureEffect :
    Microsoft::Graphics::Canvas::Effects::IExposureEffect
{
    ExposureEffect(std::nullptr_t) noexcept {}
    ExposureEffect();
};

struct WINRT_EBO GammaTransferEffect :
    Microsoft::Graphics::Canvas::Effects::IGammaTransferEffect
{
    GammaTransferEffect(std::nullptr_t) noexcept {}
    GammaTransferEffect();
};

struct WINRT_EBO GaussianBlurEffect :
    Microsoft::Graphics::Canvas::Effects::IGaussianBlurEffect
{
    GaussianBlurEffect(std::nullptr_t) noexcept {}
    GaussianBlurEffect();
};

struct WINRT_EBO GrayscaleEffect :
    Microsoft::Graphics::Canvas::Effects::IGrayscaleEffect
{
    GrayscaleEffect(std::nullptr_t) noexcept {}
    GrayscaleEffect();
};

struct WINRT_EBO HighlightsAndShadowsEffect :
    Microsoft::Graphics::Canvas::Effects::IHighlightsAndShadowsEffect
{
    HighlightsAndShadowsEffect(std::nullptr_t) noexcept {}
    HighlightsAndShadowsEffect();
};

struct WINRT_EBO HueRotationEffect :
    Microsoft::Graphics::Canvas::Effects::IHueRotationEffect
{
    HueRotationEffect(std::nullptr_t) noexcept {}
    HueRotationEffect();
};

struct WINRT_EBO HueToRgbEffect :
    Microsoft::Graphics::Canvas::Effects::IHueToRgbEffect
{
    HueToRgbEffect(std::nullptr_t) noexcept {}
    HueToRgbEffect();
};

struct WINRT_EBO InvertEffect :
    Microsoft::Graphics::Canvas::Effects::IInvertEffect
{
    InvertEffect(std::nullptr_t) noexcept {}
    InvertEffect();
};

struct WINRT_EBO LinearTransferEffect :
    Microsoft::Graphics::Canvas::Effects::ILinearTransferEffect
{
    LinearTransferEffect(std::nullptr_t) noexcept {}
    LinearTransferEffect();
};

struct WINRT_EBO LuminanceToAlphaEffect :
    Microsoft::Graphics::Canvas::Effects::ILuminanceToAlphaEffect
{
    LuminanceToAlphaEffect(std::nullptr_t) noexcept {}
    LuminanceToAlphaEffect();
};

struct WINRT_EBO MorphologyEffect :
    Microsoft::Graphics::Canvas::Effects::IMorphologyEffect
{
    MorphologyEffect(std::nullptr_t) noexcept {}
    MorphologyEffect();
};

struct WINRT_EBO OpacityEffect :
    Microsoft::Graphics::Canvas::Effects::IOpacityEffect
{
    OpacityEffect(std::nullptr_t) noexcept {}
    OpacityEffect();
    static bool IsSupported();
};

struct WINRT_EBO OpacityMetadataEffect :
    Microsoft::Graphics::Canvas::Effects::IOpacityMetadataEffect
{
    OpacityMetadataEffect(std::nullptr_t) noexcept {}
    OpacityMetadataEffect();
};

struct WINRT_EBO PixelShaderEffect :
    Microsoft::Graphics::Canvas::Effects::IPixelShaderEffect
{
    PixelShaderEffect(std::nullptr_t) noexcept {}
    PixelShaderEffect(array_view<uint8_t const> shaderCode);
};

struct WINRT_EBO PointDiffuseEffect :
    Microsoft::Graphics::Canvas::Effects::IPointDiffuseEffect
{
    PointDiffuseEffect(std::nullptr_t) noexcept {}
    PointDiffuseEffect();
};

struct WINRT_EBO PointSpecularEffect :
    Microsoft::Graphics::Canvas::Effects::IPointSpecularEffect
{
    PointSpecularEffect(std::nullptr_t) noexcept {}
    PointSpecularEffect();
};

struct WINRT_EBO PosterizeEffect :
    Microsoft::Graphics::Canvas::Effects::IPosterizeEffect
{
    PosterizeEffect(std::nullptr_t) noexcept {}
    PosterizeEffect();
};

struct WINRT_EBO PremultiplyEffect :
    Microsoft::Graphics::Canvas::Effects::IPremultiplyEffect
{
    PremultiplyEffect(std::nullptr_t) noexcept {}
    PremultiplyEffect();
};

struct WINRT_EBO RgbToHueEffect :
    Microsoft::Graphics::Canvas::Effects::IRgbToHueEffect
{
    RgbToHueEffect(std::nullptr_t) noexcept {}
    RgbToHueEffect();
};

struct WINRT_EBO SaturationEffect :
    Microsoft::Graphics::Canvas::Effects::ISaturationEffect
{
    SaturationEffect(std::nullptr_t) noexcept {}
    SaturationEffect();
};

struct WINRT_EBO ScaleEffect :
    Microsoft::Graphics::Canvas::Effects::IScaleEffect
{
    ScaleEffect(std::nullptr_t) noexcept {}
    ScaleEffect();
};

struct WINRT_EBO SepiaEffect :
    Microsoft::Graphics::Canvas::Effects::ISepiaEffect
{
    SepiaEffect(std::nullptr_t) noexcept {}
    SepiaEffect();
};

struct WINRT_EBO ShadowEffect :
    Microsoft::Graphics::Canvas::Effects::IShadowEffect
{
    ShadowEffect(std::nullptr_t) noexcept {}
    ShadowEffect();
};

struct WINRT_EBO SharpenEffect :
    Microsoft::Graphics::Canvas::Effects::ISharpenEffect
{
    SharpenEffect(std::nullptr_t) noexcept {}
    SharpenEffect();
};

struct WINRT_EBO SpotDiffuseEffect :
    Microsoft::Graphics::Canvas::Effects::ISpotDiffuseEffect
{
    SpotDiffuseEffect(std::nullptr_t) noexcept {}
    SpotDiffuseEffect();
};

struct WINRT_EBO SpotSpecularEffect :
    Microsoft::Graphics::Canvas::Effects::ISpotSpecularEffect
{
    SpotSpecularEffect(std::nullptr_t) noexcept {}
    SpotSpecularEffect();
};

struct WINRT_EBO StraightenEffect :
    Microsoft::Graphics::Canvas::Effects::IStraightenEffect
{
    StraightenEffect(std::nullptr_t) noexcept {}
    StraightenEffect();
};

struct WINRT_EBO TableTransfer3DEffect :
    Microsoft::Graphics::Canvas::Effects::ITableTransfer3DEffect
{
    TableTransfer3DEffect(std::nullptr_t) noexcept {}
    TableTransfer3DEffect();
};

struct WINRT_EBO TableTransferEffect :
    Microsoft::Graphics::Canvas::Effects::ITableTransferEffect
{
    TableTransferEffect(std::nullptr_t) noexcept {}
    TableTransferEffect();
};

struct WINRT_EBO TemperatureAndTintEffect :
    Microsoft::Graphics::Canvas::Effects::ITemperatureAndTintEffect
{
    TemperatureAndTintEffect(std::nullptr_t) noexcept {}
    TemperatureAndTintEffect();
};

struct WINRT_EBO TileEffect :
    Microsoft::Graphics::Canvas::Effects::ITileEffect
{
    TileEffect(std::nullptr_t) noexcept {}
    TileEffect();
};

struct WINRT_EBO TintEffect :
    Microsoft::Graphics::Canvas::Effects::ITintEffect
{
    TintEffect(std::nullptr_t) noexcept {}
    TintEffect();
    static bool IsSupported();
};

struct WINRT_EBO Transform2DEffect :
    Microsoft::Graphics::Canvas::Effects::ITransform2DEffect
{
    Transform2DEffect(std::nullptr_t) noexcept {}
    Transform2DEffect();
};

struct WINRT_EBO Transform3DEffect :
    Microsoft::Graphics::Canvas::Effects::ITransform3DEffect
{
    Transform3DEffect(std::nullptr_t) noexcept {}
    Transform3DEffect();
};

struct WINRT_EBO TurbulenceEffect :
    Microsoft::Graphics::Canvas::Effects::ITurbulenceEffect
{
    TurbulenceEffect(std::nullptr_t) noexcept {}
    TurbulenceEffect();
};

struct WINRT_EBO UnPremultiplyEffect :
    Microsoft::Graphics::Canvas::Effects::IUnPremultiplyEffect
{
    UnPremultiplyEffect(std::nullptr_t) noexcept {}
    UnPremultiplyEffect();
};

struct WINRT_EBO VignetteEffect :
    Microsoft::Graphics::Canvas::Effects::IVignetteEffect
{
    VignetteEffect(std::nullptr_t) noexcept {}
    VignetteEffect();
};

}
