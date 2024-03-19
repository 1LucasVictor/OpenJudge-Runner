#include <stdio.h>

int main(void){
	int n, cnt = 0;
	int total = 100000;
	
	scanf("%d", &n);
	
	for(cnt = 0; cnt < n; cnt++){
		total = total + total * 0.05;
		total = total + 900;
		total = total / 1000;
		total = total * 1000;
	}
	
	printf("%d\n", total);
	return 0;
}