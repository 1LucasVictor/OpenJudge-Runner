#include <stdio.h>

int main(void) {
	int i,n;
	int x = 0;
	scanf("%d",&n);
	for(i=3;i<=n;i++){
		x=i;
		if(x % 3 == 0 || x % 10 == 3){
			printf(" %d",i);
		
		x /= 10;}
	}
	printf("\n");
	return 0;
}