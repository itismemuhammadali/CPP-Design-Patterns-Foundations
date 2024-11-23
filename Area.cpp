#ifndef Area_cpp
#define Area_cpp

class Area  // This class follows the Single Responsibility Principle. 
//This class has a virtual method that is override by child classes to implement their own calculateArea() method. 
{
public:
    virtual double calculateArea() = 0;
};

#endif