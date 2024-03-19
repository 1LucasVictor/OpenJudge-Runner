#include <stdio.h>
int main()
{
	int n,A,B,a;
	scanf("%d %d %d",&n,&A,&B);
	a=n*A;
	if(a>B) printf("%d",B);
	else  printf("%d",a);
	 
	return 0;
}