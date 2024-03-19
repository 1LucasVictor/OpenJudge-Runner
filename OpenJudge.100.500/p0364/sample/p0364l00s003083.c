#include<stdio.h>
int main(void){
	int W,H,x,y,r,a,b;
	scanf("%d%d%d%d%d",&W,&H,&x,&y,&r);
	a=x-r;
	b=x+r;
	if(a<0||b>W){
		printf("No\n");
	}
	else if(a>=0&&b<=W){
		printf("Yes\n");
	}
	return 0;
}