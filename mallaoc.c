#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,n1;
    int *a;
    
    printf("Enetr how many elements\n");
    scanf("%d",&n);
    
    a=(int *)malloc(n*sizeof(int));
    
    printf("Enter elements\n");
    for(i=0;i<n;i++)
   {
     scanf("%d",a+i);
   }
 /*  printf("The elements are\n");
   for(i=0;i<=n;i++)
    { 
   
     printf("%d\t",a[i]);
    
    }
*/
    printf("Entr how many more elements you want\n");
    scanf("%d",&n1);
    a=realloc(a,n1);

    printf("Enter elements\n");
    for(i=n;i<n1;i++)
   {
     scanf("%d",a+i);
   }
   printf("The elements are\n");
   for(i=0;i<n1+n;i++)
    { 
   
     printf("%d\t",a+i);
    
    }
   
   free(a);
   return 0;
}