#include<stdio.h>

int main(){
	int n, a, b, c;
	scanf("%d", &n);
	
	a = n/100;
	b = (n/10)%10;
	c = n%10;
	
	if (a == 7)
		printf("Yes");
	else if (b == 7)
		printf("Yes");
	else if (c == 7)
		printf("Yes");
	else
		printf("No");
}