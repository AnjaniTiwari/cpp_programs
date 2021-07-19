#include<iostream>
struct student
{
    int s_id,s_age;
    char s_name[20];

};
using namespace std;
student input_student_data();
void display(student);
int main()
{
    student s1;
    s1=input_student_data();
    display(s1);
    return 0;
}
student input_student_data()
{
    student s;
    cout<<"Enter student id name and age";
    cin>>s.s_id>>s.s_name>>s.s_age;
    return s;
}
void display(student s)
{
    cout<<s.s_id<<" "<<s.s_name<<" "<<s.s_age<<"\n";
}

