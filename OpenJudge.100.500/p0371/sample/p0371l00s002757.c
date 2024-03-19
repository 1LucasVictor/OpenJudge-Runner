#include <stdio.h>

int main(void){
  int n, i, x, min, max;
  long sum;
  
  scanf("%d", &n);
  scanf("%d", &x);
 
  min = max = sum = x;
  for(i=1;i<n;i++){
    scanf("%d",&x);
    sum += x;
    if( min > x ){
      min = x;
    }
    else if( max < x){
      max = x;
    }
  }
  printf("%d %d %ld\n", min, max, sum);
  
  return 0;
}