#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n;
  scanf("%d",  &n);
  int* A = malloc(n*sizeof(int));
  A[0] = 0;
  for(int i=1;i<n;i++)
  {
    int x;
    scanf("%d", &x);
    A[i] = 0;
    A[x-1]++;
   }
  for(int i=0;i<n;i++)
  {
    printf("%d\n",A[i]);
  }
}