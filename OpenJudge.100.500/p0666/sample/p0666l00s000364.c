#include <stdio.h>
#include <string.h>

int main(void)
{
	int a;
	int b;
	int c;
	scanf("%d%d%d",&a,&b,&c);
	if(c-b<1){
		printf("delicious\n");
	}else if(c-b-a<1){
		printf("safe\n");	
	}else{
		printf("dangerous");	
	}
	return 0;
	
}