#include <stdio.h>
#include <limits.h>
int A[100][100];
int d[100];
int v[100];

void getMST(int n){
	int i,j,k=1;
	int minCost,min,result=0;

	d[0] = 0;
	v[0] = 1;
	for(i=1;i<n;i++) v[i]=0;

	while(1){
		minCost = 2001;
		for(i=0;i<k;i++){
			for(j=0;j<n;j++){
				if( A[d[i]][j]<minCost && A[d[i]][j] != -1 && v[j] != 1){
					minCost = A[d[i]][j];
					min = j; 
				}
			}
		}

		if(k != n){
			d[k] = min;
			v[min] = 1;
			result += minCost;
			k++;
		}
		else break;
	}
	printf("%d\n",result);
}

int main(){
	int n;
	int i,j;

	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&A[i][j]);
			//A[i][j] = A[i][j]==-1?INT_MAX:A[i][j];
		}
	}

getMST(n);

	return 0;
}