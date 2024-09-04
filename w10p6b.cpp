//Q6b. Program with hierarchical inheritance; eg. employee, skilled and unskilled class

#include <iostream>
using namespace std;
class employee
{
     public: void show()
            {
                cout<<"employee"<<endl;
            }
};
class skilled: public employee
{
    public: void showc1()
            {
                cout<<"skilled"<<endl;
            }
};
class unskilled: public employee
{
    public: void showc2()
            {
                cout<<"unskilled"<<endl;
            }
};
int main()
{
    skilled c1;
    unskilled c2;
    c1.show();
    c1.showc1();
    c2.show();
    c2.showc2();
    return 0;
}