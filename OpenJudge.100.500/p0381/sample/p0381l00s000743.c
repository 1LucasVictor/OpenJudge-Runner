#include<stdio.h>

int main(void)
{
	int n,x,i,j,k,m;
	int l = 0;
	int sum,total = 0;
        int box[300] = {};
	
	while(1){
		scanf("%d %d",&n, &x);
		if(n,x == 0)break;
		for(i = 1;i <= n;i++){
			for(j = 1;j <= n;j++){
				for(k = 1;k <= n;k++){
					if(i != j && j != k && i != k){
						if(i < j && j < k){
							sum = i + j + k;
							if(sum == x){
								total++;
							}
						}
					}
				}
			}
		}
		box[l] = total;
		l++;
	}
	for(m = 0;m < l;m++){
		printf("%d\n",box[m]);
	}
	return 0;
}