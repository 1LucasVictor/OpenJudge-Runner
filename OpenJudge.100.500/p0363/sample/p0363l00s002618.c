#include<stdio.h>

int main(void){

  int a, b, c, x;

  scanf("%d %d %d",&a,&b,&c);
 
  if ( b < a){
    x = a;
    a = b;
    b = x;
  }
 
  if ( a < c && b < c){
    printf("%d %d %d\n",a,b,c);
  }else if (a < c && c < b) {
    printf("%d %d %d\n",a,c,b);
  }else {
    printf("%d %d %d\n",c,a,b);
  }

  return 0;
}