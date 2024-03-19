#include <stdio.h>

int main(void){
	int n;
	int i,j,k,l;

	while(scanf("%d", &n) != EOF){
		int lim = 10;
		int sum = 0;

		if(n<9) lim = n+1;
		for(i=0;i<lim;i++){
			for(j=0;j<lim;j++){
				for(k=0;k<lim;k++){
					for(l=0;l<lim;l++){
						if(i+j+k+l==n){
							sum++;
						}
					}
				}
			}
		}

		printf("%d\n",sum);
	}
	return 0;
}