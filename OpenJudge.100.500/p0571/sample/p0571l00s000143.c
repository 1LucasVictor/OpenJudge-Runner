#include <stdio.h>
int main() {
	int n,a,b;
	scanf("%d%d%d", &n,&a,&b);
	printf("%d\n", n*a>b?b:n*a);
	return 0;
}
