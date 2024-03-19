#include <stdio.h>

int main(void){
	int N;
	int M;
	int s[3];
	int c[5];
	int a[3]={10,10,10};
	int output = 0;
	int k;

	scanf("%d %d", &N, &M);
	for (k = 0; k < M; k++) {
		scanf("%d %d", &s[k], &c[k]);
		if ( a[s[k]-1] > c[k] ) { a[s[k]-1] = c[k]; }
	}

	if(a[0]==10){
		output = -1; 
	} else {
		if (N == 1) { 
			if(a[0] == 10){ 
				output = -1;
			} else {
				output = a[0];
			}
		}
		if (N == 2) { 
      if((a[0] == 10)||(a[0]==0)){
				output = -1;
			} else {
	      if(a[1] == 10){ a[1] = 0; }
				output = a[0]*10 + a[1];
			}
		}
		if (N == 3) {
      if((a[0] == 10)||(a[0]==0)){
				output = -1;
			} else {
				if(a[1] == 10){ a[1] = 0; }
				if(a[2] == 10){ a[2] = 0; }
				output = a[0]*100 + a[1]*10 + a[2];
			}
		}
	}

	printf("%d\n", output);

	return 0;
}
