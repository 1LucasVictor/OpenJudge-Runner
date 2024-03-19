#include <stdio.h>

int main()
{
	int max, a, b, c, i;

	scanf("%d", &max);

	for(i=1; i<=max; i++){
		scanf("%d %d %d", &a, &b, &c);
		
		a *= a;
		b *= b;
		c *= c;
		
		if((a+b==c) || (a+c==b) || (b+c==a)){
			printf("YES\n");

		}else{
			printf("NO\n");
		}
	}

	return 0;
}