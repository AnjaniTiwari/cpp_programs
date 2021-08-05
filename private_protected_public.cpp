#include<iostream>
#include<string.h>
using namespace std;
class person
{
private:
    char name[20];
protected:
    void set_name(char *n){
        strcpy(name,n);
    }
    char* show_name(){
        return name;
    }
};
class employee :public person
{
private:
    float salary;
protected:
    void set_salary(float s){
    salary=s;
    }
    float show_salary(){
        return salary;
    }
public:
    void set_employee_name_salary(char *name,float salary){
        set_name(name);
        set_salary(salary);
    }
    void show_employee_name_salary(){
        cout<<"name: "<<show_name()<<endl;
        cout<<"salary: "<<show_salary();
    }
};
int main()
{
    employee e1;
    e1.set_employee_name_salary("rahul",50000);
    e1.show_employee_name_salary();
    return 0;
}
