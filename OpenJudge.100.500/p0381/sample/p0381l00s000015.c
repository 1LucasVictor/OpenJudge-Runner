#include<stdio.h>
int main(void){
	int n,x,k,i,j,ans;
	while(1){
		ans=0;
		scanf("%d %d",&n,&x);
		if(!n && !x) break;
		for(i=1;i<=n-2;i++){
			for(j=i+1;j<=n-1;j++){
				for(k=j+1;k<=n;k++){
					if(i+j+k==x) ans++;
				}
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}