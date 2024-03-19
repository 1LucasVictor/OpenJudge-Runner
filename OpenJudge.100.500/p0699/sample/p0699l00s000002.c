#include<stdio.h>

int main(void) {

	int input[3];
	int a, b, c;
	int num5=0, num7=0;
	int i;

	scanf("%d %d %d", &a,&b, &c);

	input[0] = a;
	input[1] = b;
	input[2] = c;

	for (i = 0; i < 3; i++) {
		
		if (input[i] == 5) {
			num5++;
		}
		else if (input[i] == 7) {
			num7++;
		}
		else {

		}
	}
		
	if (num5 == 2 && num7 == 1) {
		printf("YES\n");
	}
	else {
		printf("NO\n");
	}

	return 0;
}