#include<stdio.h>

int main()
{
  int n;
  scanf("%d",&n);
  if (n%2==0)
    printf("%d\n", n/2);
  else {
    int newn = n/2;
    newn++;
    printf("%d\n", newn);
  }
}