#include<stdio.h>
#include<string.h>
int main(void){
  int a, b, c, k;
  scanf("%d%d%d%d", &a, &b, &c, &k);
  if(a>=k){
    printf("%d\n", k);
  }else if(a+b>=k){
    printf("%d\n", a);
  }else{
    printf("%d\n", a-(k-a-b));
  }
  return 0;
}