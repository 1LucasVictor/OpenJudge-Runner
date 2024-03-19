#include <stdio.h>
int main(void){
	int a,b,t;
	scanf("%d%d%d",&a,&b,&t);
	int ans=t/a*b;
	
	printf("%d",ans);
	return 0;
}