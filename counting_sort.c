#include<stdio.h>
void CountingSort(int arr[],int B[],int n,int k)
{
    int C[10],i;
    for ( i = 0; i < 10; i++)
    {
        C[i] = 0;
    }
     
    for (i = 0; i <= 15; i++)
    {
        C[arr[i]] += 1;
    }
    
    for ( i = 1; i < 10; i++)
    {
        C[i] = C[i]+C[i-1];
    }

    for ( i = n-1; i >= 0; i--)
    {
        B[C[arr[i]]-1] = arr[i];
        C[arr[i]] -= 1;   
    }
    


}
int main()
{
    int arr[] = {6,3,5,1,9,8,7,5,4,0,0,1,3,6,7},B[15],k=10;

    printf("\nBefore sorting\n");
    for (int i = 0; i <= 15; i++)
    {
        printf("%d\t",arr[i]);
    }

    CountingSort(arr,B,15,k);

    printf("\nAfter sorting\n");
    for (int i = 0; i <= 15; i++)
    {
        printf("%d\t",B[i]);
    }
    
    return 0;
}