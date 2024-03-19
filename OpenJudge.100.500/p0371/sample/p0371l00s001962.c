#include <stdio.h>

int main(void){

  int n,i;
  int max, min;
  int sum = 0;

  scanf("%d",&n);
  int a[n];

  for(i=0; i<n; i++){
    if(i){scanf(" %d",&a[i]);}
    else {scanf("%d",&a[i]);}
  }

  /***** maximum value *****/
  max = a[0];
  for(i=0; i<n; i++){
    if(max <= a[i]){max = a[i];}
  }

  /***** minimum value *****/
  min = a[0];
  for(i=0; i<n; i++){
    if(min >= a[i]){min = a[i];}
  }

  /***** sum *****/
  for(i=0; i<n; i++){
    sum = sum + a[i];
  }

  /***** result *****/

  printf("%d %d %d\n",min, max, sum);

  return 0;

}