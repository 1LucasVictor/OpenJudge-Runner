#include<stdio.h>
#include<stdlib.h>
int main(void){
	int N;
	scanf("%d",&N);
	int *history=malloc(sizeof(int)*N);
	for(int i=0;i<N;i++){
		int tmp;
		scanf("%d",&tmp);
		history[i]=tmp;
		for(int j=0;j<i;j++){
			if(tmp==history[j]){
				puts("NO");
				return 0;
			}
		}
	}
	puts("YES");
	return 0;
}

	

