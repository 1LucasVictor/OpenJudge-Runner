#include <stdio.h>

int main(){
	int x,ans;
	int a,b,c;

	scanf("%d",&x);
	
	a = x / 500;
	
	ans = a * 1000;
	
	b = x - (500 * a);
	c = b / 5 * 5;
		
	ans = ans + c;
	
	printf("%d",ans);
	
	return 0;
}
