#include <stdio.h>

int main(){
  int a,b=0;
  scanf("%d",&a);
  if(a >= 100){
    b +=1;
  a -= 100;}
  if(a >= 10){
    b +=1;
    a -= 10;}
  if(a ==1){
    b +=1;}
  printf("%d\n",b);
  return 0;
}