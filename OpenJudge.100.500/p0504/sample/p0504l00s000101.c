#include<stdio.h>
#include<math.h>

int main()
{
	int h,a;	
	scanf("%d%d",&h,&a);
	int ans;
	ans=h/a;
	int yu;
	yu=h%a;
	if (yu!=0) ++ans;
	printf("%d",ans);
	return 0;
} 
 