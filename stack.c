#include<stdio.h>
#include<stdlib.h>
#define MAX 10
struct stack
{
  int a[MAX];
  int top;
};
void initstack(struct stack *s)
{
    s->top=-1;
}
int isempty(struct stack *s)
{ 
  return s->top==-1;

}
int isfull(struct stack *s)
{
    return s->top==MAX-1;
}
void push(struct stack *s,int val)
{  
    if(isfull(s))
    {
        printf("Stack is full");
        exit(1);
    }
   s->a[++s->top]=val;

}
int pop(struct stack *s)
{
  if(isempty(s))
  {
      printf("Stack underflow\n");
      exit(1);
  }

  return s->a[s->top--];

}
int stacktop(struct stack *s)
{  if(isempty(s))
   {
     printf("The stack is empty\n");
     exit(1);
   }
   return s->a[s->top];
}

int main()
{ 
  struct stack s;
  int val,ch;
  initstack(&s);
  do{
      printf("1.Push\n2.Pop\n3.stacktop\n4.Exit\n");
      printf("Enter your choice\n");
      scanf("%d",&ch);
      switch(ch)
      {
         case 1:printf("Enter elements to push in to stack\n");
                scanf("%d",&val);
                push(&s,val);
                break;
        case 2:printf("The pop elements is %d\n",pop(&s));        
               break;
        case 3:printf("The top element in the stack is %d\n",stacktop(&s));
               break;       
                
        case 4:exit(0);
               break;
        default:printf("Invalid choice\n");
      }
  }while(ch!=4);

return 0;
}