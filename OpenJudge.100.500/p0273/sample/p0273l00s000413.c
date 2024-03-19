#include <stdio.h>
int fibonacci(int n){
	int i;
	int f=1, f1=1, f2=1;
	for(i=2; i<=n; i++){
		f=f1+f2;
		f2=f1;
		f1=f;
	}
	return f;
}
int main(void){
	int n;
	scanf("%d", &n);
	printf("%d\n", fibonacci(n));
	return 0;
}