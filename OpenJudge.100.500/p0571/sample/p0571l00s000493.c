#include <stdio.h>

int main(void) {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	int t=(a*b>c)?c:a*b;
	printf("%d\n",t);
	return 0;
}
