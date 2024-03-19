#include <stdio.h>

int main(void)
{
	int x,ans;
	int i;
	
	while(1){
		ans=0;
		scanf("%d",&x);
		if(x==0)break;
		
		do{
			ans+=x%10;
			x/=10;
		}while(x!=0);
		printf("%d\n",ans);
	}
		
	return 0;
}
