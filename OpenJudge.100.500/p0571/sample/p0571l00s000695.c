#include <stdio.h>

int main(void)
{
	int x,y,z;
	scanf("%d %d %d",&x,&y,&z);
	if(x*y < z){
		printf("%d\n",x * y);
	}
	else{
		printf("%d\n", z);
	}
	return(0);
	
}