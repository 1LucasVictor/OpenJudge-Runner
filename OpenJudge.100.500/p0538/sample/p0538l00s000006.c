#include <stdio.h>
int main(void){
	int a,b;
	scanf("%d%d",&a,&b);
	(a<10)&&(b<10)?printf("%d",a*b):printf("-1");
	return 0;
}