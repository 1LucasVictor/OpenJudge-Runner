#include <stdio.h>
int main(void) {
	int a, b, k;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &k);

	int min;
	int su[10000];
	int t = 1;
	if (a <= b) {
		min = a;
	}
	else{
		min = b;
	}
	int hozon;
	hozon = k;
	int i = 1;
	while (hozon <= b) {
		if (a%i == 0 && b%i == 0) {
			su[t] = i; t++;
		}
		i++;
		hozon = hozon + k;
		
	}
	printf("%d", su[k]);

	return 0;

}
