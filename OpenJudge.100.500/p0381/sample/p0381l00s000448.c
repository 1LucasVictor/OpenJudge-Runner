#include<stdio.h>
int main(void){

	setvbuf(stdout,NULL,_IONBF,0);

	int n,x;
	int i,j,k;
	int count;
	int sum = 0;

	while(1){
		scanf("%d %d",&n,&x);
		if(n == 0 && x == 0){
			break;
		}
		else{
			count = 0;
			for(i = 1;i < n - 1;i++){
				for(j = i + 1;j < n;j++){
					for(k = j + 1;k <= n;k++){
						sum = i + j + k;
						//printf("i = %d, j = %d, k = %d, sum = %d\n",i,j,k,sum);
						if(sum == x){
							count++;
						}
						sum = 0;
					}
				}
			}
		}
		printf("%d\n",count);
	}

	return 0;
}