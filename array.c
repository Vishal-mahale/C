#include <stdio.h>
void sort(int a[], int n)
{
  int i, j, swap = 0, temp;
  for (i = 0; i < n; i++)
     
    for (j = 0; j < n - i; j++)
      if (a[j] < a[j + 1])
      {
        temp = a[j];
        a[j] = a[j + 1];
        a[j + 1] = temp;
        swap = 1;
      }
}
int main()
{
  int a[10];
  int n;
  printf("Enter how many elements\n");
  scanf("%d", &n);
  printf("Enter the elements of an array\n");

  for (int i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }
  sort(a, n - 1);
  printf("The elements of array are\n");
  for (int i = 0; i < n; i++)
    printf("%d\n", a[i]);
  return 0;
}