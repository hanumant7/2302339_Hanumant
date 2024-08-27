/* Date: 06 August 2024
 * Create class called players with the following variables: players name, address, age, height.
 * Initialise the above variables using constructor.
 * Using Static member to count the number of objects created and display the count.
 * Also include a display method to o/p the player details */

#include <iostream>
using namespace std;
class player
{
    static int count;
    int age;
    float height; 
    string name,address;
    public: player()
            {
                cout<<"Enter your details without spacebar"<<endl;
                cout<<"Enter your Name: "; cin>>name;
                cout<<"Enter your Age: "; cin>>age;
                cout<<"Enter your Height in cm: "; cin>>height;
                cout<<"Enter your Address in brief: "; cin>>address;
                count++;
                player_details();
            }
            int count_track()
            {return count;}
            void player_details()
            {cout<<"Name: "<<name<<endl<<"Age: "<<age<<endl<<"Height in  cm: "<<height<<"cm"<<endl<<"Address: "<<address<<endl;}
};
int player::count;
int main()
{
    player p1,p2;
    int c=p1.count_track();
    cout<<c<<" players are registered"<<endl;
    return 0;
}