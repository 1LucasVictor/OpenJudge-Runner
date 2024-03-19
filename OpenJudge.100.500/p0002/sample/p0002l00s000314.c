#include <stdio.h>

int main(void)
{
	int i;
	int j;
	int a;
	int b;
	int c;
	
	scanf("%d", &j);
	for (i = 0; i < j; i++){
		scanf("%d %d %d", &a, &b, &c);
		if (((a * a) + (b * b)) == (c * c)){
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}
	}
	
	return 0;
}