#include<iostream>
using namespace std;
class Complex
{
private:
    int a,b;
public:
    void setData(int x,int y)
    {
        a=x;b=y;
    }
    void showData()
    {
        cout<<a<<" "<<b;
    }
    Complex operator-()
    {
        Complex temp;
        temp.a=-a;
        temp.b=-b;
        return temp;
    }
};
int main()
{
    Complex c1,c2;
    c1.setData(1,2);
    c2=-c1;           //c2=c1.operator-(); unary operator overloading
    c2.showData();
    return 0;
}

