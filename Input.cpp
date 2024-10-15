#ifndef Input_cpp
#define Input_cpp

#include <iostream>

using namespace std;

class Input 
{
public:
    virtual int inputLength() = 0;
    virtual int inputWidth() = 0;
    virtual int inputRadius() = 0;
};
#endif