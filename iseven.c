#include<stdio.h>
int isEven(int num)
{
    if(num%2==0)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int num,n,p;
    printf("\nEnter how many numbers\n");
    scanf("%d",&num);
    for(int i=0;i<=num;i++)
    {   
        printf("\nEnter number ");
        scanf("%d",&p);
        n=isEven(p);
        if(n==1)
        {
           printf("Entered number is even");
        }
        else
        {
            printf("Entered number is odd");
        }

    }
   
    return 0;
}