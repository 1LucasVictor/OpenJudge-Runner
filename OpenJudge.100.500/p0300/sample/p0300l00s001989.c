#include <stdio.h>

int main(){
  int S[10000];
  int T[500];
  int n, q, i, j, count = 0;

  //input
  scanf("%d",&n);
  for(i = 0; i < n; i++){
    scanf("%d",&S[i]);
  }

  scanf("%d",&q);
  for(i = 0; i < q; i++){
    scanf("%d",&T[i]);
  }

  //excution
  for(i = 0; i < q; i++){
    for(j = 0; j < n; j++){
      if(S[j] == T[i]){
	count++;
	break;
      }
    }
  }

  //output
  printf("%d\n",count);

  return 0;
}

