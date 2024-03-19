#include<stdio.h>
int main(void){
	int n,x;
	int i,j,k,cnt = 0,sum = 0;
	
	while(1){
		scanf("%d %d",&n,&x);
		if(n == 0 && x == 0)break;
		for(i  = 1;i <= n;i++){
			for(j = i+1;j <= n;j++){
				for(k = j+1;k <= n;k++){
					sum = i+j+k;
					//if(i == k || j == k || i == j)continue;
					if(sum == x){
						cnt++;
					}
				}
			}
		}
	}
	printf("%d\n",cnt);
	return 0;
}