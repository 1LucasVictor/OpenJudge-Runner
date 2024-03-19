#include <stdio.h>

int main(void){
	setvbuf(stdout,NULL,_IONBF,0);

	int x;

	while(1){
		int sum = 0;
		scanf("%d",&x);
		if(x == 0){
			break;
		}
		else{
			while(x > 0){
				sum += (x % 10);
				x /= 10;
			}
			printf("%d\n",sum);
		}
	}
	return 0;
}