#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
int main(void){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	printf("%d",b+c-a>0?b+c-a:0);
	
	return 0;
}