#include<stdio.h>
#include<math.h>

int main(void)
{
	int a,b,x;
	
	scanf("%d%d%d",&x,&a,&b);
	
	if(a >= b){
		printf("delicious\n");
	}else if( (b-a) <= x){
		printf("safe\n");
	}else{
		printf("dangerous\n");
	}
	
	
	return 0;
}