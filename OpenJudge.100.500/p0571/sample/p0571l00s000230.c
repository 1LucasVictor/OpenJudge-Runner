#include <stdio.h>
int main()
{
int A,B,N;
scanf("%d%d%d", &N,&A,&B);
if(N*A>B)
	printf("%d",B);
else
	printf("%d",N*A);
}