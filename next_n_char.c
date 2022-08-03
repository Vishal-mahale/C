#include<stdio.h>
int main()
{   
    int num;
    char ch;
    printf("Enter the characer\n");
    scanf("%c",&ch);
    printf("Enter the number\n");
    scanf("%d",&num);
    printf("The next %d characters are \n",num);
    while(num>0)
    {
        printf("%c\t",ch++);
        num--;
    }
    return 0;
}