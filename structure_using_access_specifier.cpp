#include<iostream>
using namespace std;
struct student
{
private:
    int id,age;
    char name[20];
public:
    void input()
    {
       cout<<"Enter student id name and age:\n";
       cin>>id>>name>>age;
    }
    void display()
    {
        cout<<"\n"<<id<<" "<<name<<" "<<age<<"\n";
    }
};
int main()
{
    student s1;
    //s1.id=1;        //structure private member not access outside from structure
    s1.input();
    s1.display();
    return 0;
}

