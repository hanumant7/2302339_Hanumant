//Q9. Demonstrate destructor

#include<iostream>
using namespace std;
class Sample
{
    public: Sample()
            {   cout<<"Constructor called"<<endl;}
            ~Sample()
            {   cout<<"Destructor called";}
};

int main() 
{
   Sample a;
   return 0;
}