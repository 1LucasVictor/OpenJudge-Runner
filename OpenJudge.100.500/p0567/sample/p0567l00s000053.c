#include <stdio.h>
int main()
{
int A,B,C;
scanf("%d%d%d", &A,&B,&C);
if(A>B)
	printf("%d",C-A+B);
else
	printf("%d",C);
}