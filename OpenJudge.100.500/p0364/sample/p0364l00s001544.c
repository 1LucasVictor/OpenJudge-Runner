#include<stdio.h>
int main() {
	int W=0, H=0, x=0, y=0, r=0;
	scanf("%d %d %d %d %d",&W,&H,&x,&y,&r);
	if (W >= x + r &&   x-r >= 0 && H >= y+r && y-r >= 0) {
		printf("Yes\n");
	}
	else {
		printf("No\n");
	}
	
	return 0;
}
