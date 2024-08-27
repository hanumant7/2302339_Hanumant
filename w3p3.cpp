//Q3. Funtion with default argument

#include<iostream>
using namespace std;
float rectarea(float length ,float breadth=2.5)
{    return length*breadth; }
int main()
{
    float length,ar;
    cout<<"Enter length: ";
    cin>>length;

    ar=rectarea(length);
    cout<<"Area of Rectangle = "<<ar<<" sq units";
    return 0;
}
