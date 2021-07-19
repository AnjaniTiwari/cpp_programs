#include<iostream>
#include<cstring>
using namespace std;
class student
{
private:
    int id,age;
    char name[20];
public:
    void show_data()
    {
        cout<<id<<" "<<name<<" "<<age<<endl;
    }
   void set_data(int,char*,int); //declaration inside class compulsory
};

// student => is membership lable :: =>scope resolution
void student :: set_data(int i,char n[],int a)
    {
        id=i;
        strcpy(name,n);
        age=a;
    }
int main()
{
    student s1;
    s1.set_data(1,"abc",20);
    s1.show_data();
    return 0;
}
