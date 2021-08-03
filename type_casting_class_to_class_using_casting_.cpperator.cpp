#include<iostream>
using namespace std;
class Ms
{
    int ms;
public:
    void showms()
    {
        cout<<"meters= "<<ms;
    }
    void setms(int ms)
    {
        this->ms=ms;
    }

};
class Km
{
    int km;
public:
    void setkm(int km)
    {
        this->km=km;
    }
    void showkm()
    {
        cout<<"kilometers= "<<km<<endl;
    }
    operator Ms()
    {
        Ms m;
        m.setms(km*1000);
        return m;
    }
};
int main()
{
    Km k1;
    k1.setkm(1);
    Ms m1;
    m1=k1;
    k1.showkm();
    m1.showms();
}
