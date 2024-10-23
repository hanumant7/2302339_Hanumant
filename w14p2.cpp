//Q2. Program with function template with multiple parameters eg. display ()

#include<iostream>
using namespace std;
template<typename T,typename U>
void display(T a, U b)
{
    cout<<"A: "<<a<<" & B: "<<b<<endl;
}
int main()
{
    display(1,2);
    display("hello",5.6);
    display(4.5,6.7f);
    display('f',true);
    return 0;
}