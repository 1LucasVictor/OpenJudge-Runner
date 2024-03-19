#include <stdio.h>

int main( void )
{
	int i, n[3], N;
	
	scanf("%d", &N);

	for( i=0; i<N; i++ ){
		scanf("%d %d %d", &n[0], &n[1], &n[2]);
		if((n[0]*n[0])+(n[1]*n[1])==n[2]*n[2] ){
			printf("YES\n");
		}else if((n[1]*n[1])+(n[2]*n[2])==n[0]*n[0] ){
			printf("YES\n");
		}else if((n[0]*n[0])+(n[2]*n[2])==n[1]*n[1] ){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
	return 0;
}