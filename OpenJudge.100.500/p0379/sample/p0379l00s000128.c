#include<stdio.h>
int main(void){
	int a[100][100],b[100],n,m,sol[100];
	int i,j;
	for(j=0;j<m;j++)sol[j]=0;

	scanf("%d%d",&n,&m);
	
	for(i=0;i<n; i++)for(j=0;j<m;j++)scanf("%d",&a[i][j]);
	for(j=0;j<m;j++)scanf("%d",&b[j]);
	
	for(i=0;i<n;i++){for(j=0;j<m;j++)sol[i]=sol[i]+a[i][j]*b[j]; printf("%d\n",sol[i]);}
	
	
	return 0;
}