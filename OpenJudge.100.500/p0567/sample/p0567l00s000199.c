#include <stdio.h>


int main(void)
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	int ans;
	if(a >= b+c){
		ans = 0;
	}
	else{
		ans = c-(a-b);
	}
	printf("%d",ans);
	return 0;
}

