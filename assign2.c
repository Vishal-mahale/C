#include<stdio.h>
#include<string.h>
int main()
{
    char string[200],ch;
    int n,i,j,count;
    printf("Enter the string\n");
    gets(string);
    n=strlen(string);
    
    for(i=0;i<n;i++)
    {
        count=1;
        if(string[i])
        {
          for(j=i+1;j<n;j++)
           {
               if(string[i]==string[j])
               {
                  count++;
                  string[j]='\0';
                
               }
            }
             printf("%c %d\n",string[i],count);
        }    
       
    }
    return 0;        
}