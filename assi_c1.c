/*Write a program to calculate the total price for a picnic lunch that a user is purchasing for her 
group of friends. She is first asked to enter a budget for the lunch. She has the option of buying 
apples, cake, and bread. Set the price per kg of apples, price per cake, and price per loaf of bread 
in constant variables. Use a menu to ask the user what item and how much of each item she 
would like to purchase. Keep calculating the total of the items purchased. After purchase of an 
item, display the remaining amount. Exit the menu if the total has exceeded the budget. In 
addition, provide an option that allows the user to exit the purchasing loop at any time.*/
#include<stdio.h>
#include<stdlib.h>

int main()
{   int const cake=100;
    const int bread=80;
    int const apples=1500;
    int budget,quantity,price;
    printf("Enter the budget for the lunch\n");
    scanf("%d",&budget);
    printf("Enter how much Kg of cake you want to purchase\n");
    scanf("");
    
    printf("%d",apples);
    return 0;
}