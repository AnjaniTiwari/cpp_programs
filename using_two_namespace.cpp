#include<iostream>
#include"myspace.h";
using namespace std;
namespace newmyspace
{
    using namespace myspace;
    fun(){
    cout<<"run fun\n";
    }
}
void myspace::A::f1()
{
    myspace::A::a=1;
    cout<<"f1 function a="<<myspace::A::a<<endl;
}
using namespace newmyspace;
int main()
{
  A o1;
    o1.f1();
    fun();
}
//namespace myspace
//{
//    class A
//    {
//        public:
//        int a;
//        f1();
//    };
//}
