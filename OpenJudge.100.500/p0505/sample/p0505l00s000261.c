#include <stdio.h>
#include <stdlib.h>

int main(void){
  int h, n;
  int *a;
  int sum=0;
  scanf("%d %d", &h, &n);
  a = (int *)malloc(sizeof(int)*n);
  for(int i = 0; i < n; i++){
    scanf("%d ", &a[i]);
    sum = sum + a[i];
  }
  if(sum>=h){
    printf("Yes");
  }else{
    printf("No");
  }
  return 0;
}
