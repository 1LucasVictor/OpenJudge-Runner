#include <stdio.h>
int main(void){
	int a,b,t;
	scanf("%d %d %d",&a,&b,&t);
	a = t/a;
	b = b*a;
	printf("%d\n",b);
	return 0;
}