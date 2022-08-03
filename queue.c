#include<stdio.h>
#include<stdlib.h>
#define max 20
struct queue
{
   int a[max];
   int front,rare;
};
void initqueue(struct queue *q)
{
    q->front=0;
    q->rare=-1;
}
void addqueue(struct queue *q,int value)
{
   if(q->rare==max-1)
   {
       printf("Queue is overflow\n");
       exit(1);
   }
  q->a[++q->rare]=value;

}
int deletequeue(struct queue *q)
{ if(q->front>q->rare)
   {
       printf("Queue is empty\n");
       exit(1);
   }  

   return q->a[q->front++];

}
int peek(struct queue *q)
{ 
    if(q->front>q->rare)
   {
       printf("Queue is empty\n");
       exit(1);
   }  
    return q->a[q->front];
}
int main()
{  struct queue q;
   int value,ch,a;
   initqueue(&q);
   do{ 
         printf("1.Add\n2.Delete\n3.Peek\n");
         printf("Enter your choice\n");
         scanf("%d",&ch);
         switch(ch)
            {
               case 1:printf("Enter no add in queue\n");
                     scanf("%d",&value);
                     addqueue(&q,value);
                     break;
               case 2:a=deletequeue(&q);
                    printf("the deleted no is %d\n",a);
                     break;
              case 3:printf("the peek element is %d\n",peek(&q));
                     break;
              case 4:exit(0);
                    break;              
               default:printf("Invalid choice\n");        
       
            }
     }while (ch!=4);
  
    return 0;
}