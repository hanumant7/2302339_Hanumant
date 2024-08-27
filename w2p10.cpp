//Q10. Display "Well done" n times

#include<iostream>
using namespace std;
int main()
{
    int n,fact=1;
    cout<<"Enter number: ";
    cin>>n;
    
    for(int i=n; i>0; i--)
    fact*=i;
    cout<<"Factorial: "<<fact<<endl;
    return 0;
}