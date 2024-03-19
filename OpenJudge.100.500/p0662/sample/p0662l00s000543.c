#include <stdio.h>

int main()
{
	int A, B, C, D, diff;
	scanf("%d %d %d %d", &A, &B, &C, &D); 
	
	int temp;
	if (A > C) {
		temp = A;
		A = C;
		C = temp;
		temp = B;
		B = D;
		D = temp;
	}
	
	if (C > B) 
		diff = 0;
	else {
		if (B >= D)
			diff = D - C;
		else if (B < D)
			diff = B - C;
	}
	printf("%d", diff);
	
	return 0;
}