#include <stdio.h>
#include <stdlib.h>
#define N 1000000000
int main(){
  int *S;
  int *T;
  int n,q;
  int i,j,k;
  int cnt = 0;

  scanf("%d",&n);
  if(n > 10000)
    exit(1);
  S = (int*)malloc(sizeof(int) * n);
  for(i = 0; i < n; i++){
    scanf("%d",&S[i]);
    if(S[i] > N)
      exit(1);
  }

  scanf("%d",&q);
  if(q > 500)
    exit(2);
  T = (int*)malloc(sizeof(int) * q);
  for(i = 0; i < q; i++){
    scanf("%d",&T[i]);
    if(T[i] > N)
      exit(1);
      for(j = 0; j < i; j++){
	if(T[i] == T[j]){
	  printf("Tは互いに異なる要素を入力してください\n");
	  exit(1);
	}
      }
  }

  for(i = 0; i < q; i++){
    for(j = 0; j < n; j++){
      if(T[i] == S[j]){
	cnt++;
	for(k = 0; k < j; k++){
	  if(T[i] == S[k])
	    cnt--;
	}
      }
    }
  }

  printf("%d\n",cnt);
  return 0;
}

