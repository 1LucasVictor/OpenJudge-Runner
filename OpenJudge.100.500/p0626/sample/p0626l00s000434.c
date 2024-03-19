#include <stdio.h>
#include <math.h>
int main(){
	int a,b;
	int c=1;
	scanf("%d %d",&a,&b);
	for (int i = 1; i <= a; ++i)
	{
		c=c*100;
	}
	printf("%d\n",c*b);
}