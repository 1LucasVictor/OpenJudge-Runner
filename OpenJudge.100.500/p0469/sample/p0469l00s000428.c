#include <stdio.h>

int main(){
	int a,k,b;
	scanf("%d%d%d",&k,&a,&b);
	if(b-a>=k||k==1) printf("OK");
	else printf("NG");
	return 0;
}