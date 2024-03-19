#include <stdio.h>

int main(void){

	int a, b, r, g, l;
	int a1, b1;
	
	while(scanf("%d %d", &a, &b) != EOF){
		a1 = a;
		b1 = b;
		do{
			r = a % b;
		
			if(r == 0){
				g = b;
			}else {
				a = b;
				b = r;
			}
		}while(r != 0);
	
		l = g * (a1 / g) * (b1 / g);
	
		printf("%d %d\n", g, l);
	}
	
	return 0;
}