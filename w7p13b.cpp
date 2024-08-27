//Overload binary operator - to subtract two complex numbers

#include <iostream>
using namespace std;
class cons
{
    public: int real,imag;
            cons(int r=0, int i=0)
            {
                real=r;
                imag=i;
            }
            cons operator-(cons& c)
            {
                return cons(real-c.real,imag-c.imag);
            }
};

int main()
{
    cons a(30,3);
    cons b(20,1);
    cons c=a-b;
    cout<<c.real<<" + "<<c.imag<<"i"<<endl;
    return 0;
}