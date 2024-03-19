#include<stdio.h>
#include<string.h>
#include<math.h>
#include <stdlib.h>
#include<ctype.h>

//qsort
int compare_int(const void *a, const void *b)
{
    return *(int*)a - *(int*)b;
}

//比較
int max(int a, int b){
	if (a>b) return a;
	else return b;
}

int min(int a,int b) {
	if(a>b) return b;
	else return a;
}


//main関数
int main() {
	long A,B,C,K;
	scanf("%ld %ld %ld %ld",&A,&B,&C,&K);
	
	if( K<= A ){
		printf("%ld",A);
		return 0;
	}
	if( K<=(A+B)){
		printf("%ld",A);
		return 0;
	}
	if(K<=A+B+C){
		printf("%ld",A-(K-A-B));
		return 0;
	}
}