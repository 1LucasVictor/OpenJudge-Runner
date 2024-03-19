#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x,y,data,lcm;
	double cpx,cpy;
	while(scanf("%d %d",&x,&y) != EOF){
		cpx = x,cpy = y;
		if (x < y){
			data = x,x = y,y = data;
		}
		while(y != 0){
			x = x % y;
			data = x,x = y,y = data;
		}
		if (cpx >= 1000000){
			lcm = (((cpx / 1000000) * cpy) / x) * 1000000;
		}
		else {
			if (cpy >= 1000000){
				lcm = ((cpx * (cpy / 1000000)) / x) * 1000000;
			}
			else {
			lcm = (cpx * cpy) / x;
			}
	    }
		printf("%d %d\n",x,lcm);
	}
	return 0;
}