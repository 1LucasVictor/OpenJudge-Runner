#include<stdio.h>

int main(void)
{
	int n,card[4][13] = {0};
	int i, j, d;
	char m;

	scanf("%d", &n);

	for(i=0;i<n;i++){
		scanf(" %c %d", &m, &d);

		if(m=='S')card[0][d-1]=1;
		else if(m=='H')card[1][d-1]=1;
		else if(m=='C')card[2][d-1]=1;
		else if(m=='D')card[3][d-1]=1;
	}

	for(i=0;i<4;i++){
		for(j=0;j<13;j++){
			if(card[i][j] == 0){
				switch(i){
					case 0: printf("S %d", j+1);
							break;
					case 1: printf("H %d", j+1);
							break;
					case 2: printf("C %d", j+1);
							break;
					case 3: printf("D %d", j+1);
							break;
				}	
				printf("\n");
			}
		}

	}
	return 0;
}