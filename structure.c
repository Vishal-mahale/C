/*programe to ccept the details of the sudentusing stucture and display 
   the details of sutdent having percentage greater than 70%.*/
#include<stdio.h>
struct student
{ 
  int   rollno;
  char  name[20];
  int   marks[6];
  float per;
};
int main()
{
    int i,n,j;
    int sum;
    float per;
    struct student s[5];
    printf("Enter how many students\n");
    scanf("%d",&n);
    printf("Enter the details of %d students\n",n);
    for(i=0;i<n;i++)
    { 
      printf("Enter the rollno and  name of student %d\n",i+1);
      scanf("%d %s",&s[i].rollno,&s[i].name);
      printf("Enter the marks of 6 subject\n");
      sum=0;
      for(j=0;j<6;j++)
      {
        scanf("%d",&s[i].marks[j]);
        sum+=s[i].marks[j];

      }
    
     s[i].per=sum/6;
   
   }

    printf("The details of the student are\n");
    for(i=0;i<n;i++)
   {
      printf("the sum is %d",sum);
      printf("\nRollno-%d Name-%s Percentage=%f",s[i].rollno,s[i].name,s[i].per);
   }

  return 0;
}