//Q5. Overloading area() 

#include<iostream>
using namespace std;
double area(double radius ,const double PI=3.14159)
{    return PI*radius*radius; }
float area(float length ,float breadth)
{    return length*breadth; }
float area(float side)
{    return side*side; }
double area(double base ,float height)
{    return 0.5*base*height; }
int main()
{
    int a=1,c;
    float length,breadth,side;
    double ar,radius,base,height;
    do
    {
        cout<<endl<<"Enter no. corresponding to the shape given below to find it's area"<<endl;
        cout<<"1:Circle 2:Rectangle 3:Square 4:Triangle"<<endl;
        cin>>c;
        switch(c)
        {
            case 1: cout<<"Enter Radius: ";
                    cin>>radius;
                    ar=area(radius);
                    cout<<"Area of Circle = "<<ar<<" sq units";
                    break;
            case 2: cout<<"Enter length and breadth: ";
                    cin>>length>>breadth;
                    ar=area(length,breadth);
                    cout<<"Area of Rectangle = "<<ar<<" sq units";
                    break;
            case 3: cout<<"Enter Side: ";
                    cin>>side;
                    ar=area(side);
                    cout<<"Area of Square = "<<ar<<" sq units";
                    break;
            case 4: cout<<"Enter base and height: ";
                    cin>>radius;
                    ar=area(base,height);
                    cout<<"Area of Triangle = "<<ar<<" sq units";
                    break;
            default: cout<<"Invalid entry"; break;    
        }
    } while (a);
    
    return 0;
}
