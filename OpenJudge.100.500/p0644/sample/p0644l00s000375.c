#include<stdio.h>
 
int main()
{
  int a=0;
  scanf("%d", &a);
  if(a==000)printf("0");
  if(a==001 || a==100)printf("1");
  if(a==10)printf("1");
  if(a==11 || a==110)printf("2");
  if(a==101)printf("2");
  if(a==111)printf("3");
  return 0;
}