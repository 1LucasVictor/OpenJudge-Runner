#include<stdio.h>
int main(void){
	int W,H,x,y,r;
	scanf("%d\n",&W);
	scanf("%d\n",&H);
	scanf("%d\n",&x);
	scanf("%d\n",&y);
	scanf("%d",&r);
	if(x-r<0||x+r>W&&y-r<0||y+r>H)
	printf("No\n");
	if (x-r>0&&x+r<W&&y-r>0&&y+r<H)
	printf("Yes\n");
	return 0;
}