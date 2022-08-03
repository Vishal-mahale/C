#include<stdio.h>
int power(int num,int i)
{   int ans=1;
    while(i>0)
    {
        ans*=num;
        i--;
    }
    return ans;
}
int main()
{   
    int num,x,i;
    float sum=0,p;
    printf("Enter how many terms\n");
    scanf("%d",&num);
    printf("Enter the value of x\n");
    scanf("%d",&x);
    for(i=1;i<=num;i++)
    {   p=power(x,i);
        sum=sum+(i/p);
    }
    printf("The sum of %d terms of seris is %f",num,sum);
    return 0;
}
