//Q7. Demonstrate constructors with default arguments

#include<iostream>
using namespace std;
class area
{
    public: area(float length ,float breadth=2.5)
            {
                float a=length*breadth;
                cout<<endl<<"Area of Rectangle: "<<a<<" sq units"<<endl;
            }
};
int main()
{
    area a1(5.2),a2(10.2,5.3);
    return 0;
}