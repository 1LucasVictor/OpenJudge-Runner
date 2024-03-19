#include <stdio.h>
#include <string.h>

int main(int argc,char **argv)
{
	int a = 0, b = 0, t = 0;
	int k = 0;
	scanf("%d %d %d",&a,&b,&t);

	t = t + 0.5;

	t = t / a;
	k = t * b;

	printf("%d",k);

	return 0;
}