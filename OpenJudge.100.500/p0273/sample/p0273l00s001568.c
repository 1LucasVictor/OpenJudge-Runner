#include<stdio.h>

int fib( int);
int main() {
	int n,i;
	
	scanf("%d",&n);
	
	

	printf("%d\n",fib(n));
	
	return 0;
}
	
	
	
	int fib(int n) {
		if(n==1  || n==0) return 1;
		
		else return fib(n-2)+fib(n-1);
		
		
		}