//Q6. Program to overload class constructors

#include <iostream>
using namespace std;
class area
{
    public: area(double radius ,const double PI=3.14159)
            {
                float a=PI*radius*radius;
                cout<<"Area of Circle: "<<a<<" sq units"<<endl;
            }
            area(float length ,float breadth)
            {
                float a=length*breadth;
                cout<<"Area of Rectangle: "<<a<<" sq units"<<endl;
            }
            area(float side)
            {   
                float a=side*side;
                cout<<"Area of Square: "<<a<<" sq units"<<endl;
            }
            area(double base ,float height)
            {   
                float a=0.5*base*height;
                cout<<"Area of Triangle: "<<a<<" sq units"<<endl; 
            }
};
int main()
{
    area a1(5.2),a2(10.2f,5.3f),a3(5.7f),a4(7.9,4.5f);
    return 0;
}