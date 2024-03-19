#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
	int a,b,c,d;
	scanf("%d%d%d%d", &a,&b,&c,&d);
	if((a >= d) && (a>=c)) printf("0\n");
	else if (a > c){
		if(b >= d) printf("%d\n", a-d);
		else printf("%d\n", a-b);
	}
	else if (a <= c){
		if((b <= c) && (b < d)) printf("0\n");
		if((b > c) && (b >= d)) printf("%d\n", d-c);
		if((b > c) && (b < d)) printf("%d\n", b-c);
	}
	return 0;
}
