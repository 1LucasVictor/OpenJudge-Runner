#include <stdio.h>
 
int main(void){
	
	int a,b,c;
	
	scanf("%d %d %d",&a,&b,&c);
	
	if(b > c){
	printf("delicious\n");
	} else if (b <= c && c - b <= a){
	printf("safe\n");
	} else {
	printf("dangerous\n");
	}
	return 0;
}