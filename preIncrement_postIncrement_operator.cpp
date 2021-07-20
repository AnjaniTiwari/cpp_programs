#include<iostream>
using namespace std;
class Increment
{
private:
    int a;
public:
    void setData(int x)
    {
        a=x;
    }
    void showData()
    {
        cout<<a<<endl;
    }
    Increment operator++()
    {
        Increment temp;
        temp.a=++a;
        return temp;
    }
    Increment operator++(int) //int parameter for compiler deference between both function
    {
      Increment temp;
      temp.a=a++;
      return temp;
    }
};
int main()
{
    Increment n1,n2,n3;
    n1.setData(2);
    n2=++n1;
    n1.showData();
    n2.showData();
    n3=n1++;
    n1.showData();
    n3.showData();
    return 0;
}
