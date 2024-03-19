#include <stdio.h>
#include <math.h>

int N;
int A[1000];

int insertion(int a, int b);
int print(int d[], int c);

int main(){

	int i = 0;
	int ab, cd;
   
	scanf("%d %d", &ab, &cd);
	

	printf("%d", insertion(ab, cd));

}

int insertion(int a, int b){
	int v;
	int i;
	int j;
	int y;

	//printf("OK");
	
	if (a <= b){
		v = a;
		a = b;
		b = a;
	}

	while (b > 0){
		j = b;
		b = a % b;
		a = j;
	}

	
	for (j = 0; j <= b; j++){
		if (b == 0 && j == 0){
			y = a;
			return y;
		}

		if ((a%j) == 0 && (b%j) == 0){
			y = j;
			return y;
		}
	}

}