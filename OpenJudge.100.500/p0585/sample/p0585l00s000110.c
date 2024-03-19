#include <stdio.h>
#include <stdlib.h>
 
int main(void){
  int a,b,t;
  int sum=0;
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &t);
  
  for(;a>20||a<1||b>20||b<0||t>20||t<0;){
  	printf("入力は1~20の範囲でおこなってください．\n");
  	scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &t);
  }
  
  for(int i=0; i < t/a; i++){
    sum += b;
  }
  printf("%d\n", sum);
 
}