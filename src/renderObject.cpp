#include "renderObject.h"

using std::string;
using std::vector;

GraphicObject::GraphicObject(vector<int, int> pos)
{

}


GraphicObject::~GraphicObject()
{
    
}

GraphicObject::GraphicObject(GraphicObject &source)
{

}

GraphicObject& GraphicObject::operator=(GraphicObject &source)
{
    return *this;
}

GraphicObject::GraphicObject(GraphicObject &&source)
{

}

GraphicObject& GraphicObject::operator=(GraphicObject &&source)
{
    return *this;
}
