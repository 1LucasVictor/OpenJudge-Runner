#include<stdio.h>

int main(void){
  int a,b,c ,Stac;
  scanf("%d %d %d", &a, &b, &c);
  if(a>b) {Stac=a; a=b; b=Stac;}
  if(b>c) {Stac=b; b=c; c=Stac;}
  if(a>b) {Stac=a; a=b; b=Stac;}
  printf("%d %d %d\n", a, b, c);
}