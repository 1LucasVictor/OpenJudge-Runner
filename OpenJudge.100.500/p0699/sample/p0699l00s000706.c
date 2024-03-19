#include <stdio.h>

int main(void){
	int a, b, c;

	scanf("%d%d%d", &a, &b, &c);

	if(a>b) {
		a^=b^=a^=b;
	}
	if(b>c) {
		b^=c^=b^=c;
	}
	if(a>b) {
		a^=b^=a^=b;
	}

	if(a==5 && b==5 && c==7) {
		printf("YES");
		return 0;
	}
	printf("NO");

	return 0;
}
