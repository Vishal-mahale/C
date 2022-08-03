#include<stdio.h> 
int main() 
{ 
char ch; 
int count=0; 
while((ch=getchar())!=EOF) 
 count++; 
 
printf("\nTotal characters = %d", count); 
return 0;
} 