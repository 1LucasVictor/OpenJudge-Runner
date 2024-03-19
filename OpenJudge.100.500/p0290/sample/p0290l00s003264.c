#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int sort(const void*a,const void*b){
	return *(int*)a-*(int*)b;
}

int main(){
	int N;
	scanf("%d",&N);
	int data[N];
	int i,j;
	for(i=0;i<N;i++){
		scanf("%d",&data[i]);
	}
	qsort((void*)data,N,sizeof(int),sort);
	int count=0;
	int max;
	for(i=0;i<N;i++){
		max=data[i]/2;
		for(j=2;j<=max;j++){
			if(data[i]%j==0){
				max=0;
				break;
			}
		}
		if(max!=0){
			count++;
		}
	}
	printf("%d\n",count);
	return 0;
}