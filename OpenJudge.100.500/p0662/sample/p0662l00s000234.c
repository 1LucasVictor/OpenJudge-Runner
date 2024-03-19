#include <stdio.h>

int main()
{
	int a, b, c, d, num;
	scanf("%d%d%d%d", &a, &b, &c, &d);
		if (a<=c) {
			if (c<b&&d>b) num=b-c;
			else if (c>=b) num=0;
			else num=d-c;
		}
		else {
			if (a<d&&b>d) num=c-b;
			else if (a>=d) num=0;
			else num=b-a;
		}
		printf("%d\n", num); 
	return 0;
}
