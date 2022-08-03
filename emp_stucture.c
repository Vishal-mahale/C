/*. Create a structure employee (id, name, salary). Accept details of n employees and write a 
menu driven program to perform the following operations. Write separate functions for the 
different options. 
i) Search by name 
ii) Search by id 
iii) Display all 
iv) Display all employees having salary > _____ 
v) Display employee having maximum salary 
Instructor should fill in the blanks with appropriate values. 
Signature of the instructor Dat*/
#include<stdio.h>
#include<string.h>
struct emp
{
    int id;
    char name[10];
    float salary; 
};
void accept(struct emp e[],int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        printf("Enter employee id\n");
        scanf("%d",&e[i].id);
        printf("Enter employee name\n");
        scanf("%s",&e[i].name);
        printf("enter employee salary\n");
        scanf("%f",&e[i].salary);

    }
}
void display(struct emp e[],int n,int i)
{
    printf("%d\t",e[i].id);
    printf("%s\t\t",e[i].name);
    printf("%f\t",e[i].salary);
    printf("\n");
}
int searchByid(struct emp e[],int n,int empid)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(empid==e[i].id)
        {
            return i;
        }
    }
    return 0;
}
int searchByname(struct emp e[],int n,char empname[])
{
    int i;
    for(i=0;i<n;i++)
    {
        if(strcmp(empname,e[i].name)==0)
        {
            return i;
        }
    }
    return 0;   
}
void maxSalary(struct emp e[],int n)
{
    int i,p;
    float max=0.0;
    for(i=0;i<n;i++)
    {
        if(e[i].salary>max)
        {
            max=e[i].salary;
            p=i;
        }
    }
    display(e,n,p);
}
void salary(struct emp e[],int n,float sal)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(sal<=e[i].salary)
        {
            display(e,n,i);

        }
    }
}
int main()
{
    struct emp e[10];
    char empname[10];
    int i,j,n,empid,p,q;
    float sal;
    printf("Enter how many employee\n");
    scanf("%d",&n);
    accept(e,n);
    printf("Details of the employee are\n");
    printf("id   name    salary\n");
    for(i=0;i<n;i++)
    display(e,n,i);
    printf("Enter Employee id to search");
    scanf("%d",&empid);
    p=searchByid(e,n,empid);
    if(p==0)
    {
        printf("not found\n");
    }
    else
    {
       display(e,n,p); 
    }
    printf("Enter the name you want to search\n");
    scanf("%s",&empname);
    q=searchByname(e,n,empname);
    if(q==0)
    {
        printf("not found\n");
    }
    else
    {
        display(e,n,i);
    }
    printf("Employee having maximum salary\n");
    maxSalary(e,n);
    printf("Enter salary to find salary greater than that salary\n");
    scanf("%f",&sal);
    salary(e,n,sal);
    return 0;
}