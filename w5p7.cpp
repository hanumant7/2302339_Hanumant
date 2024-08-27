//Q7. Demonstrate static member functions to access static data members

#include <iostream>
using namespace std;
class simple
{
    static int count;
    public: 
            int static count_track()
            {return count;}
            simple()
            {count++;}
};
int simple::count;
int main()
{
    simple sobj,sobj2;
    cout<<simple::count_track()<<" instances are created"<<endl;
    return 0;
}