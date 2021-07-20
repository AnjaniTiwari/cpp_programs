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
        cout<<"\nsum is "<<n1+n2;
    }
//    Complex add(Complex c)
//    {
//        Complex temp;
//        temp.n1=c.n1+n1;
//        temp.n2=c.n2+n2;
//        return temp;
//    }

    Complex operator+(Complex c)    //operator overloading
    {
        Complex temp;
        temp.n1=c.n1+n1;
        temp.n2=c.n2+n2;
        return temp;
    }
};
int main()
{
    Complex c1,c2,c3;
    c1.setData(1,2);
    c2.setData(3,4);
//    c3=c2.add(c1);
    c3=c1+c2;           //operator overloading
    c3.showData();
    return 0;
}
