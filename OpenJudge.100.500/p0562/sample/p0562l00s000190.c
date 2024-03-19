#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#define MAX(X, Y) (((X) > (Y))? (X) : (Y))
#define MIN(X, Y) (((X) < (Y))? (X) : (Y))
int compare_int(const void *a, const void *b){
  return *(long int*)b - *(long int*)a; // 大きい順
}
// 10min
int main(void){
  int a, b;
  int sum = 0;
  int ans = 1;
  
  scanf("%d%d", &a, &b);

  sum = a;
  //  printf("iii sum=%d\n", sum);
  
  while(sum < b){
    //    printf("aaa sum=%d\n", sum);
    sum += (a - 1);
    ans++;
  }
  
  printf("%d\n", ans);
  
  return 0;
}