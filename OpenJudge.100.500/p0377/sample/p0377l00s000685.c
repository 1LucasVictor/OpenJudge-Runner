#include <stdio.h>

int main(void){

	char c;
	int num;
	int n,i;
	int S[13] = {0};
	int H[13] = {0};
	int C[13] = {0};
	int D[13] = {0};

	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf(" %c", &c) ;
		scanf("%d",&num);

		if(c == 'S')
			S[num-1] = 1;
		else if(c == 'H')
			H[num-1] = 1;
		else if(c == 'C')
			C[num-1] = 1;
		else if(c == 'D')
			D[num-1] = 1;
	}
	for(i=0; i<13; i++){
		if(S[i] == 0)
			printf("S %d\n",(i+1));
	}
	for(i=0; i<13; i++){
		if(H[i] == 0)
			printf("H %d\n",(i+1));
	}
	for(i=0; i<13; i++){
		if(C[i] == 0)
			printf("C %d\n",(i+1));
	}
	for(i=0; i<13; i++){
		if(D[i] == 0)
			printf("D %d\n",(i+1));
	}

	return 0;
}