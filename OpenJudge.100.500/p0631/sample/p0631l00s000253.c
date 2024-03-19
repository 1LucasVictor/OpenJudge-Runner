#include<stdio.h>
 
int main(void){
  int a, b, x;
  scanf("%d %d %d", &a, &b, &x);
  if(x>=a){
    if(x-a<=b){
      printf("YES");
    }else if(x-a>b){
      printf("NO");
    }
  }else if(x<a){
    printf("NO");
  }
  return 0;
}