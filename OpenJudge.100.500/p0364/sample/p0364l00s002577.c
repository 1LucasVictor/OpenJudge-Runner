#include<stdio.h>
int W,H,x,y,r;
main(){
	scanf("%d%d%d%d%d",&W,&H,&x,&y,&r);
	if(x-r>=0&&y-r>=0&&x<W&&y<H&&r<=W&&r<=H)printf("Yes\n");
	else printf("No\n");
    
    
    
    
    return 0;

}
