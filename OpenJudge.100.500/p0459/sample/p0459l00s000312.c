#include<stdio.h>
int main()
{
	int x,y,a,b,i;
	scanf("%d %d",&x,&y);
	if(x*2<y&&x*4<y){
		printf("No\n");
	}
	else if(x==1&&y==2||x==1&&x==4){
		printf("Yes\n");
	}
	else{
		for(i=0;i<x;i++){
		a=y%4;
		b=y/4;
		if(b<=x&&a==0){
			printf("Yes\n");
		}
		else if(a%2==0){
			printf("Yes\n");
		}
		else printf("No\n");
		return 0;
		}
	}
}