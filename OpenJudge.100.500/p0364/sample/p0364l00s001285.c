#include <stdio.h>
int main(void)


{
	int x, y, r, Xadd, Xsub, Yadd, Ysub, W, H;
	scanf("%d %d %d %d %d", &W, &H, &x, &y, &r);
	Xadd = x + r;
	Xsub = x - r;
	Yadd = y + r;
	Ysub = y - r;
	if((Xadd<=W)&&(Xsub>=0)&&(Yadd<=H)&&(Ysub>=0))
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}

	return 0;
}