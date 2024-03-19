#include <stdio.h>

int main()
{
	int n, i, a[100];
	scanf("%d", &n);
	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	for(i = 0; i < n; i++){
		if(a[i] % 2 == 0){
			if(!(a[i] % 3 == 0 || a[i] % 5 == 0)){
				printf("DENIED\n");
				return 0;
			}
		}
	}
	printf("APPROVED\n");
	
	return 0;
}
