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
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->info = value;
    temp->next = NULL;
   // return temp;
}
void initlist(struct node **h)
{
    (*h)->prev = *h;
    (*h) = getnode(0);
    (*h)->next = *h;
}
void append(struct node *t,int value)
{
    struct node *temp,*p = t;
    temp = getnode(value);
    while (p->next!=t)
    {
        p = p->next;
    }
    p->next = temp;
    temp->next = t;
    temp->prev = p;
    t->info++;
}
void display(struct node *t)
{
   struct node *p=t->next;
	while(p!=t)
	{
		printf("%d\t",p->info);
		p=p->next;
	}
    
}
int main()
{
    struct node *t;
    int p,n,i;
    int arr[] = {12,34,24,55,67,4.56};
    initlist(&t);
    printf("Enter how many numbers\n");
    scanf("%d",&n);
   for ( i = 0; i < 7; i++)
   {
       append(t,arr[i]);
   }

    display(t);

    return 0;
}