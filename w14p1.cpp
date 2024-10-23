//Q1. Program with function template with single parameter eg.swap ()

#include<iostream>
using namespace std;
template<typename T>
void swapf(T& a, T& b)
{
    T t=a;
    a=b;
    b=t;
}
int main()
{
    int x=1,y=2;
    cout<<"Before swap: x="<<x<<" & y="<<y<<endl;
    swapf(x,y);
    cout<<"After swap: x="<<x<<" & y="<<y<<endl;

    double a=4.6,b=6.7;
    cout<<"Before swap: a="<<a<<" & b="<<b<<endl;
    swapf(a,b);
    cout<<"After swap: a="<<a<<" & b="<<b<<endl;
    return 0;
}