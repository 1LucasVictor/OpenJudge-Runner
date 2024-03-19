#include<stdio.h>
int main(void){
	int n,m,l;
	int i,j,k;

	scanf("%d %d %d",&n,&m,&l);

	/*C99kikaku deha hairetutyou ni hensuu siyo kanou
	  {0}syokika ha fukano rasii..*/
	long int A[n][m],B[m][l];
	long int C[n][l];

	//torikomi
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&A[i][j]);
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<l;j++){
			scanf("%d",&B[i][j]);
		}
	}
	
	//keisan
	for(i=0;i<n;i++){
		for(j=0;j<l;j++){
			C[i][j]=0;						//kokode syokika
			for(k=0;k<m;k++){
				C[i][j]+=A[i][k]*B[k][j];
			}
		}
	}

	//hyouji
	for(i=0;i<n;i++){
		for(j=0;j<l;j++){
			printf("%d",C[i][j]);
			if(j!=(l-1)) printf(" ");
			else printf("\n");
		}
	}
	return 0;
}