#include<iostream>
using namespace std;
class complex_no
{
private:
    int n1,n2;
public:
    void set_data(int a,int b)
    {
        n1=a;
        n2=b;
    }
    void show_data()
    {
        cout<<endl<<n1<<" "<<n2;
    }
    complex_no add(complex_no o)
    {
        complex_no temp;
        temp.n1=n1+o.n1;
        temp.n2=n2+o.n2;
        return temp;
    }
};
int main()
{
    complex_no o1,o2,o3;
    o1.set_data(3,4);
    o2.set_data(5,6);
    o3=o1.add(o2);
    o3.show_data();
    return 0;
}
