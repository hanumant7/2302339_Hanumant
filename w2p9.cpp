//Q9. Display "Well done" n times

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"How many times you would like to display 'Well done'? ";
    cin>>n;
    
    for(int i=1; i<=n; i++)
    cout<<i<<". Well done"<<endl;
    return 0;
}