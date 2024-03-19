#include <stdio.h>

int main(void)
{
	int a, b;
	int i;
	
	while(scanf("%d %d", &a, &b) != EOF){
		a += b;
		
		for(i=0; a!=0; i++){
			a = a/10;
		}
		printf("%d", i);
	}
	
	return (0);
}