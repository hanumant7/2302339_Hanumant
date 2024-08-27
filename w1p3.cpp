//Q3. Sum and Average

#include<iostream>
using namespace std;
int main()
{
    int num1,num2,num3,avg,sum;
    cout<<"Enter 3 values: ";
    cin>>num1>>num2>>num3;
    sum=num1+num2+num3;
    avg=sum/3;
    cout<<"Sum="<<sum<<endl<<"Average="<<avg;
    return 0;
}