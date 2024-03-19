#include <stdio.h>
#include <stdlib.h>

int cmp( const void *p, const void *q ) {
    return *(int*)p - *(int*)q;
	}

int main(){
	int N,nn;
	int A[200005];
	int flag=0;
	
	scanf("%d",&N);
	
	for(int i=0;i<N;i++){
		scanf("%d",&A[i]);
	}
		
	qsort( A, N, sizeof(int), cmp );
	
	for(int i=0;i<N;i++){
		if(A[i]==A[i+1]){
			flag =1;
			break;
		}
	}
	
	if(flag == 1){
		printf("NO");
	}
	else printf("YES");

	return 0;
}
