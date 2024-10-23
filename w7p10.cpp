//Q10. Overload unary operator – to negate the sign of the object number.

#include <iostream>
using namespace std;
class over
{
    public: int num;
            over(int n):num(n) {}
            over operator-()
            {
                return over(-num);
            }
};

int main()
{
    over a(30);
    over c=-a;
    cout<<"OG Num: "<<a.num<<endl<<"Negated Num: "<<c.num<<endl;
    return 0;
}