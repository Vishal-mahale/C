#include<stdio.h>
int main()
{
    int n,i,*p,arr[10];
    p=arr;
    printf("Enter how many elements\n");
    scanf("%d",&n);
    printf("Enter elements\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter elements\n");
    for ( i = 0; i < n; i++)
    {
        printf("%d\t",*(p+i));
    }
    printf("\nElements in the reverse order are\n");
    for ( i = n-1; i >= 0; i--)
    {
        printf("%d\t",*(p+i));
    }
    return 0;
}