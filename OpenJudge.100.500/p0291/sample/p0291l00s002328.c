#include<stdio.h>

void read(int *n,int A[]){
	scanf("%d",n);
	int i;
	for (i = 0; i < *n; i++) {
		scanf("%d", &A[i]);
	}
}

int getprofit(int n,int A[]){
	int i,profit,max,min,a;
	i = 0;
	a = 0;
	max = A[i]; min = A[i];
	profit = A[1] - A[0];
	for(i;i<n;i++){
		if(A[i]>max){
			max = A[i];
			a = 1;
		}
		if(A[i]<min){
			min = A[i];
			max = A[i];
		}
		if(A[i]<max){
			if (profit<max-min){
				profit= max - min;
			}
		}
	}
	if (a=1&&profit<max-min){
		profit=max-min;
	}

	return profit;
}

int main(){
	int n,A[200000];
	read(&n,A);
	printf("%d\n",getprofit(n,A));

	return 0;
}