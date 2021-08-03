#include<iostream>
using namespace std;
class Student
{
    string name;
    int id;
public:
    void set_student_data(int id,string name){
    this->name=name;
    this->id=id;
    }
    void show_student_data(){
    cout<<" id: "<<id<<" name: "<<name;
    }
};
int main()
{
    pair <int,string>p1;
    pair <string,float>p2;
    pair <int,Student>p3;
    p1=make_pair(1,"swapnil");
    p2=make_pair("c++",399.9f);
    Student s1;
    s1.set_student_data(23,"Ram");
    p3=make_pair(1,s1);
    cout<<"rollno: "<<p1.first<<" name: "<<p1.second;
    cout<<"\nbook: "<<p2.first<<" price: "<<p2.second;
    cout<<"\nno: "<<p3.first;
    Student s=p3.second;
    s.show_student_data();


    pair <int,string> p4(1,"mack");
    pair <int,string> p5(2,"martin");
    if(p4==p5)
        cout<<"\nsame";
    else
        cout<<"\nnot same";
    return 0;

}
