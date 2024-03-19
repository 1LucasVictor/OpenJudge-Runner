#include <stdio.h>

int main(void) {
	int c[4][13] = {0};
	int n, i;
	
	scanf("%d", &n);
	for(i = 0; n > i; i++){
		char bm;
		int bi;
		scanf("%*c%c%*c%d", &bm, &bi);
		switch(bm){
			case 'S':
			c[0][bi-1] = 1;
			break;
			case 'H':
			c[1][bi-1] = 1;
			break;
			case 'C':
			c[2][bi-1] = 1;
			break;
			case 'D':
			c[3][bi-1] = 1;
			break;
		}
	}
	
	for(i = 0; 52 > i; i++){
		if(c[i/13][i%13] == 0)
		printf("%c %d\n", i/13 == 0? 'S' : i/13 == 1 ? 'H' : i/13 == 2 ? 'C' : 'D', i%13+1);
	}
	
	return 0;
}