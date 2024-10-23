//Q7. Program handling division by 0 exception with try catch block

#include<iostream>
using namespace std;
int main()
{
    float n,d;
    cout<<"Enter numerator: "; cin>>n;
    cout<<"Enter denominator: "; cin>>d;
    try
    {
        if(d==0)
        throw runtime_error("Error: division by 0!");
        float res=n/d;
        cout<<"Result: "<<res;
    }
    catch(const runtime_error& e)
    {
        cout<<e.what()<<endl;
    }
    return 0;
}