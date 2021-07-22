#include<iostream>
using namespace std;
class Complex
{
private:
    int n1,n2;
public:
    void setData(int a,int b)
    {
        n1=a;n2=b;
    }
    void showData()
    {
        cout<<n1<<" "<<n2;
    }
    friend Complex operator+(Complex,Complex);

};
Complex operator+(Complex x,Complex y)
{
    Complex temp;
    temp.n1=x.n1+y.n1;
    temp.n2=x.n2+y.n2;
    return temp;
}
int main()
{
    Complex c1,c2,c3;
    c1.setData(1,2);
    c2.setData(3,4);
    c3=operator+(c1,c2);
    c3.showData();
    return 0;
}
