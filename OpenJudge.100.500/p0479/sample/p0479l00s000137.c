#include<stdio.h>
#include<string.h>
#include<math.h>
#include <stdlib.h>
#include<ctype.h>
int compare_int(const void *a, const void *b)
{
    return *(int*)a - *(int*)b;
}

int main () {
	
	int N;
	scanf("%d",&N);
	
	int ans[N+1];
	for(int i=0;i<N+1;i++){
		ans[i] = 0;
	}
	
	int A[N+1];
	for(int i=2;i<=N;i++){
		scanf("%d",&A[i]);
		ans[A[i]]++;
	}
	
	for(int i=1;i<=N;i++){
		printf("%d\n",ans[i]);
	}
	
	return 0;
}