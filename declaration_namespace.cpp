#include<iostream>
using namespace std;
namespace myspace
{
    int a;
    int f1();
    class A
    {
    public:
        void fun();
    };
}
int myspace::f1()
{
    cout<<"f1 function a= "<<myspace::a;
}
void myspace::A::fun()
{
    cout<<endl<<"fun function";
}
using namespace myspace;
int main()
{
   a=10;
   f1();
   A o1;
   o1.fun();
   return 0;
}
