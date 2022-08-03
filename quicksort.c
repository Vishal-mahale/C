#include<stdio.h>
int partition(int a[],int lb,int ub)
{
    int down=lb,up=ub,temp;
    int pivote=a[down];
    while (down<up)
    {
        while (a[down]<=pivote && down<=ub)
        {
            down++;
        }
        while (a[up]>=pivote && up>lb)
        {
            up--;

        }
        if(down<up)
        { 
            temp=a[down];
            a[down]=a[up];
            a[up]=temp;

        }
      
          a[lb]=a[up];
          a[up]=pivote;
          return up;
    }
}    
void quick(int a[],int lb,int ub)
{
    int pos;
    if(lb<ub)
    {
        pos=partition(a,lb,ub);
        quick(a,pos+1,ub);
        quick(a,lb,pos-1);
    }

}
int main()
{
    int n,i,a[10];
    int lb,ub;
    printf("Enter how many numbers to sort\n");
    scanf("%d",&n);
    printf("Enter numbers to sort\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    lb=0;
    ub=n-1;
    quick(a,lb,ub);
    printf("The numbers after sorting are\n");
    for ( i = 0; i < n; i++)
    {
        printf("%d\t",a[i]);
    }
    
    return 0;
}