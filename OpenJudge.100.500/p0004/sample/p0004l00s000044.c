#include <stdio.h>

int main(){
	int i,x,y,gcd,lcm;
	
	while(scanf("%d %d", &x, &y) != EOF){
		if(x < y){
			i = x;
			x = y;
			y = i;
		}
		
		i = 1;
		while(1){
			if((y % i) == 0){
				if((x % (y / i)) == 0){
					gcd = y / i;
					break;
				}
			}
			i++;
		}
		
		i = 1;
		while(1){
			if(((x * i) % y) == 0){
				lcm = x * i;
				break;
			}
			i++;
		}
		
		printf("%d %d\n", gcd, lcm);
	}
	
	return 0;
}