#include<stdio.h>
int main(void)
{
	int W,H,x,y,r;
	scanf("%d %d %d %d %d",&W,&H,&x,&y,&r);
	if(W>=x+r){
		if(H>=y+r){
			printf("Yes\n");
		}
		else{
			printf("No\n");
		}
	}
	else{
		printf("No\n");
	}

	return 0;
}