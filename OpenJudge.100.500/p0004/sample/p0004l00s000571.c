#include <stdio.h>

int main()
{
	long int a, b, ab, buf;

	while(scanf("%lu %lu", &a, &b) != EOF){
		ab = a * b;
		if(a < b){
			buf = a;
			a = b;
			b = buf;
		}

		//最小公約数
		while(a % b != 0){
			a = a % b;

			if(a < b){
				buf = a;
				a = b;
				b = buf;
			}
		}
		printf("%ld", b);

		//最小公倍数
		printf(" %ld\n", ab/b);
	}
	
    return 0;
}