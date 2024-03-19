#include<stdio.h>

int main(void){
	int a,b,c,k,ans;
	scanf("%d%d%d%d",&a,&b,&c,&k);
	if(a+b>=k){
		ans=a;
	}else{
		ans=a-(k-a-b);
	}
	printf("%d\n",ans);
	return 0;
}
	
