#ifndef Input_cpp
#define Input_cpp

class Input   
// This class follows the Single Responsibility Principle .
//Responsibility: This class provides a common interface for taking input from user .

// This class follows the Interface Segregation Principle .

{
public:
    virtual void inputDimensions() = 0;
};
#endif