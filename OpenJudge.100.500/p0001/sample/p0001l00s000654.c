// 0002.c
#include<stdio.h>
int main(void)
{
  int a,b,i,n;
  while(scanf("%d %d",&a,&b)!=EOF){
    a=a+b;
    n=1;
    a=a/10;
    while(a>0){
      n++;
      a=a/10;
    }
   printf("%d\n",n);
  }
  return 0;
}