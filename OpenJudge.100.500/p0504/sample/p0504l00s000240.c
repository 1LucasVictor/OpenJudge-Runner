#include <stdio.h>
#include <math.h>

int main(){
	int a, h, i, count=0;
	
	scanf("%d %d", &h, &a);
	for(i = 0; h > 0; i++){
		h-=a;
		count++;
	}
	printf("%d", count);
	
	return 0;
}