#include <stdio.h>

int main(){
	int i, j, k, l;
	int comb_num;
	int n;


	while( scanf("%d", &n) != EOF ){

		comb_num = 0;

		for( i=0; i<10; i++ ){
			for( j=0; j<10; j++ ){
				for( k=0; k<10; k++ ){
					for( l=0; l<10; l++ ){
						if( i+j+k+l == n )
							comb_num++;
					}
				}
			}
		}

		printf("%d\n", comb_num);
		
	}

	return 0;
}