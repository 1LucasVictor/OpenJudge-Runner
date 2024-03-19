#include<stdio.h>


int main(void){


	int a, b, c, x, y;

	scanf("%d", &x);
	for (y = 0; y < x; y++){
		scanf("%d %d %d", &a, &b, &c);


		a = a*a;
		b = b*b;
		c = c*c;

		if (a == b + c || b == a + c || c == a + b){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;

}