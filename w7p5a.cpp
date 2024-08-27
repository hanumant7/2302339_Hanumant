//Q5a. Demonstrate default constructor.

#include <iostream>
using namespace std;
class cons
{
    public: cons()
            {cout<<"Default constructor invoked."<<endl;}
};

int main()
{
    cons a,b; //constructor will be caleed twice
    return 0;
}