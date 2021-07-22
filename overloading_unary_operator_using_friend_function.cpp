#include<iostream>
using namespace std;
class Num
{
private:
    int n;
public:
    void setData(int x)
    {
        n=x;
    }
    void showData()
    {
        cout<<n;
    }
    friend Num operator++(Num,int num);
    friend Num operator++(Num);

};
int main()
{
    Num n1,n2;
    n1.setData(5);
    n2=n1++;        //n2=operator++(n1);
    n2.showData();
    n2=++n1;        //n2=operator++(n1);
    n2.showData();
    return 0;
}
Num operator++(Num x)
{
    Num temp;
    temp.n=++x.n;
    return(temp);
}
Num operator++(Num x,int num)
{
    Num temp;
    temp.n=x.n++;
    return(temp);
}
