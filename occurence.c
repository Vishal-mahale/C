#include<stdio.h>
int main()
{
    int a[25],n,temp,j,i,count=0;
    printf("Enter how many elements\n");
    scanf("%d",&n);
    printf("Enter elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
  /*  for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    */
    for(i=j;i<n;)
    {    
        count=0;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
            }
        }
       
        printf("%d : %d",a[i],count);
        
    }

    return 0;
}