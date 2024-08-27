//Q4. Testing visibility modifiers public and private

#include <iostream>
using namespace std;
class simple
{
    private: int i=1;
    public: int j=2;
            void out()
            {cout<<i;}
};

int main()
{
    simple sobj;
    sobj.out(); //can not access i directly since it's private
    cout<<endl<<sobj.j;
    return 0;
}
