#include<stdio.h>
int main(void)
{
	int x,y,flg;
	scanf("%d %d",&x,&y);
	flg=1;
	if(x*4>=y){
		if(y%2==0){
			if(y!=0) flg=0;
		}
	}
	if(flg==0) printf("Yes\n");
	else printf("No\n");
	return 0;
}
