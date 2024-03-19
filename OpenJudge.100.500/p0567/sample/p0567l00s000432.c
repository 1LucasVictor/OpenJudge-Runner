#include<stdio.h>

int main(void){
  int a,b,c;
  scanf("%d %d %d", &a,&b,&c);
  
  int s = a-b;
  if(s > c){
    printf("0\n");
  } else{
    printf("%d\n",c-s);
  }
  return 0;
}