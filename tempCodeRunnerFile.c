
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
int main()
{   struct node *t;
    initlist(&t);
    int n,i,value,pos,val,choice;
    printf("Enter how many elements\n");
    scanf("%d",&n);
    printf("Enter the elements to append in linklist \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&value);
        append(t,value);
    }
    do  {