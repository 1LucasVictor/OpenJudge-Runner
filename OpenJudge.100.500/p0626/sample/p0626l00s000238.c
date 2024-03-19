#include <stdio.h>
int func(int x)
{
	int a = 0;
	while(x % 100 == 0){
		x /= 100;
		a++;
	}

	return a;
}
int main()
{
	int d, n, cnt = 0, num = 1;
	scanf("%d%d", &d, &n);

	while(cnt < n){
		if(func(num) == d){
			cnt++;
		}
		++num;
	}

	printf("%d\n", num - 1);

	return 0;
}