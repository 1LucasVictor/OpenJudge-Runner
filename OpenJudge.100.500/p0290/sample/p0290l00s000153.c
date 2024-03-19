#include<stdio.h>
#include<stdlib.h>

int func(int);

int main(){
  int i,cnt = 0,n;
  int *in;
  scanf("%d",&n);
  if(n < 1 || n > 10000){
    exit(4);
  }
  in = (int *)malloc(sizeof(int)*n);
  for(i=0;i<n;i++){
      scanf("%d",&in[i]);
      if(in[i] < 2 || in[i] > 100000000) exit(3);
  }
  for(i=0;i<n;i++){
      if(func(in[i]) == 0) cnt++;
  }
  printf("%d\n",cnt);
  return 0;
}

int func(int n){
  int i;
  for(i=2; i*i<=n; i++) {
    if(n%i == 0 && n != i) {
      return 1;
    }
  }
  return 0;
}

