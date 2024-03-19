#include <stdio.h>
int main(void){
  int a,b,res=0,num=1;
  scanf("%d%d",&a,&b);
  if(b>1){
    while(num<b){
      res++;
      num+=(a-1);
    }
  }
  printf("%d\n",res);
  return 0;
}