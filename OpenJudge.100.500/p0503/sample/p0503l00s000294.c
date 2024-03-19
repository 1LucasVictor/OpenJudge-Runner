#include<stdio.h>
#include<stdlib.h>
int main(void){
	int N;
	scanf("%d",&N);
	int *history=malloc(sizeof(int)*N);
	for(int i=0;i<N;i++){
		scanf("%d",&history[i]);
		for(int j=0;j<i;j++){
			if(history[i]==history[j]){
				puts("NO");
				return 0;
			}
		}
	}
	puts("YES");
	return 0;
}

	

