#include<stdio.h>
int main(){
  int h,m,s;
  scanf("%d",&s);
  m=s/60;
  h=m/60;
  m=m%60;
  s=s%360;
  printf("%d:%d:%d\n",h,m,s%60);
  return(0);
}