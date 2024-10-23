//Q9. Program to demonstrate throw keyword

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter an even positive number: "; cin>>n;
    try
    {
        if(n%2!=0||n<0)
        throw runtime_error("Error: it's not an even positive number!");
        cout<<"It's an even positive number!";
    }
    catch(const runtime_error& e)
    {
        cout<<e.what()<<endl;
    }
    return 0;
}