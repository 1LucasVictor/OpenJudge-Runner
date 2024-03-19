#include <stdio.h>
int main(void){
  int a,b,c,d;
  int first,end;
  scanf("%d",&a);
  scanf("%d",&b);
  scanf("%d",&c);
  scanf("%d",&d);
  if(a>c){
    first=a;
  }else{
    first=c;
  }
  if(b>d){
    end=d;
  }else{
    end=b;
  }
  if(end>first){
    printf("%d\n",end-first);
  }else{
    printf("0\n");
  }
  return 0;
}