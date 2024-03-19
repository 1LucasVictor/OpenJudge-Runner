#include<stdio.h>
int main()
{
	int a,b;
	
	long int c;
	scanf("%d%d",&a,&b);
	if(a >1&&a<10000 && b>1&&b<10000){
		c = a*b;
		if(c %2 == 0)
			printf("Even");
		else
			printf("Odd");
	}
	return 0;
}