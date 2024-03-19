#include<stdio.h>

int main(){
  int a;
  int b;
  int x;

  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &x);

  if(a <= x){
    if(a + b >= x){
      printf("YES\n");
    }else{
      printf("NO\n");
    }
  }else{
    printf("NO\n");
  }

  return 0;
}
