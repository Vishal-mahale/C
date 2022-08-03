#include<stdio.h>
int main()
{
    int num=1,d,temp,rev;
    printf("Armstrong numbers upto 500 are\n");
    while(num<500)
    {   
        temp=num; 
        rev=0;
        while(temp>0)
        {
            d=temp%10;
            temp=temp/10;
            rev=rev+d*d*d;
        }
        if(num==rev)
        {
            printf("%d\n",rev);
        }
        num++;
    }
    return 0;
}