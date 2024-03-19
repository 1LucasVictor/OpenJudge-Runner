#include <stdio.h>

int main(void){
  int a,b,c,w;
  scanf("%d %d %d",&a,&b,&c);
  if(a>c){
  	w=c;
  	c=a;
  	a=w;
  }
  if(a>b){
  	w=b;
  	b=a;
  	a=w;
  }
  if(b>c){
  	w=c;
  	c=b;
  	b=w;
  }
  printf("%d %d %d\n",a,b,c);
  return 0;
}