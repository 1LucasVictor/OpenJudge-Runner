#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	char N[10];
	fgets(N, 4, stdin);
	if (N[0] == N[1] && N[1] == N[2]) puts("No");
	else puts("Yes");

	return 0;
}
