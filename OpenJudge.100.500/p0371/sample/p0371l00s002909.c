#include <stdio.h>
#include <stdlib.h>

//メイン関数
int main(void){
  int n, a;
  int min, max, sum;
  scanf("%d", &n);

  sum =  0;
  min =  1000000;
  max = -1000000;
  for(int i=0; i<n; i++){
    scanf("%d", &a);
    sum = sum + a;
    if(min > a) min = a;
    if(max < a) max = a;
  }

  printf("%d %d %d\n", min, max, sum);
  return 0;
}

