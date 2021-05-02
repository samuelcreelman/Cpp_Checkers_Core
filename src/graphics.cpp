#include <SDL.h>
#include <SDL_image.h>
#include <SDL_ttf.h>

#include "graphics.h"

Graphics::Graphics()
{
}

Graphics::~Graphics()
{
}

bool Graphics::InitGraphics()
{
    return false;
}

bool Graphics::ReleaseGraphics()
{
    return false;
}

void Graphics::RenderScreen()
{

}

bool Graphics::AddToRenderQueue(GraphicObject &object, GraphicsLayer layer, string asset)
{
    return false;
}

bool Graphics::AddTextToRenderQueue(string text, GraphicsLayer layer = GraphicsLayer::Static_Foreground)
{
    return false;
}

bool Graphics::RemoveFromRenderQueue(GraphicObject &object, GraphicsLayer layer)
{
    return false;
}