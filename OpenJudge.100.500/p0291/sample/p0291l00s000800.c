#include<stdio.h>
int main(void){
		int i,j,n,maxv;
		int R[200];
		scanf("%d",&n);
		for(i=0;i<n;i++){
		scanf("%d",&R[i]);
		}
		maxv=0;
		for (j=1;j<=n-1;j++){
			for(i=1;i<=j-1;i++){
				if(R[j]-R[i]>maxv)maxv=R[j]-R[i];
			}
		}
		printf("%d\n",maxv);
}