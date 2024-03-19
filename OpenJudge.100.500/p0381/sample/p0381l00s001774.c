#include <stdlib.h>
#include <stdio.h>

int main(){
	int n, x;
	int i, j, k;
	int sum=0;

	while(1){
		scanf("%d %d", &n, &x);
		
		if((x == 0)&&(n == 0))
			break;
		sum = 0;
		for(i=1; i<=n; i++){
			for(j=i+1; j<=n; j++){
				for(k=j+1; k<=n; k++){
					if(x == i+j+k){
				/*		printf("%d, %d, %d\n", i, j, k);*/
						sum = sum + 1;
					}
				}
			}
		}
		printf("%d\n", sum);

	}

	return 0;

}
