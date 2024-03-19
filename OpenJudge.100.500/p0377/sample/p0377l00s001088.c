#include <stdio.h>

int main(void){
	
	int n,i,ii,ca[4][13]={0},num;
	char ma;
	char mark[]={'S', 'H', 'C', 'D'};

	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf(" %c %d", &ma, &num);
		if(ma=='S') ca[0][num-1]=1;
		else if(ma=='H') ca[1][num-1]=1;
		else if(ma=='C') ca[2][num-1]=1;
		else if(ma=='D') ca[3][num-1]=1;
	}

	for(i=0; i<4; i++){
		for(ii=0; ii<13; ii++){
			if(ca[i][ii]==0){
				printf("%c %d\n", mark[i], ii+1);
			}
		}
	}
	return 0;
}