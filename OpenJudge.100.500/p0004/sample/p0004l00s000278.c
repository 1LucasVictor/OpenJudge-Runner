#include <stdio.h>

int main(void)
{
	int x,y,yaku;
	long long int a,b,bai;
	while(scanf("%d %d",&a,&b)!=EOF){

		x=a;
		y=b;
		if(x<0){
			x=-x;
		}
		if(y<0){
			y=-y;
		}
		yaku=0;
		bai=0;
		while(x!=y){
			if(x>y){
				x=x-y;
			}
			else{
				y=y-x;
			}
		}
		yaku=x;
		bai=a*b/yaku;
		printf("%d %d\n",yaku,bai);
	}
	return 0;
}