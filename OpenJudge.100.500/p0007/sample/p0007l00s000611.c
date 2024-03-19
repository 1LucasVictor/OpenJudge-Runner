#include <stdio.h>

int main(void)
{
	int i, j, k, l, n, cnt=0;

	while(scanf("%d", &n) != EOF){
		for(i=1; i<=9; i++){
			for(j=1; j<=9; j++){
				for(k=1; k<=9; k++){
					for(l=1; l<=9; l++){
						if(i+j+k+l == n){ cnt++; }
					}
				}
			}
		}
		printf("%d\n", cnt);
	}
    return 0;
}