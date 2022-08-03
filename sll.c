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
   temp=(struct node *)malloc(sizeof(struct node));
   temp->info=value;
   temp->next=NULL;
   return temp;

}
void initlist(struct node **n)
{
    *n=getnode(0);
}
void append(struct node *t,int value)
{   struct node *temp,*p=t;
    temp=getnode(value);
    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=temp;
    t->info++;

}
void display(struct node *t)
{   struct node *temp=t;
    while(temp!=NULL)
     {
       printf("%d\t",temp->info);
       temp=temp->next;
     }
}
void insert(struct node *t,int val,int pos)
{  int i;
  struct node *temp,*p=t,*q;
    temp=getnode(val);
    for(i=0;i<pos;i++)
    {
        q=p;
        p=p->next;
    }
    q->next=temp;
    temp->next=p;  

}
int search(struct node *t,int key)
{
  struct node *temp;
  int pos;
  for(temp = t->next,pos = 1; temp!=NULL; temp = temp->next,pos++)
  { 
     if(temp->info == key)
     {
         return pos;
     }
  }
  return -1;  
}
void delete(struct node *t,int pos)
{
  struct node *p= t,*q;
  if(pos>t->info)
  {
    printf("Invalid position");
    return;
  }
  else
  {
    for(int i = 0; i < pos; i++)
    {
      q = p;
      p = p->next;
     
    }  
  q->next = p->next;
  free(p);
  }
}
void deleteByValue(struct node *t,int value)
{
  struct node *p,*q;
  for (p=t; p->next !=NULL; p = p->next)
  {
    if(p->next->info == value)
    {
      q = p->next;
      p->next = q->next;
      free(q);
      return; 
    }
  }
  printf("Element  not found\n");
}
void sort(struct node *t)
{
  struct node *temp,*temp1;
  int num;
  for(temp = t->next;temp != NULL;temp = temp->next)
  {
    for(temp1 = temp->next;temp1 != NULL;temp1 = temp1->next)
    {
      if(temp->info > temp1->info)
      {
        num = temp->info;
        temp->info = temp1->info;
        temp1->info = num;

      }
    }
  }
}
void reverse(struct node *t)
{
  struct node *t1=t,*t2,*t3;
  if(t1->next==NULL)
     ret
}
int main()
{   struct node *t;
    initlist(&t);
    int n,i,value,pos,val,choice;
    int position,key;

    printf("Enter how many elements\n");
    scanf("%d",&n);
    printf("Enter the elements to append in linklist \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&value);
        append(t,value);
    }
    
    do  {
      printf("\n 1.Insert\t 2.Display \t 3.search 4.Delete  5.DeleteByValue 6.Sort 7.Exit\n");
      printf("Enter your choice\n");
      scanf("%d",&choice);
      switch (choice)
      {
      case 1:printf("Enter the position and element to insert\n");
            scanf("%d %d",&pos,&val);
            insert(t,val,pos);
            break;
      
      case 2:printf("Elements in linklist are\n"); 
            display(t);
            break;
      
      case 3:printf("Enter key to search\n"); 
            scanf("%d",&key);
            position = search(t,key);
            printf("Element found at position %d\n",position);
            break;      
      
      case 4:printf("Enter position to delete\n");
            scanf("%d",&pos);
            delete(t,pos);
            break;
      
      case 5:printf("Enter value to delete\n");
            scanf("%d",&val);
            delete(t,val);
            break;      
      case 6:sort(t);
            break;      
      
      case 7:exit(0);      
      
      default:printf("Invalid choice");
        break;
      }


    } while (choice!=7);
    
    return 0;
}
   