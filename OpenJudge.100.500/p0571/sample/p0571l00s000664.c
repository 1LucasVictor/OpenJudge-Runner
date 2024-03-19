#include <stdio.h>

int main(){
	int n,a,b;
	int ans1,ans2;

	scanf("%d%d%d",&n,&a,&b);

	ans1 = a*n;
	ans2 = b;
	if(ans1<ans2){
		printf("%d",ans1);
	}else{
		printf("%d",ans2);
	}
}