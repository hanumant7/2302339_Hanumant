//Q4. Fahrenheit to Celcius

#include<iostream>
using namespace std;
int main()
{
    float f,c;
    cout<<"Enter temperature in degree fahrenhite: ";
    cin>>f;
    c=(f-32)*(5/9.0);
    cout<<c<<" degree celcius";
    return 0;
}