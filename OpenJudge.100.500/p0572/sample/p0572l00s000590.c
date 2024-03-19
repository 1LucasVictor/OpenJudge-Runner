#include<stdio.h>

int main(void)
{
	int l,r;
	int i;
	int min=2018;
	int mod;
	scanf("%d%d",&l,&r);
	i=l;
	if(r-l>=2019)
		printf("0");
	else if(l%2019>r%2019)
		printf("0");
	else
		while(i<r){
			mod=(i%2019*(i%2019+1))%2019;
			if(mod<min)
				min=mod;
			i++;
			}
		printf("%d",min);
	return 0;
}
		