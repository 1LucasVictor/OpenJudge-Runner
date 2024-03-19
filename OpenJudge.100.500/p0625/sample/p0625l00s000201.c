#include<stdio.h>
int main(void)
{
	int A;
	int B;
	scanf("%d",&A);
	scanf("%d",&B);
	if(A<=8&&B<=8)
		printf("Yay!");
	else 
		puts(":(");
	
	return 0;
}