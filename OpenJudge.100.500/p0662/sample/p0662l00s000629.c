#include <stdio.h>

int main(void){
  int a,b,c,d,start,end;

  scanf("%d %d %d %d",&a,&b,&c,&d);

  start=a;
  end=b;

  if(a<c)start=c;
  if(b>d)end=d;

  if(end-start>0)printf("%d\n",end-start);
  if(end-start<=0)printf("0\n");
  return 0;
}
