#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *next;
};
struct node *getnode(int value)
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->info = value;
    temp->next = NULL;
    return temp;
}
void initlist(struct node **t)
{
    *t = getnode(0);
}
void display(struct node *t)
{
    struct node *temp=t;
    while(temp!=NULL)
    {
        printf("%d\t",temp->info);
        temp=temp->next;
    }
    
}
void append(struct node *t,int value)
{
    struct node *p=t,*temp;
    temp=getnode(value);
    while (p->next=NULL)
    {
        p=p->next;
    }
    p->next=temp;
    t->info++;
    
}
int main()
{
    struct node *t;
    initlist(&t);
   
    display(t);
    append(t,10);
    append(t,20);
    display(t);
    return 0;


}