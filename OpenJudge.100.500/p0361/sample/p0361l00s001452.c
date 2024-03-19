#include<stdio.h>

int main(void){

  int s,h,m;

  scanf("%d",&s);
  h=s/3600;
  m=(s-3600*h)/60;
  s=s-(3600*h+60*m);

  printf("%d:%d:%d\n",h,m,s);

  return 0;

}