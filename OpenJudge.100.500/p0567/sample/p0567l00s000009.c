#include <stdio.h>

int main(void) {
	int a,b,c; scanf("%d%d%d",&a,&b,&c);
	int temp = b+c-a;
	if (temp < 0) {
		printf("0\n");
	} else {
		printf("%d\n",temp);
	}
	
	return 0;
}
