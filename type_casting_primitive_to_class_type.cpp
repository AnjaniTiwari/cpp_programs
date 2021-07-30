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
//    Complex()
//    {
//
//    }
//    Complex(int x)
//    {
//        a=x;
//        b=0;
//    }
    operator =(int x)
    {
      a=x;
    }
};
int main()
{
   Complex o1;
   o1.set_data(2,3);
   o1.show_data();
   int x=7;
   o1=x;
   cout<<endl;
   o1.show_data();
   return 0;
}
