#include <stdio.h>

int main(void)
{
	int A,B;
	int ans = -1;
	scanf("%d%d",&A,&B);
	ans=A+B;
	if(ans%2==0){
		ans=ans/2;
		printf("%d\n",ans);
	}
	else
	printf("IMPOSSIBLE\n");
	return 0;
}