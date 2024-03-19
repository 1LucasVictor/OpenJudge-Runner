#include <stdio.h>
 
int main(void){
	
	int a,b,c;
	
	scanf("%d %d %d",&a,&b,&c);
	
	if(b >= c){
	printf("delicious\n");
	} else if (b + a < c){
	printf("dangerous\n");
	} else {
	printf("safe\n");
	}
	return 0;
}