#include <stdio.h>

void evenodd(int arr[],int *p1,int *p2,int n)
{
    int i;
    for ( i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0)
        {
            (*p1)++;
        }
        else
        {
            (*p2)++;
        }
    }
    printf("%d %d",*p1,*p2);

}
int main()
{
    int arr[20], n, evencnt = 0, oddcnt = 0, i;
    printf("Enter how many elements");
    scanf("%d", &n);
    printf("Enter elements\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    evenodd(arr,&evencnt,&oddcnt,n);
    return 0;
}