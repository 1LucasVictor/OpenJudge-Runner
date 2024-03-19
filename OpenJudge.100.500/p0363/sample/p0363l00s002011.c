#include <stdio.h>
#define N 3
#define swap(a,b) {a^=b;b^=a;a^=b;}

int main(){

  int n[N], i, j;

  for(i = 0; i < N; i++) scanf("%d", &n[i]);

  for(i = 0; i <= N+2; i++){
    for(j = N-1;j > i; j--){
      if(n[j-1] > n[j])	swap(n[j-1], n[j]);
    }
  }

  for(i = 0;i < N ; i++){
    printf("%d",n[i]);
    if(i != N-1) printf(" ");
    else printf("\n");
  }

  return 0;
}