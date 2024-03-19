#include <stdio.h>
#define Not_Found 0
#define Found 1
#define MAX 10000
#define max 500

int n;

int LinerSearch(int *,int);

int main(){

	int S[MAX],T[max],q,count,i;

	scanf("%d",&n);
	for( i = 0; i < n; i++) scanf("%d",&S[i]);
	
	scanf("%d",&q);
	for( i = 0; i < q; i++){
		scanf("%d",&T[i]);
		if(LinerSearch(S,T[i]) == Found) count++;
	}

	printf("%d",count);

	return 0;

}


int LinerSearch(int *A,int key){

	int i=0;

	//A[n] = &key;

	while(A[i] != key){
		i++;
		if(i == n) return Not_Found;
	}
	return Found;
}