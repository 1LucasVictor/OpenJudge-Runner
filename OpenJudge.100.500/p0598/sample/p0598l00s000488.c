
#include <stdio.h>
 
int main(void)
{
	int a;
	int b;
	int c;
	int d;
	scanf("%d %d",&a,&b);
	c=b/a;
	d=c*a;
	if (b==d)
		printf("%d\n",a+b);
	else
		printf("%d\n",b-a);
	return(0);
}
