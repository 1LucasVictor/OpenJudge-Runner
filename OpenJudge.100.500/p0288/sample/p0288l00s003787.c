#include <stdio.h>
#define N 1000

void Insert(int A[N], int n){

	int i,j,k,key;

	for(i=0; i<n; i++){
		key = A[i];
		j = i-1;

		while( j>=0 && A[j]>key ){
			A[j+1] = A[j];
			j--;
		}

		A[j+1] = key;
		for(j=0; j<n; j++){
			printf("%d ",A[j]);
			//if(j != n-1) printf(" ");
		}
		if(i != n-1) printf("\n");
		//else printf(" ");
	}
}


int main(){

	int A[N];
	int n,i,j;

  scanf("%d",&n); //number of erement

  for(i=0; i<n; i++){
  	scanf("%d",&A[i]);
  }

 // printf("-------Result--------\n");
  Insert(A,n);
  return 0;
}
