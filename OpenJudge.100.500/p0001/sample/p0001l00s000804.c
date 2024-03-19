#include <stdio.h>

int main(){
	int a, b;
	
	while(scanf("%d %d", &a, &b) != EOF){
		int c, i;
	
		c = a + b;
	
		for(i = 0; c != 0; i++) c = c / 10;
	
		printf("%d\n", i);
	}
	
	return 0;
}