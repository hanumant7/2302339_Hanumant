//Q2a. Swap using call by value

#include<iostream>
using namespace std;
void func(int a,int b)
{
    int t;
    cout<<"Before swap: a="<<a<<" b="<<b<<endl;
    t=a;
    a=b;
    b=t;
    cout<<"After swap: a="<<a<<" b="<<b;
}
int main()
{
    int a,b;
    cout<<"Enter 2 values: ";
    cin>>a>>b;
    func(a,b);
    return 0;
}
