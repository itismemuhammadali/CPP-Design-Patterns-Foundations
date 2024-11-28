#ifndef Volume_cpp
#define Volume_cpp

class Volume   // Responsibility: This class provides a common interface for calculating Volume. 
// This class follows the Single Responsibility Principle. 

{
public:
    virtual double calculateVolume() = 0;
};

#endif