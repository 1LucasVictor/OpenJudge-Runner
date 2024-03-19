#include <stdio.h>

int main()
{ int W,H,r;
	float x,y;
	scanf("%d %d %f %f %d",&W,&H,&x,&y,&r);
	if(x+r>W || x-r<0){printf("No\n");}
	else if(y+r>H || y-r<0){printf("No\n");}
	else{printf("Yes\n");}
	
	
	return 0;
}
