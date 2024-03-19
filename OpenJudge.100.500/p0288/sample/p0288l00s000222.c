#include <stdio.h>
#include <stdlib.h>

int main(){
  char *a;
  int n, v, i, j, k;
  /*n,aの要素の入力*/
  scanf("%d", &n);
  a = (char *)malloc(n);
  for(i = 0; i < n; i++){
    scanf("%d", &a[i]);
    printf("%d ", a[i]);
  }
  printf("\n");
  /*ソートの処理、出力*/
  for(i = 1; i <= n - 1; i++){
    v = a[i];
    j = i - 1;
    while(j >= 0 && a[j] > v){
      a[j + 1] = a[j];
      j--;
      a[j + 1] = v;
    }
    for(k = 0; k < n; k++) printf("%d ", a[k]);
    printf("\n");
  }
  free(a);
  return 0;
}