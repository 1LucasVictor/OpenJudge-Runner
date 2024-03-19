#include <stdio.h>
int main ()
{
	int A,B,C,D,E;
	-1000<=A;
	B <=1000;
	scanf ("%d", &A);
	scanf ("%d", &B);
	C = A + B;
	D = A - B;
	E = A * B;
	if (C > D && C > E){
		printf ("%d", C);
	} else if ( D > C && D > E){
		printf ("%d", D);
	} else if (E > C && E > D){
		printf ("%d", E);
	}
	return 0;
}