#include <stdio.h>
int main(){
	int a,b,ans;
	scanf("%d%d0", &a,&b);
	if((1<=a)&&(a<=9)&&(1<=b)&&(b<=9)){
		ans=a*b;
	}else{
		ans=-1;
	}
	printf("%d\n", ans);
	return 0;
}
