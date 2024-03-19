#include <stdio.h>

int main(void){
  int a[20], i=1, j, n, max=-10000;
  scanf("%d", &a[0]);
  while(scanf("%d", &a[i])!=EOF){
    for(j=i; j>=0; j--){
      n=a[i]-a[j];
      if(max<n) max=n;
    }
    i++;
  }
  printf("%d", max);
}