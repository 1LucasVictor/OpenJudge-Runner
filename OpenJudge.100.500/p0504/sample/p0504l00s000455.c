#include<stdio.h>
int main(){
  int h,a;
  scanf("%d %d",&h,&a);
  int c=0;
  while((h=h-a)>0)c++;
  printf("%d",c+1);
  return 0;
}