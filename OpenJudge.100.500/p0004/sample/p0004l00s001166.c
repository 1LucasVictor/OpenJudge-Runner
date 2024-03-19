#include <stdio.h>

int main(void)
{
	int x,y,yaku;
	long long int a,b,bai;
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
		printf("%d %d",yaku,bai);
	}
	return 0;
}