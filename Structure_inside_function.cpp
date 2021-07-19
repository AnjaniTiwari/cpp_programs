#include<iostream>
using namespace std;
struct student
{
    int s_id,s_age;
    char s_name[20];

    void input_student_data()
    {
      cout<<"Enter student id name and age:"<<endl;
      cin>>s_id>>s_name>>s_age;
    }

    void display()
    {
       cout<<endl;
       cout<<s_id<<" "<<s_name<<" "<<s_age<<endl;
    }

};

void input_student_data();
void display();

int main()
{
    student s1;
    s1.input_student_data();
    s1.display();
    return 0;
}

