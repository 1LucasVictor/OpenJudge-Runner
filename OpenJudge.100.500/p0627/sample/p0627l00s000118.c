#include<stdio.h>
int main(void)
{
	int a,b,wa,sa,seki;
	scanf("%d %d",&a,&b);
	wa=a+b;
	sa=a-b;
	seki=a*b;
	if(sa<=wa && seki<=wa){
		printf("%d\n",wa);
	}
	else if(wa<=sa && seki<=sa){
		printf("%d\n",sa);
	}
	else{
		printf("%d\n",seki);
	}
	return 0;
}