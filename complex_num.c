/*. Accept two complex numbers from the user (real part, imaginary part). Write a menu driven 
program to perform the following operations till the user selects Exit. 
i. ADD ii. SUBTRACT iii. MULTIPLY iv. EXIT*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a_real,b_real,c_real,c_img,a_img,b_img;
    int choice;
    printf("Enter a and b where a+ib is first complex number\n");
    scanf("%d %d",&a_real,&a_img);
    printf("Enter a and b where a+ib is second complex number\n");
    scanf("%d %d",&b_real,&b_img);
    do{
        printf("1. ADD 2. SUBTRACT 2. MULTIPLY  4. EXIT\n");
        printf("Enter your choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            
            case 1:c_real=a_real+b_real;
            c_img=a_img+b_img;
            printf("Addition is %d+i%d\n",c_real,c_img);
            break;

            case 2:c_real=a_real-b_real;
            c_img=a_img-b_img;
            printf("Subtraction is %d+i%d\n",c_real,c_img);
            break;

            case 3:c_real=a_real*b_real-a_img*b_img;
            c_img=a_img*b_real+a_real*b_img;
            printf("Subtraction is %d+i%d \n",c_real,c_img);
            break;


            default:printf("Invalid choice\n");

        }


    }while(choice!=4);
    return 0;
    
}