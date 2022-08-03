#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 20
struct stack
{
    char arr[SIZE];
    int top;
};
int isempty(struct stack *t)
{
    return t->top == -1;
}
int isfull(struct stack *t)
{
    return t->top == SIZE -1;
}
void initstack(struct stack *t)
{
    t->top = -1;
}
void push(struct stack *t,char s[])
{
    if(isfull(t))
    {
        printf("Stack is full\n");
        exit(1);
    }
    for (int i = 0; i < strlen(s); i++)
    {
        t->arr[++t->top] = s[i];
    }
    
    
}
char pop(struct stack *t)
{
    if(isempty(t))
    {
        printf("Stack  underflow\n");
        exit(1);
    }

    return t->arr[t->top--];

}
char stacktop(struct stack *t)
{
    if(isempty(t))
    {
        printf("Stack is underflow\n");
        exit(1);
    }
    return t->arr[t->top];
}
void display(struct stack *t)  
{  
    int i;
    for (i=t->top;i>=0;i--)  
    {  
        printf("%c\t",t->arr[i]);  
    }  
    if(isempty(t))   
    {  
        printf("Stack is empty");  
        
    }  
} 
int main()
{
    struct stack t;
    char s[20];
    printf("Enter a string\n");
   // scanf("%s",s);
    gets(s);
    puts(s);
    
    push(&t,s);

    for (int i = 0; i < strlen(s); i++)
    {
        printf("%c",pop(&t));
    }

    return 0;
}