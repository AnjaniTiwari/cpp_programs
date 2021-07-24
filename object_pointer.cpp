#include<iostream>
using std::cout;
class Box
{
    int L,B,H;
public:
    void set_dimension(int l,int b,int h)
    {
        L=l;
        B=b;
        H=h;
    }
    void show_dimension()
    {
        cout<<"L="<<L<<"\nB= "<<B<<"\nH= "<<H;
    }
};
int main()
{
  Box *p,small_box;
  p=&small_box;
  p->set_dimension(10,12,6);
  p->show_dimension();
  return 0;
}


