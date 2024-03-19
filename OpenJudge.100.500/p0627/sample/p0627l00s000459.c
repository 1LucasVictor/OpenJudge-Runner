#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define NEW(p,n) {p = malloc((n)*sizeof(p[0]));}

int main(){
  int A,B,a,b,c,x;
  scanf("%d %d",&A,&B );
  a=A+B;
  b=A-B;
  c=A*B;
  x=a;
  if(a<=b){
    x=b;
  if(b<=c)
   x=c;
  }else{//a>=bの時
   if(a<=c)
   x=c;
 }
 printf("%d",x);
  return 0;
}
