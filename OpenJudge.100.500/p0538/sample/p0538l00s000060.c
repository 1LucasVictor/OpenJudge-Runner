#include<stdio.h>
#include<string.h>
int main(){
  int a,b; scanf("%d%d",&a,&b);
  if (a>=10 || b>=10) printf("-1\n");
  else printf("%d\n",a*b); return 0;
}