#include <stdio.h>

int main(void) {
	int i = 0;
	int n;
	int a[100];
	
	scanf("%d", &n);
	
	while(i < n){
		scanf("%d", &a[i]);
		i++;
	}
	while(i--){
		printf("%d", a[i]);
		printf(i?" ":"\n");
	}
	return 0;
}
