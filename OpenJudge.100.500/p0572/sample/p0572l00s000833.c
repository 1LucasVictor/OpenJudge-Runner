#include<stdio.h>

int main(void)
{
	int l,r;
	int i,j;
	int min=2018;
	int mod;
	scanf("%d%d",&l,&r);
	i=l;
	if(r-l>=2019)
		printf("0");
	else if(l%2019>r%2019)
		printf("0");
	else{
		for(i=l;i<r;i++){
			for(j=1;i+j<=r;j++){
				mod=(i%2019*(i%2019+j))%2019;
				if(mod<min)
					min=mod;
				}
			}
		printf("%d",min);
		}
	return 0;
}
		