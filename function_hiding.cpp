#include<iostream>
using std::cout;
using std::cin;
using std::endl;
class Car
{
public:
    void shift_gear()
    {
        cout<<"car class shift gear\n";
    }
};
class Sports_car
{
public:
   void shift_gear(int x)
   {
       cout<<"super car shift gear\n";
   }
};
int main()
{
    Sports_car audi;
    //audi.shift_gear(); error
    audi.shift_gear(5);
    return 0;
}
