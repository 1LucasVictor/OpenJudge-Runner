#include <stdio.h>

int main(void) {
	int a,b,x;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&x);
		if(a+b<x || x<a){
			printf("NO");
		}else{
			printf("YES");
		}	
	return 0;
}