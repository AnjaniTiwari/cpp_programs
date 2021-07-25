#include<iostream>
using std::cout;
class A
{
public:
    virtual void f1()
    {
        cout<<"A class";
    }
};
class B:public A
{
public:
    void f1()
    {
        cout<<"B class";
    }
};
int main()
{
    A obj1,*p;
    B obj2;
    //obj2.f1();
    p=&obj2;
    p->f1();
    return 0;
}
