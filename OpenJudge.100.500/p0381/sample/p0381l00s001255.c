#include<stdio.h>

main(){
	int i,j,k;
	int n;
	int x;
	int ans;
	
	for(;scanf("%d %d",&n,&x),n!=0,x!=0;){
		ans = 0;
		for(i=1;i<=n-2;i++){
			for(j=i+1;j<=n-1;j++){
				for(k=j+1;k<=n;k++){
					if((i+j+k) == x){
						ans++;
					}
				}
			}
		}
		printf("%d\n",ans);
	}
}