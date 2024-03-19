#include<stdio.h>

int main()
{
	int W,H,X,Y,R;
	scanf("%d%d%d%d%d",&W,&H,&X,&Y,&R);
	puts(X-R<=0||X+R>=W||Y-R<=0||Y+R>=H?"No":"Yes");
	return 0;
}