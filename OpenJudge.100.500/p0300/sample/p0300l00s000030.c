#include <stdio.h>
#define MAX 10000

int main(){
  int n, S[MAX], q, T[MAX], i, j, c = 0;

  scanf("%d", &n);
  for(i = 0; i < n; i++) scanf("%d", &S[i]);
  scanf("%d", &q);
  for(i = 0; i < q; i++) scanf("%d", &T[i]);

  for(i = 0; i < q; i++){
    for(j = 0; j < n; j++){
      if(S[j] == T[i]){
	c++;
	break;
      }
    }
  }
   
  printf("%d\n", c);

  return 0;
}