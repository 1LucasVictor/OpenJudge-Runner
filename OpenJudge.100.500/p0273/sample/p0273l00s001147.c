#include <stdio.h>
int fibonacci(int);
int main()
{
  int n,a;

  scanf("%d",&n);
  a = fibonacci(n);
  printf("%d\n",a);
  return 0;
}
int fibonacci(int n)
{
  int b;  

  if(n == 0 || n ==1){
    return 1;
  }
  else {
    b = fibonacci(n-2) + fibonacci(n-1);
    return b;
  }
}