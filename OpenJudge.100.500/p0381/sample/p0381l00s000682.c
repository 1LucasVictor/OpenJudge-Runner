#include<stdio.h>
int main(void){
	int a[100][100],b,i,j,k,m,n[100],l,x[100],r,f;
	char d;
	
	for(i=0;i<100;++i){
		n[i]=0;
		x[i]=0;
	}
	for(i=0;;++i){
		scanf("%d %d",&n[i],&x[i]);
		if(x[i]==0 && n[i]==0)break;
	}
	l=i;
	for(i=0;i<l;++i){
		for(j=0;j<n[i];++j)a[i][j]=j+1;
	}
	for(m=0;m<l;++m){
		for(i=0,r=0;i<n[m];++i){
			for(j=i+1;j<n[m];++j){
				for(k=j+1;k<n[m];++k){
					if(a[m][i]+a[m][j]+a[m][k]==x[m])r=r+1;
				}
			}
		}printf("%d\n",r);
	}

	return 0;
}