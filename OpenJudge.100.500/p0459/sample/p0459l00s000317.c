#include<stdio.h>
int main()
{
	int x,y,i,a,flg;
	scanf("%d %d",&x,&y);
	flg=0;
	for(i=0;i<=x;i++){
		a=i*4+(x-i)*2;
		if(a==y){
			flg=1;
			break;
		}
	}
	if(flg==1){
		printf("Yes\n");
	}
	else printf("No\n");
	return 0;
}