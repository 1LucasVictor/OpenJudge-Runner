#include <stdio.h>
#define VAR_MAX 9

int main(void){
	int a, b, c, N, count=0;
	
	while(scanf("%d",&N)==1){
		count=0;
		for(a=0;a<=VAR_MAX;a++){
			for(b=0;b<=VAR_MAX;b++){
				for(c=0;c<=VAR_MAX;c++)
					if(0<=N-a-b-c && N-a-b-c<=VAR_MAX) count++;
			}
		}
		printf("%d\n",count);
	}
	
	return 0;
}