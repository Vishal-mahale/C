#include <iostream>
using namespace std;
class employee
{
public:
  int no;
  string name;

public:
  employee();
  employee(int n, string name);
  employee(const employee &emp);
  public:void display();
};
employee::employee()
{
  no = 1;
  name = "unknown";
}
employee::employee(int n,char *na)
{
     no = n;
     name = na;
}
employee::employee(const employee &emp)
{
  no = emp.no;
  name = emp.name;
}
void display()
{
  cout<<"name :"<<name<<"no :"<<no<<endl;
}
int main()
{
  employee emp(11,"vishal");
  emp.display();
  
}