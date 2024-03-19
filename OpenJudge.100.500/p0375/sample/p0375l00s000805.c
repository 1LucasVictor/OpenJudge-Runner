#include <stdio.h>

int main(void)
{
	int n,a,b,c;
	scanf("%d",&n);
	for(a=1;a<=n;a++){
	/*3????????°*/
	if(a%3==0){
	printf(" %d",a);
	}
	/*1?????????3*/
	else if(a%10==3){
	printf(" %d",a);
	}else if(a/10%10==3){
	printf(" %d",a);
	}else if(a/100%10==3){
	printf(" %d",a);
	}
	}
	printf("\n");
return 0;
}