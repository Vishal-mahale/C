#include<stdio.h>
int main()
{
  int num,p,count=0,sum=0;
  printf("Enter the number\n");
  scanf("%d",&num);
  while(num>0)
  {
    p=num%10;
    num=num/10;
    count++;
    sum=sum+p;
  }
  printf("Sum of digits in the number is %d\n",sum);
  printf("The number of digits in the number is %d",count);
}