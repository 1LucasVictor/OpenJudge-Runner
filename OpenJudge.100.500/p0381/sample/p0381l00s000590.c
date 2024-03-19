#include <stdio.h>

int main(void){
	int n,x,count=0;
	int i,j;
	while(1){
		scanf(" %d %d",&n,&x);
		if(n == 0 && x == 0) break;

		for(i = 1;i <= n;i++){
			for(j = i+1;j <= n;j++){
				if(j >= x-i-j) {
					break;
				}
				if(x-i-j > n) {
					continue;
				}
				
				count++;
			}
		}
		printf("%d\n",count);
		count=0;
	}
	return 0;
}