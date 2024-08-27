//Q7. case 1-5 using switch_suitable message

#include<iostream>
using namespace std;
int main()
{
    int c;
    cout<<"Enter a number from 1-5: ";
    cin>>c;
    switch (c)
    {
    case 1: cout<<"You choose 1"; break;
    case 2: cout<<"You choose 2"; break;
    case 3: cout<<"You choose 3"; break;
    case 4: cout<<"You choose 4"; break;
    case 5: cout<<"You choose 5"; break;
   
    default: cout<<"Invalid entry"; break;
    }
    return 0;
}