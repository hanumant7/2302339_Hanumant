//Q4. Funtion with constant argument PI

#include<iostream>
using namespace std;
float circlearea(float radius ,const float PI=3.14159)
{    return PI*radius*radius; }
int main()
{
    float radius,ar;
    cout<<"Enter radius: ";
    cin>>radius;

    ar=circlearea(radius);
    cout<<"Area of Circle = "<<ar<<" sq units";
    return 0;
}
