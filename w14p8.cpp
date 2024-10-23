//Q8. Program with multiple catch statements

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number to check whether it's even or not: "; cin>>n;
    try
    {
        if(n==0)
        throw runtime_error("Error: number entered is 0!");
        else if(n<0)
        throw runtime_error("Error: negative number entered!");
        else if(n%2!=0)
        throw runtime_error("Error: odd number entered!");
        else cout<<"It's a even number!";
    }
    catch(const runtime_error& e)
    {
        cout<<e.what()<<endl;
    }
    return 0;
}