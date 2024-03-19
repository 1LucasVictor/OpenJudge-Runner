#include <stdio.h>

int main(void){
	int train[11], i = 0, n;
	
	while(scanf("%d",&n) != EOF){
		if(n == 0){
			printf("%d\n",train[i]);
			i--;
		}else{
			i++;
			train[i] = n;
		}
	}
	return 0;
}