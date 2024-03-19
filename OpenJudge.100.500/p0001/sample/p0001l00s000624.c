#include <stdio.h>

int main(){
	int a,b,count;
	while(scanf("%d %d", &a, &b) != EOF){
		a = a + b;
		count = 0;
	
		while(a > 0){
			a = a / 10;
			count++;
		}
	
		printf("%d\n", count);
	}
	return 0;
}