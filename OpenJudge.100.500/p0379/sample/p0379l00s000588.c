#include<stdio.h>

int main(){
	int i,j;
	int n,m;
	int a[100][100],b[100];
	
	
	for(i=0;i<100;i++){
		b[i]=0;
		for(j=0;j<100;j++)a[i][j]=0;
	}
	
	scanf("%d%d",&n,&m);
	int ans[n];
	for(i=0;i<n;i++){
		ans[i]=0;
		for(j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(j=0;j<m;j++){
			scanf("%d",&b[j]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			ans[i]+=a[i][j]*b[j];
		}
		printf("%d\n",ans[i]);
	}
	
	
	
	return 0;
}