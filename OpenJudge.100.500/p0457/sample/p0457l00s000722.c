#include<stdio.h>
#include <assert.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

/*
	入力例：
	3
	1 1 3
*/
long lA[200000]={0};
long lB[200000]={0};

long getNext(long N,long M,long i,long j){
	if (i==N){
		return 1;
	}
	if (j==M) {
		return 0;
	}
	if(lA[i]<lB[j]){
		return 0;
	} else if(lA[i]== lB[j]){
		return getNext(N,M,i+1,j+1);
	}else{
		return 1;
	}
}
int main(){
	long lN=0;
	long lM=0;
	long lK=0;
	long lTotal=0;
	long lCnt=0;
	long i,j;
	scanf("%ld %ld %ld", &lN,&lM,&lK);
	for(i=0;i<lN;i++){
	 scanf("%ld", &lA[i]);
	}
	for(i=0;i<lM;i++){
	 scanf("%ld", &lB[i]);
	}
	j=0;
	i=0;
	while(i<lN || j<lM){
		if(getNext(lN,lM,i,j)==0){
			lTotal+= lA[i];
			i++;
			lCnt++;
		} else {
			lTotal+= lB[j];
			j++;
			lCnt++;
		}
		if(lTotal>lK){
			printf("%ld\n",lCnt-1);
			return 0;
		}
			
	}
	printf("%ld\n",lCnt);
	return 0;
}