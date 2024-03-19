#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i; //割る
	int n; //入力された自然数
	int prime;
	int j = 0;
	int counter = 0; //素数の個数
	int SINcounter = 0;

	scanf("%d", &n);

	for (i = 0; i < n; i++) {

		scanf("%d", &prime);

		if ((prime % 2 == 0) && (prime != 2)) {
			counter += 2;
		}
		else {
			if (prime <= 2) {
				if (prime == 2) {
					SINcounter++;
					continue;
				}
				continue;
			}
			
			for (j = 3; j <= 10000; j += 2) {
				if ((prime % j) == 0) {
					counter++;
				}
			}
		}

			if (counter == 1){
				SINcounter++;				
			}	
			counter = 0;
	}

	printf("%d\n", SINcounter);


	return(0);

}
