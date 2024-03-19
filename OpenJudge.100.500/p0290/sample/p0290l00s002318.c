#include <stdio.h>
#define N 10000

main(){
  int n, count = 0, i, a[N], b;

  scanf("%d", &n);
  for(i = 0;i < n;i++){
    scanf("%d", &a[i]);
  }
  for(i = 0;i < n;i++){
    b = a[i] % 2;
    if(a[i] == 2 || b != 0){
      count++;
    }
  }
  printf("%d\n", count);
  return 0;
} 