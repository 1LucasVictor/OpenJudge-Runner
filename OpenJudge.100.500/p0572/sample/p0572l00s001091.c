#include<stdio.h>

int main(void)
{
	int l,r;
	int min=2018;
	scanf("%d%d",&l,&r);
	if(r-l>=2019)
		printf("0");
	else if(l%2019>r%2019)
		printf("0");
	else
		printf("%d",l%2019*(l%2019+1));
	return 0;
}
		