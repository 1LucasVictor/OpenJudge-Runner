#include<stdio.h>

int fib( int);
int main() {
	int n,i;
	
	scanf("%d",&n);
	
	if(n==0) printf("0\n");
	else if(n==1) printf("1\n");
	
	else { 
i=fib(n);
	printf("%d\n",i);
	}
	return 0;
}
	
	
	
	int fib(int n) {
		if(n==1 ) return 1;
		else if(n==0) return 1;
		
		return fib(n-1)+fib(n-2);
		
		
		}
