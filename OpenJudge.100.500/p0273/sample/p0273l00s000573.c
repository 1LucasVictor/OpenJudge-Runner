#include <stdio.h>

int fib(int b, int i);
int n[44];
int main(void)
{
	int b;
	int i = 2;
	
	scanf("%d", &b);
	fib(b, i);
	
	printf("%d\n", n[b]);
	
	return (0);
}

int fib(int b, int i){
		
	n[0] = 1;
	n[1] = 1;
	
	if (b >= 2){
		n[i] = n[i - 1] + n[i - 2];
		if (i < b){
			i++;
			fib(b, i);
		}
	}
	else {
		i = 1;
	}
	
	
	return (n[i]);
}