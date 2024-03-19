#include <stdio.h>

int main(void)
{
	int a,b,c;
	int ans;
	scanf("%d%d%d",&a,&b,&c);
	if(b < a){
		if(b+c <=a){
			ans = 0;
		}
		else
		ans = c - (a-b);
	}
	else
	ans = c;
	printf("%d",ans);
	return 0;
}