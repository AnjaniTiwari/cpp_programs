#include<iostream>
#include<cstring>
using std::cout;
using std::cin;
using std::endl;
class Add
{
public:
    void add(int a,int b)
    {
        cout<<"Answer "<<a+b<<" run 1st"<<endl;
    }
    void add(double a,double b)
    {
        cout<<"Answer "<<a+b<<" run 2nd"<<endl;
    }
};
int main()
{
    Add obj;
    obj.add(1.2,2.3);
}

