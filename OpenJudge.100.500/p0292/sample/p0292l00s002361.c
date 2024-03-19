#include<stdio.h>
int main(void){
	int i,A[100],N,v,count=0,sum=0,count2=0;
	scanf("%d",&N);
	for(i=0;i<N;i++){
		scanf("%d",&A[i]);
	}
	for(i=0;i<N;i++){
		sum+=i;
	}
	while(1){
		for(i=N-1;i>0;i--){
			if(A[i]<A[i-1]){
				v=A[i];
				A[i]=A[i-1];
				A[i-1]=v;
				count++;
			}
		}
		count2++;
		if(sum == count2){
			break;
		}
	}
	for(i=0;i<N;i++){
		printf("%d",A[i]);
		if(i == N-1){
			printf("\n");
		}
		else{
			printf(" ");
		}
	}
	printf("%d\n",count);
	return 0;
}