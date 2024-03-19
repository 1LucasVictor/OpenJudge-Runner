#include <stdio.h>
int main(){
  int a,b,ans=0;
  scanf("%d",&a);
  scanf("%d",&b);
  if(a<b){
    printf("0");
  }
  if(a>=b){
    printf("10");
  }
  return 0;
}