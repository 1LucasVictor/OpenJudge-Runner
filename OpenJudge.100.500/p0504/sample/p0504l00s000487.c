#include <stdio.h>

int main() {
	int H, A, jumlah, hasil, a, b;
	scanf("%d %d", &H, &A);
	
	a=H/A;
	b=H/A+1;
	
	hasil=H%A;
	
	hasil==0 ? printf("%d", a):printf("%d",b);
	
	return 0;
}