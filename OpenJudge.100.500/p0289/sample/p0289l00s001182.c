#include <stdio.h>

int main() {
	int a, b,gcb;

	scanf("%d %d", &a, &b);

	if (a > b) {

		while (a % b != 0) {

			gcb = a % b;
		
			a = b;
			b = gcb;

		}
	}

	else if(a<b){
		while (b % a != 0) {

			gcb = b % a;

			b = a;
			a = gcb;

		}
	}

   else gcb = a;

	printf("%d\n",gcb);

	return 0;
}
