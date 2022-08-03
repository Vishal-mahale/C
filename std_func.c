/*Write a program, which accepts a character from the user and checks if it is an alphabet, digit 
or punctuation symbol. If it is an alphabet, check if it is uppercase or lowercase and then change 
the case.
*/
#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    printf("Enter the chracter\n");
    scanf("%c",&ch);
    if(isalpha(ch))
    {
        if(islower(ch))
        {
            printf("%c is lowercase character\n",ch);
            printf("Uppercase caracter is %c",toupper(ch));
        }
        else
        {
            printf("%c is uppercasse character\n",ch);
            printf("Lowercase character is %c\n",tolower(ch));
        }
    }
    if(isdigit(ch))
    {
        printf("Character i a digit\n");
    }
    if(ispunct(ch))
    {
        printf("Character is punctuation mark");
    }
    return 0;
}