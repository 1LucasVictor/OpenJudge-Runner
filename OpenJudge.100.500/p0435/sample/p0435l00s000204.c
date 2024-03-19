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
	long long N,D;
	scanf("%lld %lld",&N,&D);
	
	long long point[N][2];
	long long count = 0;
	for(long long i=0; i<N ; i++){
		scanf("%lld %lld",&point[i][0] ,&point[i][1] );
		if( D*D >= point[i][0]*point[i][0] + point[i][1]*point[i][1] ){
			count++;
		}	
	}
	printf("%lld",count);
}