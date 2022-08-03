#include<stdio.h>
int main()
{
    int num,i;
    printf("Enter the number\n");
    scanf("%d",&num);
    printf("Even numbers upto num are \n",num);
    for(i=0;i<num;i++)
    {
        if(i%2==0)
        {
            printf("%d\t",i);
        }
    }
    return 0;
}