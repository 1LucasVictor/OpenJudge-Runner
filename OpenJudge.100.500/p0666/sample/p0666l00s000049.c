#include <stdio.h>
int main ()
{
	int X, A, B;
	scanf ("%d %d %d", &X, &A, &B);
	if (B <= A) {
		puts ("delicious");
	} else if (B <= A + X) {
		puts ("safe");
	} else puts ("dangerous");
	return 0;
}