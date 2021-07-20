#include<iostream>
using namespace std;
class Complex
{
private:
    int n1,n2;
public:
    void setData(int a,int b)
    {
        n1=a;
        n2=b;
    }
    void showData()
    {
        cout<<"sum ="<<n1+n2;
    }
    Complex(Complex &c) //copy constructor
    {
        c.showData();
    }
    Complex()
    {

    }

};
int main()
{
    Complex c1,c2;
    c1.setData(3,4);
    c2=Complex(c1);    //Complex c2(c1);
    return 0;
}
