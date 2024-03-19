#include <stdio.h>

int main(){
  int h, n, x, s=0;
  scanf("%d%d", &h,&n);
  for(int i=0;i<n;i++){
    scanf("%d", &x);
    s += x;
  }
  if(s<h){
    printf("No\n");
  }else{
    printf("Yes\n");
  }
  return 0;
}