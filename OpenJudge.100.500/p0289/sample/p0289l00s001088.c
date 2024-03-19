#include<stdio.h>




int main(void){
	
	int x,y,r,tmp;
	
	scanf("%d %d",&x,&y);
	
	
	
	if(x<y){
		tmp=x;
		x=y;
		y=tmp;
	}
	
	
	while(y>0)
	{
	r=x%y;
	x=y;
	y=r;	
	}
	
	printf("%d\n",x);
	return 0;
}
