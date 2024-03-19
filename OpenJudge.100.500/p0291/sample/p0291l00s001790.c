#include <stdio.h>

#define N 200000

int main(){

  int num, i, min, max;
  int n[N];

  scanf("%d", &num);
  for(i=0; i<num; i++){
    scanf("%d", &n[i]);
  }


  min = n[0];
  for(i=0; i<num; i++){
    if(max < n[i]-min) max = n[i]-min;
    if(min > n[i]) min = n[i];
  }

  if(max==0) max = -1;

  printf("%d\n", max);

  return 0;
}