#include<stdio.h>

main(){
	int i,j,k;
	int n;
	int x;
	int ans=0;
	
	for(;scanf("%d %d",&n,&x),n!=0 && x!=0;){
		ans = 0;
		for(i=1;i<=n;i+=3){
			for(j=2;j<=n;j+=3){
				for(k=3;k<=n;k+=3){
					if((i+j+k) == x){
						ans++;
					}
				}
			}
		}
		printf("%d",ans);
	}
}