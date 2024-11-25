#ifndef Area_cpp
#define Area_cpp

class Area   //Responsibility: This class provides a common interface for calculating Area. 
// This class follows the Single Responsibility Principle. 

{
public:
    virtual double calculateArea() = 0;
};

#endif