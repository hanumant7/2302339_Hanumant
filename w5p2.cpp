//Q2. Simple i/o using class, accessing class instance in main()

#include <iostream>
using namespace std;
class simple
{
    public: int i=1;
    string word="hello";
};
int main()
{
    simple sobj;
    cout<<sobj.i<<". "<<sobj.word<<endl;
    return 0;
}