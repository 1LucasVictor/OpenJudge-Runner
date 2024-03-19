#include<stdio.h>
int main(){
  int a,b;
  scanf("%d%d",&a,&b);
  if(a>9||a<1||b>9||b<1){
    printf("-1\n");
  }else{
    printf("%d",a*b);
  }
  return 0;
}