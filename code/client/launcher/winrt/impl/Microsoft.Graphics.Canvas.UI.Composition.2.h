// WARNING: Please don't edit this file. It was generated by C++/WinRT v1.0.190111.3

#pragma once
#include "winrt/impl/Microsoft.Graphics.Canvas.1.h"
#include "winrt/impl/Windows.UI.Composition.1.h"
#include "winrt/impl/Microsoft.Graphics.Canvas.UI.Composition.1.h"

WINRT_EXPORT namespace winrt::Microsoft::Graphics::Canvas::UI::Composition {

}

namespace winrt::impl {

}

WINRT_EXPORT namespace winrt::Microsoft::Graphics::Canvas::UI::Composition {

struct CanvasComposition
{
    CanvasComposition() = delete;
    static Windows::UI::Composition::CompositionGraphicsDevice CreateCompositionGraphicsDevice(Windows::UI::Composition::Compositor const& compositor, Microsoft::Graphics::Canvas::CanvasDevice const& canvasDevice);
    static Windows::UI::Composition::ICompositionSurface CreateCompositionSurfaceForSwapChain(Windows::UI::Composition::Compositor const& compositor, Microsoft::Graphics::Canvas::CanvasSwapChain const& swapChain);
    static Microsoft::Graphics::Canvas::CanvasDevice GetCanvasDevice(Windows::UI::Composition::CompositionGraphicsDevice const& graphicsDevice);
    static void SetCanvasDevice(Windows::UI::Composition::CompositionGraphicsDevice const& graphicsDevice, Microsoft::Graphics::Canvas::CanvasDevice const& canvasDevice);
    static Microsoft::Graphics::Canvas::CanvasDrawingSession CreateDrawingSession(Windows::UI::Composition::CompositionDrawingSurface const& drawingSurface);
    static Microsoft::Graphics::Canvas::CanvasDrawingSession CreateDrawingSession(Windows::UI::Composition::CompositionDrawingSurface const& drawingSurface, Windows::Foundation::Rect const& updateRect);
    static Microsoft::Graphics::Canvas::CanvasDrawingSession CreateDrawingSession(Windows::UI::Composition::CompositionDrawingSurface const& drawingSurface, Windows::Foundation::Rect const& updateRectInPixels, float dpi);
    static void Resize(Windows::UI::Composition::CompositionDrawingSurface const& drawingSurface, Windows::Foundation::Size const& sizeInPixels);
};

}
