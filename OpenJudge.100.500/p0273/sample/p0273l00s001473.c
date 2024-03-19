#include <stdio.h>

#define N 44

int main(){

  int i,n,F[N];

  scanf("%d",&n);
    F[0] = 1;
    F[1] = 1;
    for(i=2;i<=n;i++){
      F[i] = F[i-2] + F[i-1];
  }

  printf("%d\n",F[n]);

  return 0;
}