#include<stdio.h>

int cnt(int n){
	int cnt=0,i,j,flag[1000000]={0};
	for(i=2;i<=n;i++){
		for(j=2;i*j<=n;j++){
			if(flag[i*j]==0){
				flag[i*j]=1;
			}
		}
	}
	for(i=2;i<=n;i++){
		if(flag[i]==0){
			cnt++;
		}
	}
	return cnt;
}
				
int main(void){
	int n;
	while(scanf("%d",&n)!=EOF){
		printf("%d\n",cnt(n));
	}
	return 0;
}