#include <stdio.h>

int main(void) {
	int a,b;
	while(EOF!=scanf("%d %d",&a,&b)){
		long i,j;
		for(i=a;a%i!=0 || b%i!=0;i--);
		for(j=a;j%a!=0 || j%b!=0;j=j+a);
		printf("%d %d\n",i,j);
	}
	return 0;
}