#include<iostream>
#include<cstring>
using namespace std;
class Mystring
{
    char *s;
public:
    Mystring(char *p)
    {
        int size=strlen(p);
        s=new char[size+1];
        strcpy(s,p);
    }
    void getstring()
    {
        cout<<s;
    }
    ~Mystring()
    {
        cout<<"\ndestructor work";
        delete s;
    }

};
int main()
{
    Mystring s1("Abc");
    s1.getstring();
    return 0;
}
