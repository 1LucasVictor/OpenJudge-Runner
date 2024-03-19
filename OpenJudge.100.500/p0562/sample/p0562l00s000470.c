#include <stdio.h>

int main(void)
{
	int A,B,cnt,ans;

	scanf("%d",&A);
	scanf("%d",&B);

	cnt=0;
	ans=0;
	while(B>=cnt){
		ans++;
		cnt+=A;
	}
	printf("%d\n",ans);

	return 0;
}
