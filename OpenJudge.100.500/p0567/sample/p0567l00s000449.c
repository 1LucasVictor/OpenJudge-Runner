#include<stdio.h>
int main(void){
  int a,b,c;
  scanf("%d %d %d",&a,&b,&c);
  if(c-(a-b)>0)
  	printf("%d",c-(a-b));
  else printf("0");
  
  return 0;
}