#include<stdio.h>

int main(){
	int N;
	long long A[200000];

	scanf("%d",&N);

	for(int i=0;i<N;i++){
		scanf("%d",&A[i]);
	}	

	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			if(i==j){
				break;
			}
			if(A[i]==A[j]){
				printf("NO\n");
				return 0;
			}
		}
	}
	printf("YES\n");
	return 0;
}