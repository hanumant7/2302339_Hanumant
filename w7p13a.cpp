//Q13a. Overload binary operator - to add two find distance between two points p1 (x, nx) and p2 (y, ny)

#include<iostream>
#include<math.h>
using namespace std;
class over
{
    public: float x,y;
            over(float nx=0, float ny=0)
            {
                x=nx;
                y=ny;
            }
            float operator-(over& c)
            {
                return (sqrt(((c.x-x)*(c.x-x))+((c.y-y)*(c.y-y))));
            }
};

int main()
{
    over a(30,3);
    over b(20,1);
    float c=a-b;
    cout<<"Distance: "<<c<<" units"<<endl;
    return 0;
}