#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main(){
	int N,M;
	scanf("%d %d",&N,&M);

	int s[M];
	int c[M];

	int num[3] ={0};
	int miss = -1;

	for(int i=0; i<M; i++){
		scanf("%d %d",&s[i],&c[i]);
	}

	if(N > 1){
		for(int i=0; i<M; i++){
			if(s[i] == 1 && c[i] == 0){
				printf("%d\n",miss);
				return 0;
			}
		}
	}
	if(N == 3){
		for(int i=0; i<M; i++){
			if(s[i] == 2 && c[i] == 0){
				printf("%d\n",miss);
				return 0;
			}	
		}
	}
	
	for(int i=0; i<M; i++){
		for(int j=0; j<M; j++){
			if(s[j] > N){
				printf("%d\n",miss);
				return 0;
			}
			else if(s[i] == s[j] && i != j && c[i] != c[j]){
				printf("%d\n",miss);
				return 0;
			}
		}	
	}
	for (int i = 0; i < M; i++){
		num[s[i]-1] = c[i];
	}
	
	for(int i=0; i<N; i++){
		printf("%d",num[i]);
	}
	printf("\n");

	return 0;
}