#include <stdio.h>

int main(void) {
	int n,i;
	double ax,ay,bx,by,cx,cy,dx,dy,a,b;
	scanf("%d", &n);
	for(i = 0; n > i; i++){
	scanf("%lf%lf%lf%lf%lf%lf%lf%lf", &ax,&ay,&bx,&by,&cx,&cy,&dx,&dy);
	a = (by-ay)/(bx-ax);
	b = (dy-cy)/(dx-cx);
	if(a == b) printf("YES\n");
	else printf("NO\n");
	}
	return 0;
}