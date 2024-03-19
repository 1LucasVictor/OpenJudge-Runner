#include <stdio.h>
#define N 200000

main(){
  int n, i, j, R[N], max, a, min;

  scanf("%d", &n);
  for(i = 0;i < n;i++){
    scanf("%d", &R[i]);
  }
  min = R[0];
  for(i = 1;i < n;i++){
    if(min > R[i]){
      min = R[i];
      j = i;
      max = R[j+1] - min;
      if(R[i] == R[n-1]){ 
	min = R[i];  
	max = min - R[i-1];
      } 
    }
  }
  for(i = j+1;i < n;i++){
    a = R[i] - min;
    if(a > max){
      max = a;
    }
  }
  printf("%d\n", max);
  return 0;
}