#include <stdio.h>

int main(void)
{
	int i, j;
	int a1, a2, a3;
	
	scanf("%d", &j);
	
	for (i = 0; i < j; i++){
		scanf("%d %d %d", &a1, &a2, &a3);
		a1 *= a1;
		a2 *= a2;
		a3 *= a3;
		if ((a2 < a1) && (a3 < a1)){
			if (a1 == (a2 + a3)){
				printf("YES\n");
			}
			else {
				printf("NO\n");
			}
		}
		else if ((a1 < a2) && (a3 < a2)){
			if (a2 == (a1 + a3)){
				printf("YES\n");
			}
			else {
				printf("NO\n");
			}
		}
		else {
			if (a3 == (a1 + a2)){
				printf("YES\n");
			}
			else {
				printf("NO\n");
			}
		}
	}
	
	return (0);
}