#include <stdio.h>

int main(void)
{
	int c,x,y,yaku;
	long int a,b,bai;
	while(scanf("%d %d",&a,&b)!=EOF){
		if(a<0){
			a=-a;
		}
		if(b<0){
			b=-b;
		}
		x=a;
		y=b;
		yaku=0;
		bai=0;
		c=1;
		while(c!=0){
			if(x>y){
				c=x-y;
				x=c;
			}
			else{
				c=y-x;
				y=c;
			}
		}
		yaku=x;
		bai=a*b/yaku;
		printf("%d %d",yaku,bai);
	}
	
	return 0;
}