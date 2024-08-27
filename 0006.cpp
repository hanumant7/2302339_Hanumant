//Swap 2 values using temporary variable

#include<iostream>
using namespace std;
int main()
{
    int a,b,t;
    cout<<"Enter values of a and b: ";
    cin>>a>>b;
    cout<<"Before swap: A="<<a<<" B="<<b;

    t=a;
    a=b;
    b=t;

    cout<<endl<<"After swap: A="<<a<<" B="<<b;
    return 0;
}