#include <stdio.h>

int main(void){

  int a=0,b=0,c=0,x=0,y=0,z=0;
  scanf("%d %d %d",&a,&b,&c);

  if(a>b){x=a;a=b;b=x;};
  if(b>c){y=b;b=c;c=y;};
  if(a>b){z=a;a=b;b=z;};

  printf("%d %d %d\n",a,b,c);

  return 0;

}