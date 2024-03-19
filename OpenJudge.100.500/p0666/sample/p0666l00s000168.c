#include<stdio.h>
#include<math.h>

int main(void)
{
	int i,a,b,x;
	
	scanf("%d %d %d",&x,&a,&b);
	
	if( (a-b) >= 0){
		printf("delicious\n");
	}else if( abs(a-b) < x){
		printf("safe\n");
	}else{
		printf("dangerous\n");
	}
	
	
	return 0;
}