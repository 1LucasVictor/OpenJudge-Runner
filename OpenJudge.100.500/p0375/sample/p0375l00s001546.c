#include <stdio.h>

int main(void){
	int n, i, x;
	scanf("%d", &n);

	for(i=3; i<=n; i++){
		x = i;
		if(i%3==0)
			printf(" %d", i);
		else 
			while(x>0){
				if(x%10==3){
					printf(" %d", i);
					break;
				}
			x /= 10;
		}

	}
	printf("\n");

	return 0;
}