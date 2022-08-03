#include<stdio.h>
#include<stdlib.h>
#define SIZE 20
struct stack
{
    int arr[SIZE];
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
void push(struct stack *t,int value)
{
    if(isfull(t))
    {
        printf("Stack is full\n");
        exit(1);
    }
    t->arr[++t->top] = value;
}
int pop(struct stack *t)
{
    if(isempty(t))
    {
        printf("Stack  underflow\n");
        exit(1);
    }

    return t->arr[t->top--];

}
int stacktop(struct stack *t)
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
        printf("%d\t",t->arr[i]);  
    }  
    if(isempty(t))   
    {  
        printf("Stack is empty");  
        
    }  
} 