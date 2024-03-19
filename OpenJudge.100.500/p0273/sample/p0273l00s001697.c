#include<stdio.h>

int fib( int);
int F[45];
int main() {
	int n,i;
	
	scanf("%d",&n);

	printf("%d\n",fib(n));

	return 0;
}
	
	
	
	int fib(int n) {
		int t;
		
	if(t=F[n]) return F[n];	
else	if(n==0 || n==1) t=1; 
	else t= fib(n-2) + fib(n-1);
F[n]=t;
return t;
			}
