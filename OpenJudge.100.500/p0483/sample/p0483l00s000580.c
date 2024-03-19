#include<stdio.h>

int main(void){

	int N, N1, N2, N3;

	scanf("%d", &N);

	N3 = N / 100;
	N2 = (N - N3 * 100)  / 10; 
	N1 = N - N3 * 100 - N2 * 10;

	if(N1 == 7 || N2 == 7 || N3 == 7 )
		printf("Yes");
	else
		printf("No");

	return 0;

}