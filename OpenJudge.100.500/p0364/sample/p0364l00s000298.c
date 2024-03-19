#include<stdio.h>

int main(){
	int W, H, x, y, r, i, j;

	scanf("%d %d %d %d %d", &W, &H, &x, &y, &r);

	i = x - r;
	j = x + r;
	if (i >= 0 && j <= W){
		printf("Yes\n");
	}
	else{
		printf("No\n");
	}
	return 0;
}