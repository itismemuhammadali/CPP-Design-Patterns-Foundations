#ifndef Volume_cpp
#define Volume_cpp

class Volume    // This class follows the Single Responsibility Principle. 
//This class has a virtual method that is override by child classes to implement their own calculateVolume() method. 
{
public:
    virtual double calculateVolume() = 0;
};

#endif