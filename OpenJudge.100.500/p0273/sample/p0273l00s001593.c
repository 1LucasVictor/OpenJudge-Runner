#include <stdio.h>
int fibonacci(int);

int b[44];

int main()
{
  int n,a,i;

  scanf("%d",&n);

  for(i=0;i<44;i++){
    b[i] = 0;
  }
  a = fibonacci(n);
  printf("%d\n",a);
  return 0;
}
int fibonacci(int n)
{  

  if(n == 0 || n ==1){
    b[n] = 1;
    return b[n];
  }
  else if(b[n] != 0 )return b[n];
  
  else {
    b[n] = fibonacci(n-2) + fibonacci(n-1);
    return b[n];
  }
}