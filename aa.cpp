#include<iostream>
using namespace std;
class student
{
private:
    int roll;
    string name;
    double mob;

public:
    student();
    student(int n,string name,double mno);
    student(const student &st1);

    void accept();
    void display();
};

student::student(int n,string name,double mno)
{
    roll = n;
    name = name;
    mob = mno;
}
student::student(const student &std)
{
    roll = std.roll;
    name = std.name;
    mob = std.mob;
}
void student::accept()
{
    cout<<"Enter the roll no\n";
    cin>>roll;
    cout<<"Enter name\n";
    cin>>name;
    cout<<"Enter mob\n";
    cin>>mob;
}
void student::display()
{
    cout<<"Details of student\n";
    cout<<"Roll :"<<roll<<endl;
    cout<<"name :"<<name<<endl;
    cout<<"mob :"<<mob<<endl;

}
int main()
{
    student std(11,"   ",99979);
    std.display();
}



