#include <stdio.h>
int main(){
	int n,a,b,p;
	scanf("%d%d%d",&n,&a,&b);
	p=n*a;
	if(p<=b)printf("%d",p);
	else printf("%d",b);
	return 0;
}