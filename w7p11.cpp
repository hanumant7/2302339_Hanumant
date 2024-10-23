//Q11. Overload unary operator ++ to increment an objects data.

#include <iostream>
using namespace std;
class over
{
    public: int num1,num2;
            over(int n1, int n2):num1(n1),num2(n2) {}
            over operator++()
            {
                return over(++num1,++num2);
            }
};

int main()
{
    over a(30,40);
    cout<<"Before:"<<endl<<"Num1: "<<a.num1<<endl<<"Num2: "<<a.num2<<endl;
    ++a;
    cout<<endl<<"After:"<<endl<<"Num1: "<<a.num1<<endl<<"Num2: "<<a.num2<<endl;
    return 0;
}