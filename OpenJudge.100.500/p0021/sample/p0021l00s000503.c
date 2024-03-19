#include <stdio.h>
#include <stdlib.h>

int main(void){
  int i, j, k, n, *a;

  scanf("%d", &n);
  while(n != 0){
    a = (int *)malloc(sizeof(int)*n);
    for(i=0, j=0; i < n; i++){
      scanf("%d", &a[i]);
    }
    for(i=1, j=0; i < n; i++){
      if((a[i]>=0 && a[j]>=0) || (a[i]<0 && a[j]<0)){
	a[j] += a[i];
      }else{
	j++;
	a[j] = a[i];
      }
    }
    for(i=0, k=0; i <= j; i++){
      if(a[i] > a[k]){
	k = i;
      }
      if(a[i] < 0)  continue;
      if(i+2 <= j && a[i]+a[i+1] > 0){
	a[i+2] += a[i]+a[i+1];
	i++;
      }
    }
    printf("%d\n", a[k]);
    free(a);
    scanf("%d", &n);
  }
  return 0;
}