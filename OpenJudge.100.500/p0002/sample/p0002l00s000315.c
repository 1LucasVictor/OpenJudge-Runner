#include <stdio.h>

int main(void)
{
	int n;
	int l1, l2, l3;
	int i;
	
	scanf("%d", &n);
	while (n--){
		scanf("%d %d %d", &l1, &l2, &l3);
		
		if (l1 * l1 == l2 * l2 + l3 * l3 ||
			l2 * l2 == l1 * l1 + l3 * l3 ||
			l3 * l3 == l1 * l1 + l2 * l2){
			
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}
	}
	
	return (0);
}