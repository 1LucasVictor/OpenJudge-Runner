#include<stdio.h>

int main (){
  int i, n, a[10000];
  scanf("%d",&n);

  for (i = 0; i < n; i++){
    scanf("%d",&a[i]);
  }

  int min = a[0], max = a[0], sum = 0;
  for ( i = 0; i < n; i++){
    if ( a[i] < min ){
      min = a[i];
    }else if ( a[i] > max ){
      max = a[i];
    }
    sum += a[i];
  }

  printf("%d %d %d\n",min,max,sum);

  return 0;
}