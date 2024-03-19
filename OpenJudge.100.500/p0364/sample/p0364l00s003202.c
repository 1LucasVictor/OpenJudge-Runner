#include<stdio.h>
int main(void)
{
    int W,H,x,y,r;
	scanf("%d %d %d %d %d",&W,&H,&x,&y,&r);
	
	if(x>=W || x<=0){
		printf("No\n");
	}else if(y>=H || y<=0){
		printf("No\n");
	}else if((x+r)>W || (x+r)<0){
		printf("No\n");
	}else if((y+r)>H || (y+r)<0){
		printf("No\n");
	}else{
		printf("Yes\n");
	}
    return 0;
}