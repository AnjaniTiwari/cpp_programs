#include<iostream>
using namespace std;
class Complex
{
private:
    int n1,n2;
    friend istream& operator>>(istream&,Complex&);
    friend ostream& operator<<(ostream&,Complex);

};
int main()
{
    Complex c1,c2;
    cin>>c1>>c2;
    cout<<c1<<c2;
    return 0;
}
istream& operator>>(istream &dataIn,Complex &obj)
{
    cout<<"Enter a complex no:";
    dataIn>>obj.n1>>obj.n2;         //cin>>obj.n1>>obj.n2;
    return dataIn;                  //return cin;
}
ostream& operator<<(ostream &dataOut,Complex obj)
{
    dataOut<<obj.n1<<" "<<obj.n2<<endl; //cout<<obj.n1<<" "<<obj.n2<<endl;
    return dataOut;                     //return cout;
}

