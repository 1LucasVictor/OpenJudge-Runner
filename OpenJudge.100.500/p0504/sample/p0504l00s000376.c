#include<stdio.h>
int main()
{
  int h,a;
  int i=0;
  scanf("%d %d\n",&h,&a);
 if(h%a==0)
 { i=h/a;}
  else{i=(h/a) +1;}
  printf("%d",i);
  return 0;
}