#include<stdio.h>
int main()
{
    int m1[10][10],m2[10][10],m,n,i,j,p,q,m3[10][10],k;
    printf("Enter number of rows and coloumns of first matrix\n");
    scanf("%d %d",&m,&n);
    printf("Enter %d elements of first matrix\n",m*n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&m1[i][j]);
        }
    }
    printf("Enter numbers of rows and coloumns of second matrix\n");
    scanf("%d %d",&p,&q);
    printf("Enter %d elements of first matrix\n",p*q);
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            scanf("%d",&m2[i][j]);
        }
    }
    printf("The first matrix is\n");
    for(i=0;i<m;i++)
    {
        printf("\n");
        for(j=0;j<n;j++)
        {
            printf("%d\t",m1[i][j]);
        }
    }
    printf("\nThe second matrix is\n");
    for(i=0;i<p;i++)
    {
        printf("\n");
        for(j=0;j<q;j++)
        {
            printf("%d\t",m2[i][j]);
        }
    }
    if(m==q&&n==p)
    {
        printf("\nmatrix multiplication is possible\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++)
            {
                m3[i][j]=0;
                for(k=0;k<n;k++)
                {
                    m3[i][j]+=m1[i][k]*m2[k][j];
                }
            }
        }
    }
    printf("\nThe multi matrix is\n");
    for(i=0;i<m;i++)
    {
        printf("\n");
        for(j=0;j<q;j++)
        {
            printf("%d\t",m3[i][j]);
        }
    }
    return 0;
}