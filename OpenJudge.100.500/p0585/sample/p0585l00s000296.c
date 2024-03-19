#include <stdio.h>

int main(void)
{
	int a,b,t,i,ans=0;
	scanf("%d %d %d",&a,&b,&t);
	double time=t+0.5;
	
	for(i=1;i<=time;i++){
		if(i%a==0){
			ans += b;
		}
	}
	printf("%d\n",ans);
	
	return 0;
}
