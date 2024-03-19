#include <stdio.h>

int main(void)
{
	int x,y;
	
	scanf("%d %d",&x,&y);
	
	if(y>x){
		int temp = y;
		y = x;
		x = temp;
	}
	int r = x % y;
	while(r != 0){
		x = y;
		y = r;
		r = x % y;
	}
	
	printf("%d\n",y);
	
	return 0;
}
		
		
