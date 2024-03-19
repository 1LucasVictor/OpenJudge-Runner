#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))

int main(void){
	int a, b;
	scanf("%d%d",&a ,&b);
	if(MAX(a,b) >= 10)
		printf("-1");
	else
		printf("%d",a*b);
    return 0; 
}
