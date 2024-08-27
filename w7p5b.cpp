//Q5b. Demonstrate parameterised constructor.

#include <iostream>
using namespace std;
class cons
{
    public: cons(int a, int b)
            {
                cout<<"Values passed to constructor: "<<endl;
                cout<<"A: "<<a<<" B: "<<b<<endl;
            }
};

int main()
{
    cons z(1,3);
    return 0;
}