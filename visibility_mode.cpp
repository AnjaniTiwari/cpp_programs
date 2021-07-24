#include<iostream>
#include<cstring>
using std::cout;
using std::cin;
class Person
{
private:
    char name[20];
protected:
    void set_data(char n[])
    {
        strcpy(name,n);
    }
    void show_data()
    {
        cout<<name;
    }

};
class Student:public Person
{
public:
    void set_value(char s[])
    {
        set_data(s);
    }
    void show_value()
    {
        show_data();
    }

};
int main()
{
    Student s1;
    s1.set_value("abc");
    s1.show_value();
    return 0;
}

