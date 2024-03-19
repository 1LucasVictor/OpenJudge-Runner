#include <stdio.h>

int main(){
	int i, j, n, cls;
	char mark, dummy;
	int A[4][13] = {};
	
	//while( scanf("%d", &n) != EOF)
	scanf("%d", &n);

	for(i=0; i<n; i++) {
		scanf("%c", &dummy);
		scanf("%c %d", &mark, &cls);
		if(cls > 0 && cls <= 13) {
			if (mark == 'S') A[0][cls-1] = 1;
			if (mark == 'H') A[1][cls-1] = 1;
			if (mark == 'C') A[2][cls-1] = 1;
			if (mark == 'D') A[3][cls-1] = 1;
		}
	}

	for(j=0; j<4; j++) {
		switch(j) {
			case 0: mark = 'S'; break;
			case 1: mark = 'H'; break;
			case 2: mark = 'C'; break;
			case 3: mark = 'D'; break;
		}
		for(i=0; i<13; i++) {
			if(A[j][i]==0) printf("%c %d\n", mark, i+1);
		}
	}

	return 0;
}