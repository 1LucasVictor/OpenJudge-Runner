#include <stdio.h>


int main(){
	int a, b, x;
	scanf("%i %i %i", &a, &b, &x);
	if(x<=a+b)
		printf("YES\n");
	else
		printf("NO\n");
}
