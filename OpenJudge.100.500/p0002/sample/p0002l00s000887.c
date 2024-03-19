#include <stdio.h>

int main(void){

	int a[3], b[3], c[3];
	int n;
	int i;
	
	scanf("%d", &n);
	
	for(i = 0; i < n; i++){
		scanf("%d %d %d", &a[i], &b[i], &c[i]);
	}
	
	for(i = 0; i < n; i++){
		if(a[i] * a[i] + b[i] * b[i] == c[i] * c[i]){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
	
	return 0;
}