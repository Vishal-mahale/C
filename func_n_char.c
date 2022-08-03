/*Write a function, which accepts a character and integer n as parameter and displays the next 
n characters.*/
#include<stdio.h>
void nextnChar(int num,char ch)
{   int i;
    for(i=0;i<num;i++)
    {
        printf("%c\t",ch++);
    }

}
int main()
{
    int num;
    char ch;
    printf("Enter Character\n");
    scanf("%c",&ch);
    printf("How many next character  you want\n");
    scanf("%d",&num);
    printf("Next %d characters are\n",num);
    nextnChar(num,ch);
    return 0;
}