#include<stdio.h>

int main(void){
  char a,b,c,d;
  scanf("%c%c%c%c",&a,&b,&c,&d);
  if(a==b || a==c || a==d || b==c || b==d || c==d)
  {
    printf("Bad\n");
  }else{
    printf("Good\n");
  }
  return 0;
}