#include <stdio.h>

int main(void) {
	int card[4][13] = {0};
	int j,k,n;
	char c;
	
	scanf("%d",&n);
	
	for(k=0;k<n;k++){
		scanf(" %c %d",&c,&j);
		if     (c == 'S') card[0][j] = 1;
		else if(c == 'H') card[1][j] = 1;
		else if(c == 'C') card[2][j] = 1;
		else if(c == 'D') card[3][j] = 1;
		else{}
	}
	
	for(k=0;k<4;k++){
		for(j=1;j<=13;j++){
			if     (k == 0 && card[k][j] == 0) printf("S %d\n",j);
			else if(k == 1 && card[k][j] == 0) printf("H %d\n",j);
			else if(k == 2 && card[k][j] == 0) printf("C %d\n",j);
			else if(k == 3 && card[k][j] == 0) printf("D %d\n",j);
			else{}
		}
	}
	return 0;
}