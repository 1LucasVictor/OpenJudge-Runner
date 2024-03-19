#include <stdio.h>
#include <string.h>

int main(){
  int h,n;
  scanf("%d%d", &h, &n);
  int sum;
  for (int i = 0; i < n; i++){
    int x;
    scanf("%d", &x);
    sum += x;
  }
  if (sum >= h){
    printf("Yes\n");
  }else{
    printf("No\n");
  }
  return 0;
  
}