#include<stdio.h>
int main(){
	int W, H, x, y, r;

	scanf("%d %d %d %d %d", &W, &H, &x, &y, &r);

	if (W == (x + r) && H == (y + r) &&W==x||H==y){
		printf("No\n");
	}
	else{ printf("Yes\n"); }



	return 0;
}