#include <stdio.h>

int digit(int a, int b){
  int d=0;
  int tmp = a+b;
  while(tmp > 0){
    tmp = tmp/10;
    d++;
  }
  return d;
}

int main(){
  int a,b;
  while(scanf("%d %d",&a,&b)!=EOF)
    printf("%d\n",digit(a,b));
  return 0;
}