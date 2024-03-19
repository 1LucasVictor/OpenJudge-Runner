#include <stdio.h>

int main(){
	int a=0,b=0,c=0;
	int ans=0;
	int ans2=0;

	scanf("%d%d%d",&a,&b,&c);


	if(a-b >= c){
		ans = 0;
	}else{
		ans = c-(a-b);
	}

	printf("%d\n",ans);
	return 0;
}