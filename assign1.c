#include<stdio.h>
int main()
{
    int arr[10],n,i,j,k;
    printf("Enter how many elements\n");
    scanf("%d",&n);
    printf("Enter elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("After removing duplicate elements\n");
    for(i=0;i<n;i++)
    {
       for(j=i+1;j<n;j++)
       {
           if(arr[i]==arr[j])
           {
               for(k=j;k<n;k++)
               {
                   arr[k]=arr[k+1];
               }
               n--;
               j--;
          
           }
       }
    
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }   
    return 0;
}   