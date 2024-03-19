#include<stdio.h>
int main(void){
	long int A; 
	long int B;
	scanf("%ld", &A);
	scanf("%ld", &B);
	if(A%2==0 && B%2==0 || A%2==1 && B%2==1){
		printf("%ld", (A+B)/2);}
		else{
			printf("IMPOSSIBLE");
	}
	return 0;
}
	
