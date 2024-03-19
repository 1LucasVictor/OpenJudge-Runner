#include <stdio.h>

int main(){
	int n,m;
	int k;
	scanf("%d %d %d",&n,&m,&k);
	int i,j,Rmax=0;
	int a[n+1],b[m+1],c[n+1],d[m+1];
	c[0]=0;
	d[0]=0;
	for(i=1;i<=n;i++){
		scanf("%d",&a[i]);
		c[i]=c[i-1]+a[i];
	}
	for(j=1;j<=m;j++){
		scanf("%d",&b[j]);
		d[j]=d[j-1]+b[j];
	}
	for(i=0;i<=n;i++){
		for(j=0;j<=m;j++){
			if(c[i]+d[j]<=k){
				if(Rmax<i+j){
					Rmax=i+j;
				}
			}
		}
	}
	printf("%d\n",Rmax);
	return 0;
}