#ifndef Draw_cpp
#define Draw_cpp
class Draw
{
public:
    void draw()
    {
        drawShape();
    }

    virtual void drawShape() = 0;
};
#endif