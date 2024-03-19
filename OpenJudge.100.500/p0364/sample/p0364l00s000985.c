#include<stdio.h>

int main() {
	int W, H, x, y, r;
	scanf("%d %d %d %d %d", &W, &H, &x, &y, &r);
    int a, b;
	
	if ((x - r >= 0) && (x + r <= W)) a = 1;
	else a = 0;
	
    if((y - r >= 0) && (y + r <= H)) b = 1;
    else b = 0;

    if(a && b == 1) printf("Yes\n");
    else printf("No\n");

    return 0;
}
