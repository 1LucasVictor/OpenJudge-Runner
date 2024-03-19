#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))

int main(void){
	int h, a;
	scanf("%d%d",&h,&a);
	printf("%d",(h-1)/a +1);
    return 0; 
}
