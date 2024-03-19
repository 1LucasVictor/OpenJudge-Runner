#include<stdio.h>
int main(void){
	int m,n,l;
	int a[100][100]={0},b[100][100]={0};
	long long int res[100][100]={0};
	int i,j,k;
	
	scanf(" %d %d %d",&m,&n,&l);
	for(i=0; i<m; i++) for(j=0; j<n; j++) scanf("%d",&a[i][j]);
	for(i=0; i<n; i++) for(j=0; j<l; j++) scanf("%d",&b[i][j]);
	
	for(i=0; i<m; i++)for(j=0; j<l; j++) for(k=0; k<n; k++) res[i][j]=res[i][j]+a[i][k]*b[k][j];
	for(i=0; i<m; i++) {
		for(j=0; j<l; j++){
			printf("%lld",res[i][j]); if(j!=l-1)printf(" ");
		} 	
	printf("\n");
	}
	
	return 0;
}