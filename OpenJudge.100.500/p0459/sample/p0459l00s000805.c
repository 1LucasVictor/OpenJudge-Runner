#include <stdio.h>
int main(){
	int x,y;
	scanf("%d%d",&x,&y);
	if(y%2==0&&2*x<=y&&y<=4*x)puts("Yes");
	else puts("No");
}