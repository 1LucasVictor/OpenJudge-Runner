#include <stdio.h>

int main(){
  int a,b,c;
  scanf("%d%d%d",&a,&b,&c);
  int buf=b+c-a;
  if(buf<0) printf("0\n");
  else printf("%d\n",buf);
  return 0;
}