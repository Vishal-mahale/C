#include<stdio.h>
int main(){

    int i,j,m,n;
    char ch,ch1;

    printf("Enter no of rows and coloumn \n");
    scanf("%d %d",&m,&n);
    for(i=0;i<m;i++)
    {     ch='a';
          ch1='A';
        printf("\n");
        for(j=0;j<n;j++)
        {  
           
            if(i%2==0)
          {   
             printf("%c ",ch1++);
          }
          else
          {
              printf("%c ",ch++);
          }
        }
    }
    return 0;
}
