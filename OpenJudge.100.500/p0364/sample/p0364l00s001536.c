#include <stdio.h>
int main(void){
	int W, H, x, y, r;
	scanf("%d%d%d%d%d", &W, &H, &x, &y, &r);
	if (W>=(x+r)&&H>=(y+r)&&(y-r)>=0&&(x-r)>=0)
	printf("Yes\n");
	else printf("No\n");
	return 0;
} 
