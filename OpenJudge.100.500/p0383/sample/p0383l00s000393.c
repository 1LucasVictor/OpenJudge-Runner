#include<stdio.h>
int main()
{
	int a[101][101]={0},b[101][101]={0};
	long c;
	int i,j,k;
	int n,m,l;
	
	
	scanf("%d %d %d",&n,&m,&l);
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<m;i++){
		for(j=0;j<l;j++){
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<l;j++){
			for(k=c=0;k<m;k++){
				c+=a[i][k]*b[k][j];
			}
			printf("%d",c);
			if(j!=l-1){
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}