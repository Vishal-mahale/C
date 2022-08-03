#include<stdio.h>
#include<string.h>
int main()
{
   int num,d,n;
   char arr1[10][10]={"","one","two","three","four","five","six","seven","eight","nine"};
   char arr2[10][10]={"","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eihgteen","nineteen"};
   char arr3[10][10]={"","twenty","thirty","fourty","fifty","sixty","seventy","eighty","ninety"};
   printf("Enter the number\n");
   scanf("%d",&num);

   d=num/10;

   printf("%s",arr2[10][d]);
    
   return 0;    
}