#include <stdio.h>

int main(void) {
	int W,H,x,y,r;
	scanf("%d",&W);
	scanf("%d",&H);
	scanf("%d",&x);
	scanf("%d",&y);
	scanf("%d",&r);
	if(x+2*r<=W&&y+2*r<=H)
		puts("Yes");
	else
		puts("No");
	return 0;
}
