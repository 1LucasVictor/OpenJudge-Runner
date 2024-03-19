#include <stdio.h>
int main(){
  int a,b,c,i;
  while(scanf("%d %d",&a,&b)!=EOF){
    if(a>=0 && b>=0 && a<=1000000 && b<=1000000){
      c=a+b;
      for(i=1;;i++){
        if(c/10==0)break;
        else c=c/10;
      }
      printf("%d\n",i);
    }
  }
  return 0;
}