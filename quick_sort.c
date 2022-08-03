#include<stdio.h>
#include<stdlib.h>

int partition(int arr[],int lb,int ub)
{
    int down=lb,up=ub,temp;
    int pivot = arr[down];

    while (down<up)
    {
        while (arr[down]<=pivot && down<=ub)
        {
            down++;
        }
        while (arr[up]>pivot)
        {
            up--;
        }
        if(down<up)
        {
            temp = arr[down];
            arr[down] = arr[up];
            arr[up] = temp;
        }
        arr[lb] = arr[up];
        arr[up] = pivot;
        return up;
    }
}

void quicksort(int arr[],int lb,int ub)
{
    int pos;
    if(lb<ub)
    {
        pos = partition(arr,lb,ub);
        quicksort(arr,pos+1,ub);
        quicksort(arr,lb,pos-1);
    }
}


int main()
{
    int n,i;
    int arr[8] = {34,5,4,1,45,97,89,7};
    
    printf("Before sorting\n");
    for ( i = 0; i < 8; i++)
    {
        printf("%d\t",arr[i]);
    }
    
   
    quicksort(arr,0,8);

    printf("After sorting\n");
    for ( i = 0; i < 8; i++)
    {
        printf("%d\t",arr[i]);
    }
    
}