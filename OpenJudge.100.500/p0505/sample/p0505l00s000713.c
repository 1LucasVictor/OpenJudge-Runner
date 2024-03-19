#include <stdio.h>
int main()
{
	int h,a;
	scanf("%d%d",&h,&a);
	int sum=0;
	while(a--){
		int n;
		scanf("%d",&n);
		sum+=n;
	}
	if(h-sum>0) printf("No");
	else printf("Yes");
	return 0;
}