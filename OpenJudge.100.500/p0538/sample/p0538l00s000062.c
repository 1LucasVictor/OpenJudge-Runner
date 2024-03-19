#include <stdio.h>
int main(void)
{
	int A;
	int B;
	scanf("%d %d",&A,&B);

	if(A<10 && B<=10){
		printf("%d",A*B);
	}
	else
	{
		printf("-1");
	}
	

return(0);
}