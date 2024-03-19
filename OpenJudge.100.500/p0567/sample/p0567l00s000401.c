#include <stdio.h>

int main(void)
{
	int a ,b ,c ,ans ,x;
	scanf("%d %d %d",&a ,&b ,&c);
	x = a - b;
	ans = c - x;
	if(ans >= 0){
		printf("%d",ans);
	} else {
		printf("0");
	}
	return 0;
}