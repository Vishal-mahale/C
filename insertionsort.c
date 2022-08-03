#include<stdio.h>
void insertion(int a[],int n)
{
    int i,j,temp;
    for(i=1;i<n;i++)
    {   temp=a[i]; 
        for(j=i-1;j>=0 && temp<a[j];j--)  
        {                                 
            a[j+1]=a[j];

        }
        printf("*%d*",j);
        a[j+1]=temp;

    }
}
int main()
{     int a[10],i,n;
       printf("Enter how many numbers\n");
       scanf("%d",&n);
       printf("Enter numbers\n");
       for(i=0;i<n;i++)
       {
            scanf("%d",&a[i]);
       }
       insertion(a,n);
       printf("The numbers after sorting are \n");
       for(i=0;i<n;i++)
       {
           printf("%d\t",a[i]);
       }
}