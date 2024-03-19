#include <stdio.h>

int main (){
	int W,H,x,y,r;
	scanf ("%d %d %d %d %d",&W,&H,&x,&y,&r);
	if (W<=x||H<=y||x<=0||y<=0||2*r>W||2*r>H||x+r>W||y+r>H||x-r<0||y-r<0||x>=100||y>=100){
		printf("No\n");
	}
	else {
		printf("Yes\n");
	}
	return 0;
}