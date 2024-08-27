//Q6. Even or odd

#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a positive number: ";
    cin>>num;
    if(num<=0)
    cout<<"Invalid number";
    else
    {
        if(num%2==0)
        cout<<"It is Even";
        else cout<<"It is Odd";
    }
    return 0;
}