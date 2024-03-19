#include<stdio.h>

int ways(int n,int m){
	int count=0,a,b,c;
	for(a=1;a<n-1;a++){
		for(b=a+1;b<n;b++){
			for(c=b+1;c<=n;c++){
				if(a+b+c==m)count++;
			}
		}
	}
	return count;
}

int main(){
	int i,c,a[1000],x[1000];
	for(c=0;c<=1000;c++){
		int n,m;
		scanf("%d %d",&a[c],&x[c]);
		if((a[c]==0)&&(x[c]==0))break;
	}
	for(i=0;i<c;i++){
		printf("%d ",ways(a[i],x[i]));
		return 0;
	}
}