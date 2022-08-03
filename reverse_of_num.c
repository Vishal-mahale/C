#include<stdio.h>
int main()
{
    int num,rev=0,d;
    printf("Enter the number\n");
    scanf("%d",&num);
    while(num>0)
    {
        d=num%10;
        num=num/10;
        rev=rev*10+d;
    }
    printf("The reverse of the number is \n %d",rev);
    return 0;
}