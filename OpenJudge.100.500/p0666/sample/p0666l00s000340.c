#include <stdio.h>

int main(void)
{
	int x,a,b;
	
	scanf("%d",&x);
	scanf("%d",&a);
	scanf("%d",&b);
	
	if(b <= a){
		printf("delicious\n");
	}
	else if(a<b && b<=(a+x)){
		printf("safe\n");
	}
	else{
		printf("dangerous\n");
	}
	
	return 0;
}
