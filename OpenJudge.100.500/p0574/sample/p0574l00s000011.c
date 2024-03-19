#include <stdio.h>
int main(){
  int a,b,c,d,org;
  scanf("%d",&org);
  a = org%10;
  b = (org/10)%10;
  c = (org/100)%10;
  d = (org/1000)%10;
  if(a == b){
    printf("Bad\n");
  }else if(b == c){
    printf("Bad\n");
  }else if(c == d){
    printf("Bad\n");
  }else{
    printf("Good\n");
  }
    return 0;
  }
