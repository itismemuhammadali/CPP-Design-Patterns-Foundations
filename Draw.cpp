#ifndef Draw_H
#define Draw_H
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