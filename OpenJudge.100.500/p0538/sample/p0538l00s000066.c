#include <stdio.h>

int main(void){
  int a,b;
  int ans;
  scanf("%d %d",&a,&b);
  if( ( 1<=a && a<=9 ) && ( 1<=b && b<=9 ) ){
    ans=a*b;
  }else{
    ans=-1;
  }
  printf("%d\n",ans);
}