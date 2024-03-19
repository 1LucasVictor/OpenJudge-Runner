#include<stdio.h>

int main(){
	int n,i,j,k,l,d[1000000]={0},cnt;
	while(scanf("%d",&n)!=-1){
		for(i=2;i<=n;i++){
			if(d[i]==1) continue;
			for(j=1,k=0;j<=n;j++){
				if(i%j==0) k++;
			}
			if(k==2) for(l=2;i*l<=n;l++) d[i*l]=1;
		}
		for(i=2;i<=n;i++) if(!d[i]) cnt++;
		printf("%d\n",cnt);
		cnt=0;
	}
	return 0;
}