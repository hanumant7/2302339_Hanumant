//Q8. Digit in words

#include<iostream>
using namespace std;
int main()
{
    int c;
    cout<<"Enter a number from 1-5: ";
    cin>>c;
    switch (c)
    {
    case 1: cout<<"One"; break;
    case 2: cout<<"Two"; break;
    case 3: cout<<"Three"; break;
    case 4: cout<<"Four"; break;
    case 5: cout<<"Five"; break;
   
    default: cout<<"Invalid entry"; break;
    }
    return 0;
}