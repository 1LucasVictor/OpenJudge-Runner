#include <stdio.h>
int main(){
	int a, b;
	printf("%s", ((scanf("%d", &a), a)*(scanf("%d", &b), b)%2?"Odd":"Even"));
}