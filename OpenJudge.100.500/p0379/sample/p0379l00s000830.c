#include<stdio.h>
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int a[100][100]={0};
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++) scanf("%d",&a[i][j]);
	}
	
	int b[100]={0};
	for(i=0;i<m;i++) scanf("%d",&b[i]);
	
	for(i=0;i<n;i++){
		int ans=0;
		for(j=0;j<m;j++){
			ans+=a[i][j]*b[j];
		}
		printf("%d\n",ans);
	}
	
	return 0;
}
