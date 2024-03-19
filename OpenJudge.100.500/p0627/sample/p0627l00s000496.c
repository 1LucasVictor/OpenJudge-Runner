#include <stdio.h>

int main(){
	int a,b,penj,peng,perkal;
	scanf("%d",&a);
	scanf("%d",&b);
	
	penj=a+b;
	peng=a-b;
	perkal=a*b;
	
	if (penj >= peng && penj >= perkal) 
	printf("%d", penj);
	else if (peng >= penj && peng >= perkal){
		printf("%d", peng);
	}
	else {
		printf("%d", perkal);
	}
	return 0;
}