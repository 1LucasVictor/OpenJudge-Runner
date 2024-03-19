#include <stdio.h>
int main ()
{
	int A,B,C,D,E,F;
	-1000<=A;
	B <=1000;
	scanf ("%d", &A);
	scanf ("%d", &B);
	C = A + B;
	D = A - B;
	E = A * B;
	F = "0";
	if (C > D && C > E){
		printf ("%d", C);
	} else if ( D > C && D > E){
		printf ("%d", D);
	} else if (E > C && E > D){
		printf ("%d", E);
	} else if (A = B = 0) {
	   printf ("%d", F);
	}
}