//Q5. Making class function inline

#include <iostream>
using namespace std;
class simple
{
    public: inline void func()
            {cout<<"This is an inline function"<<endl;}
};
int main()
{
    simple sobj;
    sobj.func();
    return 0;
}