#include <stdio.h>
int main(){
  int a,b,c;
  scanf("%d%d%d",&a,&b,&c);
  
  if(c-(a-b)<0)printf("%d\n",0);
  else printf("%d\n",c-(a-b));
  return 0;
}