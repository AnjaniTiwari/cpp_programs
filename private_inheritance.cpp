#include<iostream>
using namespace std;
class a
{
protected:
    int a;
};
class b:private a
{
public:
    void set_a(int n){
       a=n;
    }
    void show_a(){
        cout<<a;
    }

};
    int main()
{
    b o1;
    o1.set_a(5);
    o1.show_a();
}
