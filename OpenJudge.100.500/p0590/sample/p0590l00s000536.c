#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int cp(const void *a,const void *b){
  return *(int*)a-*(int*)b;
}

int main(void){
  int a,b,c,d,e,k;
  int flag=1;
  scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&k);
  if(b-a>k||c-a>k||d-a>k||e-a>k||c-b>k||d-b>k||e-b>k||d-c>k||e-c>k||e-d>k) puts(":(");
  else puts("Yay!");
  return 0;
}