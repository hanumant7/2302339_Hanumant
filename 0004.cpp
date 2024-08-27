//Largest of 3 numbers

#include<iostream>
using namespace std;
int main()
{
    int num1,num2,num3,avg,sum;
    cout<<"Enter 3 values: ";
    cin>>num1>>num2>>num3;
    
    if(num1>num2)
    {
        if(num1>num3)
        cout<<num1<<" is largest";
        else cout<<num3<<" is largest";
    }
    else if(num2>num3)
    cout<<num2<<" is largest";
    else cout<<num3<<" is largest";
    return 0;
}