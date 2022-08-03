/*Write a function isPrime, which accepts an integer as parameter and returns 1 if the number 
is prime and 0 otherwise. Use this function in main to display the first 10 prime numbers. */
int isPrime(int num)
{   flag=0;
    for(i=2;i<num/2;i++)
    {
        if(num%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
        return 1;
    else
        return 0;

}
#include<stdio.h>
int main()
{  
    int num,i,p;
    printf("Enter the numbers\n");
    scanf("%d",&num);
    for(int i=0;i<10;i++)
    {
        p=isPrime(num);
        if(p==1)
        printf("");

    }
   
   
    
    return 0;        
}