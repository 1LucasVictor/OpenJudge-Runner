#include <stdio.h>
#include <stdlib.h>

int main() {

  int *p;
  int i,j;
  int n;
  int count = 0;
  
  scanf("%d",&n);
  
  p = (int *)malloc(n * sizeof(int)); //メモリ領域の確保

  for (i=0; i<n; i++)
    scanf("%d", &p[i]);
  if(n>10000 || n<1) return 0;
  
  /* 素数の判定 */
  for(i=0; i<n; i++) {
    for(j=2; j<p[i]+1; j++){
      if(p[i] == 2 || j == p[i]){ //2または最後まで割り切れなかった場合
	count++;
	break;
      }
      else if(p[i]%2 == 0) break; //偶数除外
      else if(p[i] % j == 0) break;
      else continue;
    }
  }

  printf("%d\n",count);
  
  return 0;
}

