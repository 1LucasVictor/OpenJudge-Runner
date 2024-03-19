#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a, b, c, k, count = 0;
	scanf("%d %d %d %d", &a, &b, &c, &k);

	while(k--){
		if(a > 0){
			count++;
			a--;
		}
		else if(b > 0){
			b--;
			continue;
		}
		else if(c > 0){
			count--;
			c--;
		}
	}
	printf("%d\n", count);
	return 0;
}