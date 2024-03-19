#include<stdio.h>
int MIN(int a,int b){return a<b?a:b;}
int MAX(int a,int b){return a<b?b:a;}
int main(){
  int a,b,c,d;
  scanf("%d %d %d %d",&a,&b,&c,&d);
  a=MAX(a,c);
  b=MIN(b,d);
  printf("%d\n",MAX(0,b-a));
  return 0;
}
