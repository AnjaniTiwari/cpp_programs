#include<iostream>
using std::cout;
using std::cin;
using std::endl;
class Car
{
public:
    void shift_gear()
    {
        cout<<"car class shift gear\n";   //old technique
    }
};
class Sports_car
{
public:
   void shift_gear()
   {
       cout<<"super car shift gear\n";  //new technique gear shift
   }
};
int main()
{
    Sports_car audi;
    audi.shift_gear();
    return 0;
}
