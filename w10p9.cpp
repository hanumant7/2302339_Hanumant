//Q9. Simple program with abstract class eg class figure, circle, rectangle

#include<iostream>
using namespace std;
class figure
{
    public: virtual double area()=0;
            virtual void specs()=0;
};
class circle:public figure
{
    double radius;
    public: circle(double r):radius(r) {}
            double area() override
            {
                const double PI=3.1415926536;
                return (PI*radius*radius);
            }
            void specs() override
            {
                cout<<"Radius of the circle: "<<radius<<" units"<<endl;
            }
};
class rectangle:public figure
{
    double length,breadth;
    public: rectangle(double l,double b):length(l),breadth(b) {}
            double area() override
            {
                return length*breadth;
            }
            void specs() override
            {
                cout<<"Length of rectangle: "<<length<<" units"<<endl;
                cout<<"Breadth of rectangle: "<<breadth<<" units"<<endl;
            }
};
int main()
{
    circle c(5.2);
    rectangle r(4.5,7.8);
    c.specs();
    cout<<"Area of circle: "<<c.area()<<" sq units"<<endl;
    r.specs();
    cout<<"Area of rectangle: "<<r.area()<<" sq units"<<endl;
    return 0;
}