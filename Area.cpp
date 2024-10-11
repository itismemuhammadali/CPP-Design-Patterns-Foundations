#ifndef Area_cpp
#define Area_cpp

#include <iostream>

using namespace std;

void CaculateSquareArea(){
    int length, width, area;
    cout <<"Enter square dimensions" <<endl;
    cout <<"Enter Length" <<endl;
    cin >> length ;
    cout <<"Enter Width" <<endl;
    cin >> width ;
    area = length*width;
    cout << "Area = "  << area;
}
void CaculateRectangleArea(){
    int length, width, area;
    cout <<"Enter Rectangle Dimensions" <<endl;
    cout <<"Enter Length" <<endl;
    cin >> length ;
    cout <<"Enter Width" <<endl;
    cin >> width ;
    area = length*width;
    cout << "Area = "  << area;
}
void CaculateCircleArea(){
    int Radius, area;
    int PI = 3.14;
    cout <<"Enter Circle Radius" <<endl;
    cout <<"Enter Radius" <<endl;
    cin >> Radius ;
    area = PI*Radius*Radius;
    cout << "Area = "  << area;
}
#endif