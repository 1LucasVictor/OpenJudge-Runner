#include <stdio.h>
#include <string.h>

int ans=0;
int n;

void calc(int sum,int m){
	int i;
	if(m==4){
		if(sum==n)ans++;
		return;
	}
	if(sum>n)return;
	for(i=0; i<=9; i++){
		calc(sum+i,m+1);
	}

}

int main(){
	while(scanf("%d",&n)!=EOF){
		ans=0;
		calc(0,0);
		printf("%d\n",ans);
	}
}