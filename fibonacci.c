#include<stdio.h>
int main()
{
    int num1,num2,num3,i,n;
    printf("Enter how number you want in seris\n");
    scanf("%d",&n);
    num1=1;
    num2=1;
    printf("%d\t%d\t",num1,num2);
    for(i=0;i<n;i++)
    {
        num3=num2+num1;
        printf("%d\t",num3);
        num1=num2;
        num2=num3;
    }
    return 0;
}