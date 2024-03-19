#include <stdio.h>

int main(void)
{
	int n;
	int a;
	int b;
	int c;
	
	scanf("%d", &n);
	
	while (n > 0){
		scanf("%d %d %d", &a, &b, &c);
		if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b){
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}
		n--;
	}
	
	return (0);
}