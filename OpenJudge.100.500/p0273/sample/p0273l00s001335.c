#include <stdio.h>
int fibonacci(int);
int f[45];

int fibonacci(int n){
  int i;
  f[0] = 1;
  f[1] = 1;
  if(n > 1){
    for(i = 2;i <= n;i++){
      f[i] = f[i-2] + f[i-1];
    }
    return f[n];
  }
}
int main(int argc,char const*argv[]){
  int n;
  scanf("%d",&n);
  printf("%d\n",fibonacci(n));
  return 0;
}