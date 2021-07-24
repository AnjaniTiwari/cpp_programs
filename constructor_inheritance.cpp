#include<iostream>
using std::cout;
using std::cin;
class A
{
    public:
    A()
    {
        cout<<"Constructor run A\n";
    }
};
class B:public A
{
    public:
    B()
    {
        cout<<"Constructor run B\n";
    }
};
int main()
{
 B b1;
 return 0;
}
