#include<stdio.h>
int main(void)
{
	int N,A;
	scanf("%d",&N);
	A=N/2;
	if(N%2!=0){
		A++;
	}
	printf("%d\n",A);
	return 0;
}
