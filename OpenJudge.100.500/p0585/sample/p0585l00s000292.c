#include <stdio.h>

int main(){
	int a ,b ,t;
	scanf("%d %d %d",&a,&b,&t);

	int ans = 0;
	for (int i = a;i <= t+0.5;i += a){
		ans = ans + b;
	}	
	printf("%d",ans);
	return 0;
}