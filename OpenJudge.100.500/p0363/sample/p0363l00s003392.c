#include <stdio.h>

int main(void){
  int a,b,c,a1,b1,c1;
  scanf("%d %d %d",&a,&b,&c);
  a1=a;
  b1=b;
  c1=c;
  if(1<=a && a<=1000 && 1<=b && b<=1000 && 1<=c && c<=1000){
      if(a<b && a<c){
          if(b<c){
          }else{
              b=c1;
              c=b1;
          }
      }
      if(b<a && b<c){
          if(a<c){
              a=b1;
              b=a1;
          }else{
              a=b1;
              b=c1;
              c=a1;
          }
      }
      if(c<b && c<a){
          if(a<b){
              a=c1;
              b=a1;
              c=b1;
          }else{
              a=c1;
              b=b1;
              c=a1;
          }
      }
  }
  printf("%d %d %d\n",a,b,c);
  return 0;
}