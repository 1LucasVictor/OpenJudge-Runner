#include <stdio.h>
int Fibo(int m) {
	if (m == 0 || m == 1) {
		return 1;
	}
	else {
		return Fibo(m - 1) + Fibo(m - 2);
	}
}

int main(void) 
{
	int n;
	scanf("%d", &n);
	printf("%d", Fibo(n));
	return 0;
}

