#include<stdio.h>
int main(void){
  int a = 0,b = 0,c = 0,d = 0;
  scanf("%d %d %d",&a,&b,&c);

  if ( b < a){
    d = a;
    a = b;
    b = d;
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