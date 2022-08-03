#include<stdio.h>
int main()
{
    int arr[10],num,count=0,tempp;
    int i,j,temp;
    printf("Enter how many numbers\n");
    scanf("%d",&num);
    printf("Enter number %d\n",num);
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<num;i++)
    {
        for(j=0;j<num-1;j++)
        { 
           if(arr[j]>arr[j+1])
           {  temp=arr[i];
              arr[i]=arr[j+1];
              arr[j+1]=temp;
           }

        }
    }
    printf("sorted numbers in array\n");
    for(i=0;i<num;i++)
    printf("%d\t",arr[i]);
 
    printf("\nhow many times each number occure\n");
    for(i=0;i<num;i=j)
    {   
        tempp=arr[i];
        count=1;
        for(j=i+1;j<num;j++)
        {
            if(arr[j]!=tempp)
               break;
            else
              count++;
       
        }
        printf("%d %d\n",tempp,count);    

    }
    return 0;
}
