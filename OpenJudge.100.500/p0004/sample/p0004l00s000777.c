//0-5
//1521112 ????????????@?????????????

#include <stdio.h>

int main(void){

	int a, b, a1, b1;
	int gcd, lcm,r;
	int tmp;

	while (scanf("%d %d", &a1, &b1) != EOF){

		a = a1;
		b = b1;
		if (a < b){
			tmp = a;
			a = b;
			b = tmp;
		}

		r = a%b;

		while (r != 0)
		{
			a = b;
			b = r;
			r = a%b;
		}
		gcd = b;
		lcm = a1 / gcd*b1;

		printf("%d %d\n", gcd,lcm);
	}

	return 0;

}