#include<iostream>
using namespace std;
class Account
{
  int balance;                  //instance member variable
  static float rateOfInterest;  // static member variable or class variable
  public:
  void setBalance(int b)
  {
      balance=b;
  }
  void showInterest()
  {
    cout<<"Account balance "<<balance<<endl<<"rate of interest is "<<rateOfInterest;
  }
};
float Account:: rateOfInterest=3.2f;
int main()
{
    Account a1;
    a1.setBalance(100);
    a1.showInterest();
}
