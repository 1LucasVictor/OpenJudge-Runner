#include<stdio.h>
int main(void){
  int n;
  scanf("%d", &n);

  int min = 1000000000;
  int max = -1000000000;
  int r,d;
  
  int i;
  for(i=0; i<n; i++){
    scanf("%d", &r);
    if(r < min) min = r;
    d = r - min;
    if(d >= max) max = d;
  }
  printf("%d\n", max);
  
  return 0;
}