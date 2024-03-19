#include <stdio.h>
int main(void) {
	
	int a, b, i, j, count;

	int yaku, bai;
	
	while( scanf("%d",&a) != EOF ) {
			int boya[1000] = {0}, boyb[1000] = {0};
		scanf("%d",&b);
		yaku = 1;
		bai = 1;
		count = 0;
		while(a != 1) {
			for(i = 2; i <= a; i++ ) {
				if( a % i == 0 ) {
					boya[count] = i;
					count++;
					a /= i;
					break;
				}
			}
		}
		count = 0;
		while( b != 1 ) {
			for(i = 2; i <= b; i++ ) {
				if( b % i == 0 ) {
					boyb[count] = i;
					count++;
					b /= i;
					break;
				}
			}
		}
		
		for(i = 0; i >= 0; i++ ) {
			if(boya[i] == 0 ) break;
			for(j = 0; j >= 0; j++ ) {
				if( boyb[j] == 0 ) break;
				if( boya[i] == boyb[j] ) {
					yaku *= boya[i];
					boyb[j] = 1;
					boya[i] = 1;
					break;
				}
			}    
		}
		bai *= yaku;
		for(i = 0; i >= 0; i++ ) {
			if( boya[i] == 0 ) break;
			bai *= boya[i];
		}
		for(i = 0; i >= 0; i++ ) {
			if( boyb[i] == 0 ) break;
			bai *= boyb[i];
		}
		printf("%d %d\n",yaku,bai);
	}
	return(0);
}