#include <stdio.h>
int main(){
	int i,j,k,n,x,cnt;
	for(;;){
		cnt=0;
		scanf("%d %d",&n,&x);
		if(n==0 && x==0)break;
		for(i=1;i<=n;i++){
			for(j=1;j<=n;j++){
				if(i==j)continue;
				for(k=1;k<=n;k++){
					if(i==k || j==k)continue;
					else if(i+j+k==x){
						cnt++;
					}
				}
			}
		}
		cnt=cnt/6;
		printf("%d\n",cnt);
	}
	return 0;
}
	
