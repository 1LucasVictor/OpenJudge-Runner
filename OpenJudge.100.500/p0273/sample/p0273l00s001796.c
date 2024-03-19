#include<stdio.h>


int main(){

	int i,n,ans[45];

	ans[0] = 1;
	ans[1] = 1;
	scanf("%d",&n);
	for(i = n;i > 0;i--)
		ans[n - i + 2] = ans[n - i + 1] + ans[n - i];
	printf("%d\n",ans[n]);
	return 0;
}