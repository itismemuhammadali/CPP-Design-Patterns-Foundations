#ifndef Volume_cpp
#define Volume_cpp

class Volume   
// This class follows the Single Responsibility Principle . 
// Responsibility: This class provides a common interface for calculating Volume . 

// This class follows the Interface Segregation Principle .

{
public:
    virtual double calculateVolume() = 0;
};

#endif