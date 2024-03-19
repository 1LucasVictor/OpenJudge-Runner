#include <stdio.h>

int gcd(int x,int y);

int main(void) {
	int x,y;
	scanf("%d %d",&x,&y);
	printf("%d\n",gcd(x,y));
	
	return 0;
}

int gcd(int x,int y){
	int a,r;
	if(x<y) {
		a=x;
		x=y;
		y=a;
	}
	for(;;){
		r=x%y;
		if(r==0) break;
		else {
			x=y;
			y=r;
		}
	}
	return y;
}
