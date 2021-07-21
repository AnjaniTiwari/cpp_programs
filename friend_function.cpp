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
        cout<<n1<<" "<<n2<<endl;
    }
    friend void add(Complex); //friend function declaration
};

int main()
{
    Complex c1;
    c1.setData(1,2);
    c1.showData();
    add(c1);     //friend function call

}
void add(Complex c)  //friend function definition
{
   cout<<"sum ="<<c.n1+c.n2;
}
