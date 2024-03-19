#include <stdio.h>
int main(void) 
{
	int cards[128][14] = {{0}};
	int i, N;
	scanf("%d", &N);
	for(i = 0; i < N; i++) {
    		char c; int cn;
    		scanf("%c", &c); 
    		scanf("%c %d", &c, &cn);
    		cards[c][cn] = 1;
	}

	for(i = 1; i <= 13; i++) {
    		if(cards['S'][i] == 0) {
    			printf("S %d\n", i);
    		}
	}
	
	for(i = 1; i <= 13; i++) {
    		if(cards['H'][i] == 0) {
    			printf("H %d\n", i);
    		}	
	}
	
	for(i = 1; i <= 13; i++) {
    		if(cards['C'][i] == 0) {
    			printf("C %d\n", i);
    		}
	}
	
	for(i = 1; i <= 13; i++) {
    		if(cards['D'][i] == 0) {
    			printf("D %d\n", i);
    		}
	}
	return 0;
}

