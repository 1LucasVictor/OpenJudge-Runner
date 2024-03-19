#include <stdio.h>

int main()
{
	int x,a,b;
	scanf("%d%d%d",&x,&a,&b);
	if((a+x+1)<=b)
		printf("dangerous");
	else if((a+x+1)>b);
		if(b>a)
			printf("safe");
	else
		printf("delicious");
	return 0;
}

