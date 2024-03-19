#include <stdio.h>
#include <math.h>
 
int main(void){
  int h, n;
  scanf("%d", &h);
  scanf("%d", &n);
  int a[n], sum=0;
  for(int i=0;i<n;i++){
    scanf("%d", &a[i]);
    sum += a[i];
  }
  if(sum < h){
    printf("No");
  }else{
    printf("Yes");
  }
  return 0;
}