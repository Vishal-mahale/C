#include<stdio.h>
int main()
{
    int num1,num2,i,j,count;
    printf("Enter two numbers\n");
    scanf("%d %d",&num1,&num2);
    printf("Prime numbers bteween %d and %d are\n",num1,num2);
    for(i=num1;i<=num2;i++)
    {
        count=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
        if(count==2)
        {
            printf("%d\t",i);
        }
    }
    return 0;
}