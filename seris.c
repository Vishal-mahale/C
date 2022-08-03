/*Write a program to accept real number x and integer n and calculate the sum of first n terms 
of the series x+ 3x+5x+7x+… */
#include<stdio.h>
int main()
{
    int i,num,x,sum=0,p=1;
    printf("Enter how many terms\n");
    scanf("%d",&num);
    printf("Enter the value of x\n");
    scanf("%d",&x);
    num=num*2;
    for(i=1;i<=num;)
    {    
        sum=sum+(i*x);
        i=i+2;
    }
    printf("Sum of the terms in seris is %d",sum);
    return 0;
}