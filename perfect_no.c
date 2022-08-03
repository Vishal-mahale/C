#include<stdio.h>
int main()
{
    int num,sum,i,a,j;
    printf("Enter the number\n");
    scanf("%d",&num);
    printf("Perfect number upto %d are\n",num);
    for(j=1;j<=num;j++)
    {
        sum=0;
        for(i=1;i<=j/2;i++)
        {
            if(j%i==0)
            {
                sum=sum+i;
            }
        }  
        if(sum==j)
        {
            printf("%d\t",j);
        }

    }   
    return 0;
}