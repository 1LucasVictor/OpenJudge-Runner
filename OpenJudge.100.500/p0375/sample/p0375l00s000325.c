#include <stdio.h>

int main(void) {
	int n;
	scanf("%d",&n);
	for(int i = 1;i <= n; i++){
		int temp = i;
		while(temp){
			if(!(i%3)||temp%10 == 3){
				printf(" %d",i);
				break;
			}
			temp /= 10;
		}
	}
	printf("\n");
	return 0;
}

