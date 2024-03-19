#include <stdio.h>


int main(void)
{
	int num, i, s = 0;
	int div[10000];
	
	scanf("%d", &num);

	for (i = 1; i <= num; i++){

		if ((i % 3) == 0){
			s++; 
			div[s] = i;
		}
		else if ((i % 10) == 3){
			s++;
			div[s] = i;
		};
	};
	printf(" ");
	for (i = 1; i <= s; i++){
		printf("%d", div[i]);
		if (i != s) printf(" ");
		else printf("\n");
	};

	return 0;
}