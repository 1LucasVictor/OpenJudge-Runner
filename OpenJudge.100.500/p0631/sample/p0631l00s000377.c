#include <stdio.h>
int main(void){
	int a,b,x;
	scanf("%d%d%d",&a,&b,&x);
	b-(x-a)<0?printf("NO"):printf("YES");
	return 0;
}