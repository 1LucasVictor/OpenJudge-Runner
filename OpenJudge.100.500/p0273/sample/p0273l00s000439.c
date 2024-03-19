#include<stdio.h>

#define N 45

int main() {
  int i,x;
  int data[45];
  data[0] = data[1] = 1;

  for(i = 2; i < N; i++) {
    data[i] = data[i - 1] + data[i - 2];
  }

  scanf("%d",&x);
  printf("%d\n",data[x]);

  return 0;
}

