#include<stdio.h>
void accept(int mat1[10][10],int m, int n)
{
    int i,j;
    for (i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
}
void display(int mat1[10][10],int m, int n)
{
    int i,j;
    for (i = 0; i < m; i++)
    {
        printf("\n");
        for ( j = 0; j < n; j++)
        {   
            printf("%d \t",mat1[i][j]);
           
        }
    }
}
void tranpose(int mat1[10][10],int m,int n,int mat2[10][10])
{
    int i,j;
    for (i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            mat2[i][j] = mat1[j][i];
        }
    }
}
int main()
{
    int i,j,m,n;
    int mat1[10][10],mat2[10][10];
    printf("Enter no of rows and coloumn\n");
    scanf("%d %d",&m,&n);
    printf("Enter %d elements\n",m*n);
    accept(mat1,m,n);
    display(mat1,m,n);
    printf("\nTranpose of a matrix is\n");
    tranpose(mat1,m,n,mat2);
    display(mat2,m,n);
    return 0;
}
