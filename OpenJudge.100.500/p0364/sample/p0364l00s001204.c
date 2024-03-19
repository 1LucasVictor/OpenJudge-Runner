#include<stdio.h>
int main(void)
{
	int W,H,x,y,r;
	scanf("%d %d %d %d %d",&W,&H,&x,&y,&r);
	if(x-r>0&&W-(x+r)>0&&H-(y+r)>0&&y-r){
		printf("Yes\n");
	}else{
		printf("No\n");
	}
	
	return 0;
}