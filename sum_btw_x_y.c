#include<stdio.h>
int main()
{
    int num1,num2,sum=0,i;
    printf("Enter two numbers\n");
    scanf("%d %d",&num1,&num2);
    for(i=num1;i<=num2;i++)
    {
        sum+=i;
    }
    printf("The sum of numbers between %d and %d is %d\t",num1,num2,sum);
    return 0;
}