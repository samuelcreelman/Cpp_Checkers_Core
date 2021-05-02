#include <SDL2/SDL.h>

#include <map>
#include <vector>

#include "renderObject.h"

using std::map;
using std::vector;

enum GraphicsLayer
{
    Background = 0,  // For window backgrounds
    Static_Foreground = 1,  // For most text and the game board
    Dynamic_Foreground = 2,  // For interactive elements like buttons and game pieces
    //Popup = 3,  // For popup windows if needed
};

const int kSCREEN_WIDTH = 800;
const int kSCREEN_HEIGHT = 600;

class Graphics
{
public:
    Graphics();
    ~Graphics();

    bool InitGraphics();
    bool ReleaseGraphics();

    void RenderScreen();

    bool AddToRenderQueue(GraphicObject &object, GraphicsLayer layer, string asset);
    bool AddTextToRenderQueue(string text, GraphicsLayer layer = GraphicsLayer::Static_Foreground);
    bool RemoveFromRenderQueue(GraphicObject &object, GraphicsLayer layer);

private:
    map<SDL_Texture, vector<GraphicObject*>> BackgroundRenderQueue;
    map<SDL_Texture, vector<GraphicObject*>> StaticForegroundRenderQueue;
    map<SDL_Texture, vector<GraphicObject*>> DynamicForegroundRenderQueue;
    //map<SDL_Texture, vector<RenderObject*>> PopupRenderQueue;

};
