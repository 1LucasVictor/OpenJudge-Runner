#include <stdio.h>
int main(void)
{
  int a,b,c,z;
  z=0;
  scanf("%d %d %d",&a,&b,&c);
  if(a<=b){
    z=a;
    a=b;
    b=z;
    }
  if(b<=c){
    z=b;
    b=c;
    c=z;
    }
  if(c<=a){
    z=c;
    c=a;
    a=z;
    }
  printf("%d %d %d\n",a,b,c);

  return 0;
}