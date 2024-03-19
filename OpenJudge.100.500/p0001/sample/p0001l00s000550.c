#include <stdio.h>

int main(void){
	int a = 0;
	int b = 0;
	int x = 0;
	int i = 0;
	while(scanf("%d %d", &a, &b) != EOF){
	
	x = a + b;
	
	for(i = 0; x>0; i++){
		x = x / 10;
	}
		
	printf("%d\n", i);

	}
	return 0;
}