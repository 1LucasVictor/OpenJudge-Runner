#include<stdio.h>

int main(void){
  int a,b,c,d;
  scanf("%d %d %d %d",&a,&b,&c,&d);
  if(b-c>0) printf("%d\n",b-c);
  else printf("0\n");
  return 0;
}