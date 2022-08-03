#include<iostream>
using namespace std;
class fraction
{
   int numer,denom;
  public:
   fraction(int n,int d)
   {
      numer=n;
      denom=d;
    }
    /*fraction()
    {
      numer=0;
      denom=1;

    }*/
    void display()
    {
       cout<<numer<<"/"<<denom<<endl;  
    }

};
int main()
{
  fraction f1,f2(1,2);
  f1.display();
   f2.display();
  // f3.display();
   return 0;

}
