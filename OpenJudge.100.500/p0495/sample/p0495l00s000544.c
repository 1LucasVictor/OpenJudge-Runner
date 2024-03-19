#include <stdio.h>

int main(){
	
	char A, B, C;
	
	scanf ("%c %c %c", &A, &B, &C);
	
	if ((A==B & A==C && B==C) || (A != B && A != C && B != C))
	{
		printf("No");
	}
	else{
		printf("Yes");
	}
	
	return 0;
}