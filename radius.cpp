/*This is a program to calculate the area of a circle*/
#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double radius, area;

    cout<<"Please enter the radius of a circle:"<<endl;
    cin>>radius;

    area = M_PI * (radius*radius);

    cout<<"The area of a circle with radius of "<<radius<<" is "<<area<<endl;
       return 0;
}