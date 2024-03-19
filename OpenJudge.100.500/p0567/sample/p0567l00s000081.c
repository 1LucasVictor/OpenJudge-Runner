#include<stdio.h>

int main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	c = c-(a-b);
	if(c<0) printf("%d",0);
	else printf("%d",c);
	
	return 0;
}