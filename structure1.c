/*. Create a structure student (roll number, name, marks of 3 subjects, percentage). Accept 
details of n students and write a menu driven program to perform the following operations. Write 
separate functions for the different options. 
i) Search 
ii) Modify 
iii) Display all student details 
iv) Display all student having percentage > _____ 
v) Display student having maximum percentage 
*/
#include<stdio.h>
struct student
{
    int rollno;
    char name[10];
    int marks[3];
    float per;
};
void acceptDetails(struct student std[],int num)
{   int i,total=0,j;
    float per=0.0;
     for(i=0;i<num;i++)
    {   total=0;
        per=0.0;
        printf("Enter roll no\n");
        scanf("%d",&std[i].rollno);
        printf("Enter name of student\n");
        scanf("%s",&std[i].name);
        printf("Enter marks of 3 subjects\n");
        for(j=0;j<3;j++)
        {
            printf("subject %d\t",j+1);
            scanf("%d",&std[i].marks[j]);
            total+=std[i].marks[j];
        }
        std[i].per=total/3;
    }
}
void displayDetails(struct student std[],int num)
{
    int i,j;
    printf("\nDetails of students are\n");
    for(i=0;i<num;i++)
    {
        printf("Student %d:  ",i+1);
        printf("Rollno-%d name-%s \n",std[i].rollno,std[i].name);
        printf("Marks\n");
        for(j=0;j<3;j++)
        {
            printf("\nSubject %d - %d",j+1,std[i].marks[j]);
        }
        printf("\nPercentage %f\n",std[i].per);
        printf("\n");
    }

}
int main()
{
    int num,i,j;
    struct student std[10];
    printf("Enter how many student\n");
    scanf("%d",&num);
    acceptDetails(std,num);
    displayDetails(std,num);
   
   
}