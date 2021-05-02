#include <string>
#include <vector>

using std::string;
using std::vector;

// The graphic anchor of a texture for a given object
// Default = Middle Center
// ? Include other versions of anchors in here? [Top, Bottom, Left, Right]
enum Anchor
{
    MiddleCenter = 0,
};

class GraphicObject
{
public:
    GraphicObject(vector<int, int> pos);
    ~GraphicObject();

    GraphicObject(GraphicObject &source);
    GraphicObject& operator=(GraphicObject &source);
    GraphicObject(GraphicObject &&source);
    GraphicObject& operator=(GraphicObject &&source);

    string GetTextureAsset() { return _asset; };
    
    vector<int, int> GetPosition() { return _position; };
    void SetPosition(int x, int y) 
    { 
        _position[0] = x; 
        _position[1] = y;
    }
    void SetPosition(vector<int, int> pos) { _position = pos; }


protected:
    string _asset;
    vector<int, int> _position;
    Anchor _anchor = Anchor::MiddleCenter;

};