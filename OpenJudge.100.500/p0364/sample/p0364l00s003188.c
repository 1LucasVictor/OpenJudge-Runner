#include<stdio.h>
int main(){
int W,H,x,y,r;
	scanf("%d%d%d%d%d",&W,&H,&x,&y,&r);
	if(x-r<0||y-r<0||H<y+2*r||W<x+2*r){
		printf("No\n");
				}else{
		printf("Yes\n");
				}
return 0;
}