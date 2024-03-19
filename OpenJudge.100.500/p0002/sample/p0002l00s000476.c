#include <stdio.h>

#define MAX(a, b) ((a > b) ? (a) : (b))

int main(void){
	int N;
	int m;
	int a, b, c;
	int judge;
	int i;

	scanf("%d\n", &N);

	for(i=0; i<N; i++){
		m=0;
		scanf("%d %d %d", &a, &b, &c);

		m = MAX(MAX(a, b), c);
		if(a == m){
			judge = (a*a - b*b - c*c == 0);
		}else if(b == m){
			judge = (b*b - a*a -c*c == 0);
		}else if(c == m){
			judge = (c*c - a*a -b*b == 0);
		}

		if(judge == 1){
			puts("YES");
		}else{
			puts("NO");
		}
	}

	return 0;
}