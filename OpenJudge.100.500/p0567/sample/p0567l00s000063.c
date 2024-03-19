#include <stdio.h>
int main(void){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	a-b<c?printf("%d",c-a+b):printf("0");
	return 0;
}