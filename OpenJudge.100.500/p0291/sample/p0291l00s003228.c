#include <stdio.h>
#define N 200000

main(){
  int n, i, j, R[N], max, a;

  scanf("%d", &n);
  for(i = 0;i < n;i++){
    scanf("%d", &R[i]);
  }
  max = R[1] - R[0];
  for(j = 1;j < n;j++){
    for(i = 0;i < j;i++){
      a = R[j] - R[i];
      if(a > max){
	max = a;
      }
    }
  }
  printf("%d\n", max);
  return 0;
}