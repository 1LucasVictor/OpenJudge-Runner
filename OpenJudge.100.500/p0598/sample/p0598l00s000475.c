#include <stdio.h>
int main(void){
	int a,b;
	scanf("%d%d",&a,&b);
	b%a==0?printf("%d",a+b):printf("%d",a-b);
	return 0;
}