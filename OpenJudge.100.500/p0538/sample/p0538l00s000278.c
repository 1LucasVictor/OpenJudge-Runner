#include <stdio.h>
int main (void){
	int a,b;
	scanf("%d%d",&a,&b);
	if(a<10&&b<10&&a>0&&b>0)
		printf("%d",a*b);
	else
		printf("-1");
	return 0;
}