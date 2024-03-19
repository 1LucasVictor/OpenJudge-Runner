#include<stdio.h>
int i,j,k;
int n,x;
int count(int n,int x){
	int cnt = 0;
	for(i=1; i<=n-2; i++){
		for(j=i+1; j <= n-1; j++){
			for(k= j+1; k<=n; k++){
				if(i+j+k ==x){
					cnt++;
				}
			}
		}
	}
	return cnt;
}

main(){
	while(1){
		scanf("%d %d",&n,&x);
		if(n == 0 && x == 0){
			break;
		}
		printf("%d\n",count(n,x));
	}
	return 0;
}
		