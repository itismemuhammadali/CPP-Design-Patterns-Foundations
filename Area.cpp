#ifndef Area_cpp
#define Area_cpp

class Area   
// This class follows the Single Responsibility Principle . 
//Responsibility: This class provides a common interface for calculating Area . 

// This class follows the Interface Segregation Principle .

{
public:
    virtual double calculateArea() = 0;
};

#endif