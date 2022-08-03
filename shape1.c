/*Modify the sample program 1 to display n lines as follows (here n=4). 
 A B C D 
 E F G 
 H I 
 J
 */
 #include<stdio.h>
 int main()
 {
    int n,i,j;
    char ch='A';
    printf("Enter the value of n\n");
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {   
        printf("\n");
        for(j=0;j<i;j++)
        {
            printf("%c\t",ch++);
        }
    } 
    return 0;
 }