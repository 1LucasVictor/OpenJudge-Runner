#include <stdio.h>

int fibonacci(int);

int F[44];


int main(){
	int x;
	scanf("%d",&x);
	printf("%d\n",fibonacci(x));
	
	return 0;
}

int fibonacci(int n){
	if (n == 0 || n == 1) return F[n] = 1;
	if(F[n] != 0)return F[n];
	return F[n] = fibonacci(n-2) + fibonacci(n - 1);
}