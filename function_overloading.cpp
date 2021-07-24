#include<iostream>
#include<cstring>
using std::cout;
using std::cin;
using std::endl;
class Person
{
    char name[20];
public:
    void set_name(char *name)
    {
        strcpy(this->name,name);
    }
    void show_name()
    {
        cout<<"\nname: "<<this->name;
    }
};
class Student:public Person
{
    int rollno;
 public:
     void set_rollno(int rollno)
     {
         this->rollno=rollno;
     }
     void show_rollno()
     {
         cout<<"rollno: "<<this->rollno;
     }

};
int main()
{
    Student s1;
    s1.set_name("abc");
    s1.set_rollno(1);
    s1.show_rollno();
    s1.show_name();
    return 0;
}
