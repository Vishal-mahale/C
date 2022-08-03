#include<stdio.h>
int main()
{
    int i,j,temp,cnt = 0;
    int arr[10] = {334,56,7,0,88,45,23,90};
    int swap;
   
    for ( i = 0; i < 8; i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\nAfter sorting\n");
     
    /*  
    for ( i = 1; i < 8; i++)
    {
        for ( j = 0; j < 8-i; j++)
        {    swap = 0;
            if (arr[j]>arr[j+1])
            {
                temp = arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
                swap = 1;
                cnt++;    
            }
            
        }
        
    }
     for ( i = 0; i < 8; i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("%d",cnt);
    */ 
   
   

  /*  for ( i = 1; i < 8; i++)
    {
        temp = arr[i];
        
        for ( j = i-1; j>=0 && temp<arr[j] ; j--)
        {
            arr[j+1] = arr[j];
        }
        arr[j+1] = temp;
    }
    */

    for ( i = 0; i < 8; i++)
    {
        printf("%d\t",arr[i]);
    }
        
}
