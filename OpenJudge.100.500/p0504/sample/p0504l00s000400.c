#include<stdio.h>

int main(void)
{
	int h,a;
	int ans;
	
	scanf("%d%d",&h,&a);
	
	ans=h/a;
	
	if(h%a != 0)
		ans++;
	
	printf("%d",ans);
	return 0;
}
