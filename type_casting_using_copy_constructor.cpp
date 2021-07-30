#include<iostream>
using namespace std;
class Complex
{
    int a,b;
public:
    void set_data(int a,int b)
    {
        this->a=a;
        this->b=b;
    }
    void show_data()
    {
        cout<<"a= "<<a<<endl<<"b= "<<b;
    }
    operator int()
    {
        return a;
    }
};
int main()
{
   Complex o1;
   o1.set_data(2,3);
   o1.show_data();
   int x;
   x=o1;
   cout<<endl;
   cout<<"x= "<<x;
   return 0;
}
