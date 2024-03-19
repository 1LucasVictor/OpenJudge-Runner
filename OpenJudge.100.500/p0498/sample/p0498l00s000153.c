#include <stdio.h>

int main(void) {
	int N;
	scanf("%d", &N);
	int a, b;
	a = N/2;
	b = N%2;
	switch(b){
		case 0:printf("%d", a);
		break;
		case 1:printf("%d", a+1);
		break;
	}
	return 0;
}
