#include "stdio.h"

int main(int argc, char const *argv[])
{
	int W,H,x,y,r;
	scanf("%d",&W);
	scanf("%d",&H);
	scanf("%d",&x);
	scanf("%d",&y);
	scanf("%d",&r);

	if(x-r<0||x+r>W||y+r>H||y-r<0) printf("No\n");
	else printf("Yes\n");

	return 0;
}