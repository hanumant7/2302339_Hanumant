//Q12. Overload binary operator + to add two complex numbers

#include<iostream>
using namespace std;
class over
{
    public: int real,imag;
            over(int r=0, int i=0)
            {
                real=r;
                imag=i;
            }
            over operator+(over& c)
            {
                return over(real+c.real,imag+c.imag);
            }
};

int main()
{
    over a(30,3);
    over b(20,1);
    over c=a+b;
    cout<<c.real<<" + "<<c.imag<<"i"<<endl;
    return 0;
}