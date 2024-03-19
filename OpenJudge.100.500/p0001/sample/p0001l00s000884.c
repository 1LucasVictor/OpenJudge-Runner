#include <stdio.h>

int main(void){
  int a,b,sum,d;
  while(scanf("%d %d",&a,&b)!=EOF){
    for(sum=a+b,d=1;sum>=10;d++){
      sum/=10;
    }
    printf("%d\n",d);
  }
  return 0;
}