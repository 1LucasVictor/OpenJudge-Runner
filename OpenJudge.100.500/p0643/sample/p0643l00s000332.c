#include <stdio.h>
int main(void){
	int a,b;
	scanf("%d%d",&a,&b);
	(a*b)%2==0 ? printf("Even") : printf("Odd");
	return 0;
}