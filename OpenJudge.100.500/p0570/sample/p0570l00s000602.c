#include <stdio.h>
int main(void){
	int a,b;
	scanf("%d%d",&a,&b);
	if((a-b)%2==1) printf("IMPOSSIBLE");
	else{
		if(a-b>=0) printf("%d",(a-b)/2+b);
		else printf("%d",(b-a)/2+a);
	}
	return 0;
}