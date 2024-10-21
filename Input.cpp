#ifndef Input_cpp
#define Input_cpp

#include <iostream>

using namespace std;

class Input 
{
public:
    int inputLength() 
    {
        int length;
        cout << "Enter Length" << endl;
        cin >> length;
        return length;
    };
    int inputWidth() 
    {
        int width;
        cout << "Enter Width" << endl;
        cin >> width;
        return width;
    };
    int inputRadius() 
    {
        int radius;
        cout << "Enter Circle Radius" << endl;
        cin >> radius;
        return radius;
    };
};
#endif