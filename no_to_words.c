//Write a program, which accepts a number n and displays each digit in words. Example: 6702 
//Output = Six-Seven-Zero-Two.  
#include<stdio.h>
int main()
{
    long int num,d;
    long int rev=0;
    printf("Enter number\n");
    scanf("%d",&num);
  
    while(num!=0)
    {
       
        d=num%10;
        num=num/10;
        rev=rev*10+d;
      
    }
    
    while(rev!=0)
    {
        d=rev%10;
        rev=rev/10;
        switch(d)
        {
            case 0:printf("Zero\t");
                   break;
            case 1:printf("One\t");
                   break;       
            case 2:printf("Two\t");
                   break;
            case 3:printf("Three\t");
                   break; 
            case 4:printf("Four\t");
                   break;
            case 5:printf("Five\t");
                   break;       
            case 6:printf("Six\t");
                   break;
            case 7:printf("Seven\t");
                   break;
            case 8:printf("Eight\t");
                   break;  
            case 9:printf("Nine\t");
                   break;
           //default:printf("Invalid");        

        }
        
    }  
   return 0; 
}
