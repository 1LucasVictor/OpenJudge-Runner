#include<stdio.h>

int Stack[110];

int sp = 0;

int main() {
	int N;
	while (1) {
		if (scanf("%d", &N) == EOF)break;
		if (N) {
			Stack[sp] = N;
			sp++;
		}
		else {
			sp--;
			printf("%d\n", Stack[sp]);
		}
	}


	return 0;
}
