#include <stdio.h>

int main()
{
	int i, T;
	int immigration[101];

	scanf("%d", &T);

	for(i = 0; i < T; i++){
		scanf("%d", &immigration[i]);
	}
	for(i = 0; i < T; i++){
		if((immigration[i] % 2 == 0) && (immigration[i] % 3 != 0) && (immigration[i] % 5 != 0)){
			printf("DENIED\n");
			return 0;
		}
		
	}
	printf("APPROVED\n");
	
	return 0;
}