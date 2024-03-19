#include<stdio.h>
int main(){
  int a,b,c,d,st,en;
  scanf("%d%d%d%d",&a,&b,&c,&d);
  st = a<c?c:a;
  en = b<d?b:d;
  if(en-st>0)printf("%d\n",en-st);
  else puts("0");
  return 0;
}
