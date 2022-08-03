/*Write a menu driven program to perform the following operations till the user selects Exit. 
Accept appropriate data for each option. Use standard library functions from math.h 
i. Sine ii. Cosine iii. log iv. exp v. Square Root vi. Exit
*/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int choice;
    float num;
    printf("Enter the number \n");
    scanf("%f",&num);
    do{
        printf("1. Sine  2. Cosine 3. log 4. exp  5. Square Root 6. Exit\n");
        printf("Enter your choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:printf("Sine(%f)= %f\n",num,sin(num));
            break;
            case 2:printf("Cosine(%f)= %f\n",num,cos(num));
            break;
            case 3:printf("log(%f)= %f\n",num,log(num));
            break;
            case 4:printf("e^%f= %f",num,exp(num));
            break;
            case 5:printf("sqrt(%f) = %f\n",num,sqrt(num));
            break;
            case 6:exit(0);
            default:printf("Invalid choice\n");
        }

    }while(choice!=6);
    return 0;
}