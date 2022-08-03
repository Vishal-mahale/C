#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node *left;
    int value;
    struct node *right;
};
struct node *getnode(int value)
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->left=NULL;
    temp->value=value;
    temp->right=NULL;
    return temp;
}
struct node *insert(struct node *root,int value)
{ 
    if(!root)
    {
       root=getnode(value);
    }
    if((root->value)>value)
        root->left=insert((root->left),value);
    else
        root->right=insert((root->right),value);
    return root;    
}
void inorder(struct node *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        printf("%d\t",root->value);
        inorder(root->right);
    }
    return; 
}
void postorder(struct node *root)
{
    if(root!=NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d\t",root->value);
    }
    return;
}
void preorder(struct node *root)
{
    if(root!=NULL)
    {
        printf("%d\t",root->value);
        preorder(root->left);
        preorder(root->right);
    }
    return;
}
int isleft(struct node *root)
{
    return (root->left!=NULL);
}
int isright(struct node *root)
{
    return (root->right!=NULL);
}
void setleft(struct node *root,int value)
{
    if(isleft(root))
       {
           printf("Left subtree already exits\n");
           exit(1);
       }
    root->left=getnode(value);   
}
void setright(struct node *root,int value)
{
    if(isright(root))
    {
        printf("Right subtree is already present\n");
        exit(1);

    }
    root->right=getnode(value);
}
struct node *search(struct node *root,int key)
{  struct node *p=root;
   if(p!=NULL)
   {
       if(p->value==key)
        {
           printf("Element found\n");

        }
      else if(p->value>=key)
           {
              search(p->left,key);
           }
           else
           {
               search(p->right,key);
           }
   }
    return NULL;
}
int totalnode(struct node *root)
{

}
int leftnode(struct node *root)
{

}
int rightnode(struct node *root)
{

}
struct node *bst(int n)
{
    struct node *root=NULL;
    struct node *p=NULL;
    int value,i;
    printf("Enter first element\n");
    scanf("%d",&value);
    root=getnode(value);
    for(i=0;i<n;i++)
    {
        p=root;
        printf("Enter elements\n");
        scanf("%d",&value);
        while(1)
        {
            if(value>p->value)
            {
                if(isright(p))
                   p=p->right;
                else
                 { setright(p,value);
                   break;
                 }    
            }
            else
            {
                if(isleft(p))
                   p=p->left;
                else
                  {
                   setleft(p,value);
                   break;
                  }   
            } 
        }
    }
    return root;
}
int main()
{
    int n;
    struct node *root;
    printf("Enter how many elements\n");
    scanf("%d",&n);
    root=bst(n);
    preorder(root);
    return 0;


}