#include<stdio.h>
int main()
{
    int num1,num2,i,j;
    printf("Enter two numbers\n");
    scanf("%d %d",&num1,&num2);
    for(i=1;i<=10;i++)
    {   printf("\n");
        for(j=num1;j<=num2;j++)
        {
            printf("%d*%d= %d\t",j,i,i*j);
        }
    }
    return 0;
}