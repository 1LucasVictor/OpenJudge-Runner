#include"stdio.h"
main()
{
	int x;
	long int A, B;
	scanf("%d%ld%ld",&x,&A,&B);
	if(A > x)
		printf("dangerous");
	else
		if(B < A)
			printf("delicous");
		else
			printf("safe");
	return 0;
}