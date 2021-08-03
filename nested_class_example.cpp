#include<iostream>
#include<cstring>
using namespace std;
class Student{
    int rollno;
    char name[20];
    class Address{
        int flatno;
        char street[20];
        char city[20];
        char pincode[7];
        public:
            void setaddress(int f,char *s,char *c,char *p){
                flatno=f;
                strcpy(street,s);
                strcpy(city,c);
                strcpy(pincode,p);
            }
            void showaddress(){
                cout<<"Address:"<<endl;
                cout<<"flatno "<<flatno<<" ";
                cout<<"street "<<street<<endl;
                cout<<"city "<<city<<" ";
                cout<<"pincode "<<pincode;
            }
    };
    Address a1;
    public:
        void setrollno(int r){
            rollno=r;
        }
        void setname(char *n){
            strcpy(name,n);
        }
        void setaddress(int f,char *s,char *c,char *p){
            a1.setaddress(f,s,c,p);
        }
        void showrollno(){
            cout<<"rollno: "<<rollno<<endl;
        }
        void showname(){
            cout<<"name: "<<name<<endl;
        }
        void showaddress(){
            a1.showaddress();
        }
};
int main(){
    Student s1;
    s1.setname("abc");
    s1.setrollno(1);
    s1.setaddress(501,"abc","mumbai","400086");
    s1.showrollno();
    s1.showname();
    s1.showaddress();
    return 0;
}