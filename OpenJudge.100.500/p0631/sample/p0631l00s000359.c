#include<stdio.h>

int main(){
  int a, b, x;
  scanf("%d%d%d", &a, &b, &x);
  if(a < x){
    printf("YES");
  }else if(a + b > x){
    printf("NO");
  }else{
    printf("NO");
  }
  return 0;
}
