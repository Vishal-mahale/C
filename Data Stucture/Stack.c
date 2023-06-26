#include"stack.h"
int main()
{
    struct stack t;
    int choice,value;
    initstack(&t);

    do {

        printf("\nMenu\n 1.Push\n 2.Pop\n \n3.Stacktop \n 4.Display \n 5.Exit\n");
        printf("Enter your choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:printf("Enter element to push\n");
                   scanf("%d",&value);
                   push(&t,value);
                   break;
            case 2:printf("The poped element is %d \n",pop(&t)); 
                   break;
            case 3:printf("The top element in the stack is %d \n",stacktop(&t));
                   break;
            case 4:printf("Elements in stack are\n");
                   display(&t);
                   break;
            case 5:exit(0);       
            default:printf("Invalid choice\n") ;                    
        }
      
      }while(choice!=5);

       return 0;

} 
   
   
    


 