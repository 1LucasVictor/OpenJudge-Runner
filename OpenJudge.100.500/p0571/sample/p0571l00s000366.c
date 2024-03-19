#include<stdio.h>

int main() {
	int n, a, b;
	scanf("%d",&n);
	scanf("%d",&a);
	scanf("%d",&b);
	if (n*a > b){
		printf("%d", b);
}
else {
		printf("%d", n*a);
	}
	return 0;
}