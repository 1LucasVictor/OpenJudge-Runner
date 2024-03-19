#include<stdio.h>
int main(){
	int n, r;
	scanf("%d", &n);
	(n%2==0) ? printf("%d", n/2) : printf("%d", (n/2)+1);
	return 0;
}