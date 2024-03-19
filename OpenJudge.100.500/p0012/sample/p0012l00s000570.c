#include <stdio.h>
int main(void){
  int t[10],p=0,x;
  while(scanf("%d",&x)!=EOF){
    if(x)t[p++]=x;
    else printf("%d\n",t[--p]);
  }
  return 0;
}