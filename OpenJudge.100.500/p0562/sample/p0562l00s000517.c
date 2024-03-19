#include <stdio.h>

int main(void)
{
	int A,B,cnt=1,ans=0;

	scanf("%d",&A);
	scanf("%d",&B);

	while(B>cnt){
		cnt+=A;
		ans++;
		if(cnt%A){
			cnt--;
		}
	}

	printf("%d\n",ans);

	return 0;
}
