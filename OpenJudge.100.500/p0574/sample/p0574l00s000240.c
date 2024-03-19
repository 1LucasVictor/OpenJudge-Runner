#include<stdio.h>
int main() {
  int a,b,c,d,e;
  scanf("%d", &a);
  b=a/1000;
  c=(a-b*1000)/100;
  d=(a-b*1000-c*100)/10;
  e=a%10;
  if(b==c || c==d || d==e){
 printf("Bad");
}else{
  printf("Good");
}
  return 0;
}
