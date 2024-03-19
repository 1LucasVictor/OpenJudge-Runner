#include <stdio.h>

int main(void)
{
	int x,y,d;
	scanf("%d%d",&x,&y);
	if(x>y){
		d=x;
		x=y;
		y=d;
	}
	for(d=x;d>0;d--){
		if(x%d==0&&y%x%d==0){
			printf("%d\n",d);
			break;
		}
	}
	return 0;
}
