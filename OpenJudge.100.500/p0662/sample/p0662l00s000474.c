#include <stdio.h>

int main(){
	int a,b,c,d;
	scanf("%d%d%d%d", &a, &b, &c, &d);
	int x,y,w,z;
	x = b - a;
	y = x - c;
	w = d - c;
	z = x - w;
	if(x > c && x < d){
		printf("%d\n", y);
	}else if(w > a && w < b){
		printf("%d\n", w);
	}else
		printf("0\n");
	return 0;
}
