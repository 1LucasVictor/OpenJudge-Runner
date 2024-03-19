#include<stdio.h>
int main(){
  int a,b;
  scanf("%d %d",&a,&b);
  if(a>10||a<0||b>10||b<0){
    printf("-1");
  }
  else
    printf("%d",a*b);
  return 0;
}