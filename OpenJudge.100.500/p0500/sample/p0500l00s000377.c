#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
	int n,m,s,c,i;
	int ans[3]={-1,-1,-1};

	scanf("%d %d\n",&n,&m);
	for(i=0;i<m;i++){
		scanf("%d %d\n",&s,&c);
		if(ans[s-1]==-1){
			ans[s-1]=c;
		}else if(ans[s-1]==c){
		}else{
			printf("-1");
			return 0;
		}
		if(n!=1&&s==1&&c==0){
			printf("-1");
			return 0;
		}
	}
	if(n==2||n==3){
		for(s=0;s<n;s++){
			if(ans[s]==-1){
				if(s==0){
					ans[s]=1;
				}else{
					ans[s]=0;
				}
			}
		}
	}
	printf("%d%d%d",ans[0],ans[1],ans[2]);
	return 0;
}