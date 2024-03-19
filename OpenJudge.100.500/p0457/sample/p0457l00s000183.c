#include <stdio.h>

int main(){
	int n,m;
	long long int k;
	scanf("%d %d %d",&n,&m,&k);
	int i,j,a[n+1],b[m+1],Rmax=0;
	for(i=1;i<=n;i++) scanf("%d",&a[i]);
	for(j=1;j<=m;j++) scanf("%d",&b[j]);
	unsigned long long int c[n+1],d[m+1],time=0;
	for(i=0;i<=n;i++){
		if(i==0) c[i]=0;
		else     c[i]=c[i-1]+a[i];
	}
	for(j=0;j<=m;j++){
		if(j==0) d[j]=0;
		else     d[j]=d[j-1]+b[j];
	}
	for(i=0;i<=n;i++){
		time=c[i];
		if(time>k) break;
		else{
			for(j=0;j<=m;j++){
				time=c[i];
				time=time+d[j];
				if(time<=k && Rmax<i+j){
					Rmax=i+j;
				}
			}
		}
	}
	printf("%d\n",Rmax);
	return 0;
}