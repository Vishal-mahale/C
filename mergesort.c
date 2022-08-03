#include<stdio.h>
void merge(int a[],int l1,int u1,int l2,int u2)
{  
    int i=l1,j=l2,b[10],k=0;
   
    while(i<=u1 && j<=u2)
    {
      if(a[i]>=a[j])
      {
          b[k]=a[j];
          j++;
          k++;
      }
      else
      {
          b[k]=a[i];
          k++;
          i++;

      }
   }  
   while (i<=u1)
      {
          b[k]=a[i];
          i++;
          k++;
      }
   while (j<=u2)
      {
          b[k]=a[j];
          k++;
          j++;
      }
    k=0;  
    for(i=l1;i<=u2;i++,k++)
    {
       a[i]=b[k];
    }   
      
}
void mergesort(int a[],int lb,int ub)
{
     int mid;
     if(lb<ub)
     {
           mid=(lb+ub)/2;
           mergesort(a,lb,mid);
           mergesort(a,mid+1,ub);
           merge(a,lb,mid,mid+1,ub);
     }
}
int main()
{
   int n,i,a[10];
   printf("Enter how many numbers\n");
   scanf("%d",&n);
   printf("Enter numbers\n");
   for(i = 0; i < n; i++)
   {
       scanf("%d",&a[i]);
   }
   printf("Numbers after sorting are\n");
   mergesort( a,0,n-1);
   for (i=0; i<n; i++)
   {
       printf(" %d \t", a[i]);
   }
  return 0;   
}