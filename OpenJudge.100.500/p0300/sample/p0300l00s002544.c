#include<stdio.h>

#define NMAX 10000

int linearSearch(int A[], int n, int key){
	int i = 0;
	A[n] = key;
	while(A[i] != key){
		i++;
	}
	return i != n;
}

int main(void){
	int x,i,n,q,key,sum = 0;
	int A[NMAX+1];
	scanf("%d" ,&n);
	for(i = 0; i < n; i++){
		scanf("%d" ,&A[i]);
	}
	scanf("%d" ,&q);
	for(i = 0; i < q; i++){
		scanf("%d" ,&key);
		x = linearSearch(A,n,key);
		if(x != 0){
			sum++;
		}
	}
	printf("%d\n" ,sum);
	return 0;
}
