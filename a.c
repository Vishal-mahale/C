#include<stdio.h>
#include<stdlib.h>
int maxsum(int p[],int num) //sum or sub  of max and min element from array.
{
    int i,j,max,min,sum=0;
    
    max=p[0];
    min=p[0];

    for(i=0;i<num;i++)
    {
       if(p[i]>=max)
         max=p[i];
       if(p[i]<=min)
        min=p[i];         
    }
    sum=max+min;
    return sum;
}
int sumofodd(int p[],int num)   //sum of all odd elements of an array.
{   int i,sum=0;
    for(i=0;i<num;i++)
    {
       if(p[i]%2!=0)
       {
           sum+=p[i];
       }

    }
    return sum;
}
void firstlast(int p[],int num,int n)  //function to find first and last occurence of element in array.
{
    int first=-1,last=-1,i;
    for(i=0;i<num;i++)
    {
        if(n==p[i])
        {
            if(first==-1)
                 first=i;
            else 
                 last=i;
        }
        
           
    }      
    if(last==-1)
        printf("Element not found\n");
    else
        printf("First =%d  last= %d\n",first,last);
}
int main()
{
    int *p,i,j,num,n;
    printf("Enter how many numbers\n");
    scanf("%d",&num);
    p=(int *)malloc(num*sizeof(int));
    printf("Enetr %d elements\n",num);
    for(i=0;i<num;i++)
    {
        
        scanf("%d",p+i);
    }
    j=maxsum(p,num);
    printf("The sum of max and min element is %d\n",j);
    printf("Sum of all odd elements is %d",sumofodd(p,num));
    printf("\nEnter element to find occurence in array ");
    scanf("%d",&n);
    firstlast(p,num,n);
    
    return 0;
}