#include<stdio.h>

int main(){
  int a, b, x;
  scanf("%d%d%d", &a, &b, &x);
  if(a <= x){
    printf("YES\n");
  }else if(a + b > x){
    printf("NO\n");
  }else{
    printf("NO\n");
  }
}
