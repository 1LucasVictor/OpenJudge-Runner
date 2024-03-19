#include <stdio.h>

int main(void)
{
	int i, j, N, l[3];
	
	scanf("%d", &N);
	
	for (i = 0; i < N; i++){
		for (j = 0; j < 3; j++){
			scanf("%d", &l[j]);
		}
		
		if ((l[0] * l[0]) == (l[1] * l[1]) + (l[2] * l[2]) || (l[1] * l[1]) == (l[0] * l[0]) + (l[2] * l[2]) || (l[2] * l[2]) == (l[0] * l[0]) + (l[1] * l[1])){
				printf("YES\n");
			}
			
		else {
			printf("NO\n");
		}
	}
	
	return (0);
}