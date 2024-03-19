#include <stdio.h>

int main(void){
	int a,b,c;
	int x;
	int i;
	int y;
	scanf("%d %d %d", &a ,&b ,&c);
	for(i=a;i<=b;i++){
		y=c%i;
		if(y==0){
			x++;
		}
	}
	printf("%d\n", x);
	return 0;
}