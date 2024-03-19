#include<stdio.h>

int main(void)
{

	int a=3,b=8,c=1;

	int r, l, f;

	f = 0;

	for (r = 1; r <= 3; r++){

		for (l = 0; l < r + 1; l++){

			if (l == 1){

				if (a <= b){

					f = a;

					a = b;

					b = f;
				}
			}

			if (l == 2){

				if (b <= c){

					f = b;

					b = c;

					c = f;
				}
			}

			if (l == 3){

				if (c <= a){

					f = c;

					c = a;

					a = f;
				}
			}

		}

	}

	printf("%d %d %d\n", a,b,c);

	return 0;

}