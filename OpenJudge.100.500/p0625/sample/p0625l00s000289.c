#include<stdio.h>

int main(){
	int A, B;
	scanf("%d %d", &A, &B);
	if (A > 8){
		printf(":(\n");
	}
	else if (B > 8){
		printf(":(\n");
	}
	else{
		printf("Yay!\n");
	}
	return 0;
}