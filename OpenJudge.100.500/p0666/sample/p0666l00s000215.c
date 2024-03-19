#include <stdio.h>
int main() {
	int a, b, c;
	scanf("%d%d%d",&a,&b,&c);
	if (b -c  >= 0) {
		printf("delicious");
	}else if (c - b <= a) {
		printf("safe");
	}
	else { 
		printf("dangerous");
	}
	return 0;
}