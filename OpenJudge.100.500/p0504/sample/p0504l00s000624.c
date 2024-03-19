#include <stdio.h>

int main(){
	int H, A, i;
	scanf ("%d %d", &H, &A);
	for(i=0; H>0; i++){
		H=H-A;
	}
	printf("%d", i);
}