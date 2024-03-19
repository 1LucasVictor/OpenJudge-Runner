#include<stdio.h>

short hyou[999999];


int main(){
	int i,j,count,n,flag;
	while(scanf("%d",&n)!=EOF){
		count=0;
		for(i=0;i<=n;i++){
			hyou[i]=0;
		}

		for(i=4;i<=n;i+=2){
			hyou[i]=1;
		}

		j=3;
		while(j*j<=n){
			for(i=j;i<=n;i+=j){
				hyou[i+j]=1;
			}
			while(hyou[j++]==1){
				if(j>n)break;
			}
		}

		for(i=2;i<=n;i++) if(hyou[i]==0) count++;
		printf("%d\n",count);
	}

	return 0;
}