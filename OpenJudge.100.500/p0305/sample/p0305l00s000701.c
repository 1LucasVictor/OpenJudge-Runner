#include <stdio.h>
#define INFTY 2000000000
#define MAX 500000

int cnt;
int L[MAX/2+2];
int R[MAX/2+2];
void mergesort(int A[],int n, int left,int right);
void merge(int A[],int n, int left,int mid,int right);

int main(void){
	int A[MAX];
	cnt=0;
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&A[i]);
	}
	mergesort(A,n,0,n);
	
	for(i=0;i<n;i++){
	if(i>0) printf(" ");
	printf("%d",A[i]);
	}
	printf("\n");
	printf("%d\n",cnt);
	return 0;
}

void merge(int A[],int n, int left,int mid,int right){
	int n1=mid-left;
	int n2=right-mid;
	for(int i=0;i<n1;i++){
		L[i]=A[left+i];
	}
	for(int i=0;i<n2;i++){
	
		R[i]=A[mid+i];
	}
	
	L[n1]=R[n2]=INFTY;
	int i=0,j=0;
	
	for(int k=left;k<right;k++){
		cnt++;
		if(L[i]<=R[j]){
			A[k]=L[i++];
		}
		else{
			A[k]=R[j++];
		}
	}
}

void mergesort(int A[],int n,int left,int right){
	if(left+1<right){
		int mid=(left+right)/2;
		mergesort(A,n,left,mid);
		mergesort(A,n,mid,right);
		merge(A,n,left,mid,right);
	}
}


