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
int isempty(struct queue *q)
{
    return q->front>q->rare;
}
void addq(struct queue *q,int value)
{
   if(q->rare==max-1)
   {
       printf("Queue is overflow\n");
       exit(1);
   }
  q->a[++q->rare]=value;

}
int remq(struct queue *q)
{ if(q->front>q->rare)
   {
       printf("Queue is empty\n");
       exit(1);
   }  

   return q->a[q->front++];

}
void bfs(int m[10][10],int n)
{
    int i,j,v,w;
    int visited[20]={0};
    struct queue q;
    initqueue(&q);
    printf("The breadth first traversal is \n");
    v=0;
    visited[v]=1;
    addq(&q,v);
    while (!isempty(&q))
    {
        v=remq(&q);
        printf(" v%d",v+1);
        for (w=0; w < n; w++)
        {
            if((m[v][w]==1)&&(visited[w]==0))
            {
                addq(&q,w);
                visited[w]=1;
            }
        }
    }
}
int main()
{
    int m[10][10],n,i,j;
    printf("How many vertices\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    {
        if(i!=j)
        {
            printf("Is there a edge between v%d and v%d \t",i+1,j+1);
            scanf("%d",&m[i][j]);
        }
    }
    bfs(m,n);
}