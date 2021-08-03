#include<iostream>
using namespace std;
class A
{
    int a;
public:
    virtual ~A()
    {
        cout<<"A destructor";
    }
};
class B:public A
{
    int b;
public:
    ~B()
    {
        cout<<"B destructor\n";
    }
};
int main()
{
    A *p=new B;
    delete p;
    return 0;
}
