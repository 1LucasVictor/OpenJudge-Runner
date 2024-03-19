#include <stdio.h>
#include <string.h>
 
int main(void){
  int s;
  int a=0;
  int b=0;
  int c=0;
  int d=0;
  scanf("%d",&s);
  for (; ; ){
    if(s<1000){
      break;
    }
    a++;
    s = s-1000;
  }
  for (; ; ){
    if(s<100){
      break;
    }
    b++;
    s = s-100;
  }
  for (; ; ){
    if(s<10){
      break;
    }
    c++;
    s = s-10;
  }
  s = d;
  if(a==b||b==c||c==d){
  printf("Bad");
  }else{
  printf("Good");
  }
  return 0;
}