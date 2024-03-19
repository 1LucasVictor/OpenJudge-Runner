#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
	int a=0, b=0;
	char c;
	while((c=getchar())!=10) if(c=='0') a++; else b++;
	printf("%d\n", (a<b?a:b)*2);
}
