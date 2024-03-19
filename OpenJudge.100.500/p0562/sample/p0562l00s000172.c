#include <stdio.h>

int main(){
	int a,b,ans;
	scanf("%d%d",&a,&b);

	if(b%a!=0)ans=b/a+1;
	else ans=b/a;
	if(ans*a-(ans-1)>=b){
		printf("%d\n",ans);
		return 0;
	}
	for(int i=ans+1;i<100;i++){
		if(i*a-(i-1)>=b){
			printf("%d\n",i);
			return 0;
		}
	}
	
	return 0;
}