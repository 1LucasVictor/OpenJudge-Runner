#include <stdio.h>

int main(void)
{
	int n;
	int i;
	int a, b, c;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; ++i){
		scanf("%d %d %d", &a, &b, &c);
		if (((a * a) == (b * b) + (c * c)) || ((b * b) == (a * a) + (c * c))|| ((c * c) == (b * b) + (a * a))){
		printf("YES\n");
		}
		else {
			printf("NO\n");
		}
	}
	
	return (0);
}