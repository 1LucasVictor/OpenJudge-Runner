#include<stdio.h>
int main(void)
{
	int W, H, x, y, r;
	scanf("%d %d %d %d %d", &W, &H, &x, &y, &r);
	if((x+r)<=W && (y+r)<=H && 0<=(x-r) && 0<=(y-r)){
		printf("Yes\n");
	}
	else{
		printf("No\n");
	}
	return 0;
}