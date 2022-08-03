#include<stdio.h>
int prime(int n)
{
  int i,j,cnt=0;
  for(i=1;i<=n;i++)
  {
      cnt=0;
      for(j=1;j<=i;j++)
      {
        if(i%j==0)
          cnt++;
  

      }
        

  } 
  return cnt;
}
int main()
{
    int n,p;
    printf("Enter  number\n");
    scanf("%d",&n);
    p=prime(n);
    if(p==2)
    {
      printf("The number is prime");
    }
    else
    {

      printf("Not prime");

    }
    return 0;
}