#include<stdio.h>

int a[100][100];
int b[100];
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++)for(int j=0;j<m;j++)scanf("%d",&a[i][j]);
	for(int i=0;i<m;i++)scanf("%d",b+i);
	for(int i=0;i<n;i++){
		int ans=0;
		for(int j=0;j<m;j++)ans+=a[i][j]*b[j];
		printf("%d\n",ans);
	}
}
