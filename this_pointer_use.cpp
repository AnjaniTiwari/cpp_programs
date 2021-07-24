
#include<iostream>
using std::cout;
class Box
{
    int l,b,h;
public:
    void set_dimension(int l,int b,int h)
    {
        this->l=l;
        this->b=b;
        this->h=h;
    }
    void show_dimension()
    {
        cout<<"l="<<l<<"\nb= "<<b<<"\nh= "<<h;
    }
};
int main()
{
  Box small_box;
  small_box.set_dimension(10,12,6);
  small_box.show_dimension();
  return 0;
}


