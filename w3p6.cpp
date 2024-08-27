//Q6. Library function eg. math.h 

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int c,n1,n2,a=1;
    float num;
    do
    {
        cout<<endl<<"Enter no. corresponding to the task you want to do"<<endl;
        cout<<"1:Squareroot 2:Maxinteger 3:Mininteger 4:Roundoff 5:AbsoluteValue 6:RoundedUp 7:RoundedDown 8:Log 9:Power"<<endl;
        cin>>c;
        switch(c)
        {
            case 1: cout<<"Enter number you want to find square root of: ";
                    cin>>num;
                    cout<<"square root of "<<num<<" = "<<sqrt(num);
                    break;
            case 2: cout<<"Enter 2 integer numbers you want to find max of: ";
                    cin>>n1>>n2;
                    cout<<"max between "<<n1<<" & "<<n2<<" = "<<max(n1,n2);
                    break;
            case 3: cout<<"Enter 2 integer numbers you want to find min of: ";
                    cin>>n1>>n2;
                    cout<<"min between "<<n1<<" & "<<n2<<" = "<<min(n1,n2);
                    break;
            case 4: cout<<"Enter number you want to find roundoff of: ";
                    cin>>num;
                    cout<<"roundoff of"<<num<<" = "<<round(num);
                    break;
            case 5: cout<<"Enter number you want to find Absolute Value of: ";
                    cin>>num;
                    cout<<"absolute value of"<<num<<" = "<<abs(num);
                    break;
            case 6: cout<<"Enter number you want to find rounded up value of: ";
                    cin>>num;
                    cout<<"rounded up value of"<<num<<" = "<<ceil(num);
                    break;
            case 7: cout<<"Enter number you want to find rounded down value of: ";
                    cin>>num;
                    cout<<"rounded down value of"<<num<<" = "<<floor(num);
                    break;
            case 8: cout<<"Enter number you want to find log of: ";
                    cin>>num;
                    cout<<"log of"<<num<<" = "<<log(num);
                    break;
            case 9: cout<<"Enter integer values x to the power of y you want to find of: ";
                    cin>>n1>>n2;
                    cout<<"power of "<<n1<<" to the power of "<<n2<<" = "<<pow(n1,n2);
                    break;
            default: cout<<"Invalid entry"; break;
        }
    }while(a);
    
    return 0;
}

