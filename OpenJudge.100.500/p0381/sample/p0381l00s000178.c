#include<stdio.h>


int main(void)
{
	int n,x,i,j,k,sum;

	while(1){
		sum = 0;
		scanf("%d %d",&n, &x);
		if(n,x == 0)break;
		else{
			for(i = 1;i <= n;i++){
				for(j = i + 1;j <= n;j++){
					for(k = j + 1;k <= n;k++){
						if(i + j + k == x){
							sum++;
						}
					}
				}
			}
			printf("%d\n",sum);
		}
	}
	return 0;
}