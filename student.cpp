#include<iostream>
using namespace std;
class student
{   private:
           int rollno;
           string name;
           float percentage;

   public:

    student()
    {
         rollno=0;
         name="";
         percentage=0.0;
    }

    student(int no,string name,float per)
    {
        this->rollno=no;
        this->name=name;
        this->percentage=per;
    }

    student(student &std)
    {
        rollno=std.rollno;
        name=std.name;
        percentage=std.percentage;


    }
    void display()
    {
        cout<<"The details of the student are\n";
        cout<<"\nRollno: " <<rollno<<"\nName :"<<name<<"\nPercentage :"<<percentage<<endl;
    }

};
int main()
{   
    int rollno;
    string name;
    float percentage;

    cout<<"Enter the rollno, name and the percentage of the student \n";
    cin>>rollno>>name>>percentage;
    student std1(rollno,name,percentage);

  //student std2=std1;

    std1.display();
    std2.display();

    return 0;
}