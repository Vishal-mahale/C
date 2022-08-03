#include<stdio.h>
#include<stdlib.h>
int main()
{
    int  *arr; 
    int n, sumOdd = 0, sumEven = 0,i,sum = 0;

    printf("Enter how many numbers\n");
    scanf("%d",&n);
    arr = (int *)malloc(n*sizeof(int));

    if(arr == NULL)
    {
        printf("Unable to allocate memeory\n");
        return -1;
    }
    printf("Enter %d elements\n",n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter elements are\n",n);
    for ( i = 0; i < n; i++)
    {
        printf("%d\t",arr[i]);
    }

    for ( i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0)
        {
            sumEven++;

        }
        else 
        {
            sumOdd++;
        }
    }
    
    sum = sumOdd - sumEven;
    printf("\nThe diffenence between sum of odd and even is : %d ",sum);
    
    return 0;
}