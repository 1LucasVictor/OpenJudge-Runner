#include <stdio.h>

int main(void) {
	int n,i;
	double ax,ay,bx,by,cx,cy,dx,dy;
	scanf("%d", &n);
	for(i = 0; n > i; i++){
	scanf("%lf%lf%lf%lf%lf%lf%lf%lf", &ax,&ay,&bx,&by,&cx,&cy,&dx,&dy);
	if((bx-ax)/(by-ay) == (dx-cx)/(dy-cy)) printf("YES\n");
	else printf("NO\n");
	}
	return 0;
}