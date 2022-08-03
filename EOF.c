//Write a program to accept characters till the user enters EOF and count number of alphabets 
//and digits entered. 
#include<stdio.h>
int main()
{   int count=0,cnt=0;
    char ch;
    while((ch=getchar())!=EOF)
    if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z')
       count++;
    if(ch<=9&&ch>=0)
       cnt++;   
    


    printf("%d\t",count);
     printf("%d",cnt);
    
    return 0;
}