/* ex3_4
   key_tree */

#include <stdio.h>

// Nを1-9で割った商が1-9かつ余りが0になればよい
int main(void) {
	int N;
	scanf("%d", &N);
	int i = 1;
	// 1-9まで調べる
    while(i < 10){
		int quotient = N / i;
		int remainder = N % i;
    	//商が1-9かつ余り0
        if(quotient >= 1 && quotient <= 9 && remainder == 0){
			printf("Yes\n");
			break;/*当てはまったらwhile脱出*/
		}
		i += 1;
    }
	if(i == 10){
	    printf("No\n");
    }
	return 0;
}
