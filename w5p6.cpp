//Q6. Display count as static data member to count instances of a class

#include <iostream>
using namespace std;
class simple
{
    static int count;
    public: 
            int count_track()
            {return count;}
            simple()
            {count++;}
};
int simple::count;
int main()
{
    simple sobj,sobj2;
    int c=sobj.count_track();
    cout<<c<<" instances are created"<<endl;
    return 0;
}