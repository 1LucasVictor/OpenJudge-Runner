#include <stdio.h>

int main(){
  int a,b,n,c=0;
  scanf("%d %d %d",&n,&a,&b);
  while(c==0){
    if(1<=n&&n<=20&&1<=a&&a<=50&&1<=b&&b<=50){
      c++;
    }
    scanf("%d %d %d",&n,&a,&b);
  }
  if(a*n>b){
    printf("%d",b);
  } else {
    printf("%d",a*n);
  }
}