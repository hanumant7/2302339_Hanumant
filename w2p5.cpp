//Q5. Largest of 2 numbers

#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"Enter 2 values: ";
    cin>>num1>>num2;
    if(num1>num2)
    cout<<num1<<" is largest";
    else cout<<num2<<" is largest";
    return 0;
}