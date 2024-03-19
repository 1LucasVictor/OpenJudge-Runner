#include <stdio.h>
//int fib(int);

int Fib[44];
int main() {
  int i,n;
  Fib[0]=1;
  Fib[1]=1;
  for (i = 2; i < 45; i++) {
    Fib[i] = Fib[i-1]+Fib[i-2];
  }
  scanf("%d",&n);
  printf("%d\n",Fib[n]);
  return 0;
}
/* int fib(int n){


} */

