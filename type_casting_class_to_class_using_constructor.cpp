#include<iostream>
using namespace std;
class Foot
{
    int foot;
public:
    Foot()
    {
        foot=0;
    }
    void setfoot(int);
    void showfoot(void);
    int getfoot();
};
int Foot::getfoot()
{
    return foot;
}
void Foot::setfoot(int foot)
    {
        this->foot=foot;
    }
void Foot::showfoot()
    {
        cout<<"Foot= "<<foot;
    }
class Inches
{
   double inches;
   public:
       Inches()
       {
           inches=0.0;
       }
       Inches(Foot f)
       {
        inches=12*f.getfoot();
       }
       void setinches(double);
       void showinches(void);
};
void Inches::setinches(double inches)
{
    this->inches=inches;
}
void Inches::showinches()
{
    cout<<"Inches= "<<inches;
}
int main()
{
    Foot f1;
    f1.setfoot(3);
    f1.showfoot();
    Inches i1;
    i1=f1;
    i1.showinches();
}
