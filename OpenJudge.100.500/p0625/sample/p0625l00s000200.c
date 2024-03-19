#include <stdio.h>

int main(void)
{
	int a,b,c;
	c=1;
	scanf("%d %d",&a,&b);
	if(a>8){
		c=c-1;
	}
	if(b>8){
		c=c-1;
	}
	if(c>0){
		printf("Yay!");
	}else{
		printf(":(");
	}
	return 0;
}