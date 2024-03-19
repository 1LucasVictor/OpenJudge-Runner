#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
  int n;
  int s;
  int cnt = 0;

  scanf("%d %d", &n, &s);

  while(n > 0){
    cnt++;
    n -= s;
  }

  printf("%d\n", cnt);

  return 0;
}