#include<stdio.h>
#include<math.h>
int main(){
  int a;
  int b;
  int c,d,e;
  scanf("%d", &a);
  scanf("%d", &b);
  c = a+b;
   
  if(c%2 == 0){
    printf("%d",c/2);
  }else if(c%2 == 1){
    printf("IMPOSSIBLE");
  }
}
