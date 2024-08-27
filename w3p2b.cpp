//Q2b. Swap using call by reference

#include<iostream>
using namespace std;
void func(int &a,int &b)
{
    int t;
    t=a;
    a=b;
    b=t;
}
int main()
{
    int a,b;
    cout<<"Enter 2 values: ";
    cin>>a>>b;
    cout<<"Before swap: a="<<a<<" b="<<b<<endl;
    func(a,b);
    cout<<"After swap: a="<<a<<" b="<<b;
    return 0;
}
