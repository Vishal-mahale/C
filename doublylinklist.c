#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node *prev;
    int info;
    struct node *next;
};
struct node *getnode(int value)
{
    struct node *temp=NULL;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->prev=NULL;
    temp->info=value;
    temp->next=NULL;
    return temp;
}
void initlist(struct node **h)
{
    *h=getnode(0);

}
void *append(struct node *h,int value)
{
    struct node *temp=NULL,*p=h;
    temp=getnode(value);
    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=temp;
    temp->prev=p;
    h->info++;
}
void display(struct node *t)
{
    struct node *p=t;
    while(p)
    {
        printf("%d\t",p->info);
        p=p->next;
    }
}
int main()
{
    int n;
    struct node *t;
    initlist(&t);
    append(t,10);
    append(t,20);
    display(t);
    return 0;
}