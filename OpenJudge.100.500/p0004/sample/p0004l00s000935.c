#include<stdio.h>

int main(void){
  int a,b;
  int x,y;

  for(;scanf("%d%d",&a,&b)==2;){
    x=a;
    y=b;
    for(;;){
      if(a>b)       a-=b;
      else if(a<b)  b-=a;
      else{
        printf("%d ",a);
        break;
      }
    }
    x/=a;
    printf("%d\n",x*y);
  }
  return 0;
}