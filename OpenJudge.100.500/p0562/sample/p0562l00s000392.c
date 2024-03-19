#include <stdio.h>
int main(){
	int a,b,ans=0,num=1;
	scanf("%d%d", &a,&b);
	while(num<b){
		num=num-1+a;
		ans++;
	}
	printf("%d\n", ans);
	return 0;
}
