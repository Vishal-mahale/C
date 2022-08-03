//Write a program which accepts a number and checks if the number is a palindrome
#include<stdio.h>
int main()
{
    int num,d,rev=0,a;
    printf("Enter the number to check\n");
    scanf("%d",&num);
    a=num;
    while(num>0)
    {
        d=num%10;
        num=num/10;
        rev=rev*10+d;
    }
    if(a==rev)
       printf("Number is palindrome\n");
    else
       printf("Number is not palindrome");

  return 0;          
}