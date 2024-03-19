#include <stdio.h>
int main(void){
  int a,b,x;
  int ababa;
  scanf("%d %d %d",&x,&a,&b);
  ababa=b-a;
  if(a>=b){printf("delicious\n");}
  else if(x>=ababa){printf("safe\n");}
  else{printf("dangerous\n");}
}