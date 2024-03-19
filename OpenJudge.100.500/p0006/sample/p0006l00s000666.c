#include <stdio.h>

int debt(int n);

int main(void)
{
	int n;
	
	scanf("%d", &n);
	
	printf("%d\n", debt(n));
	
	return (0);
}

int debt(int n)
{
	int last;
	int a;
	
	last = 100000;
	
	for (a = 0; a < n; a++){
		last += last * 5 / 100;
	}
	
	if (last % 1000 != 0){
		last /= 10000;
		last++;
		last *= 10000;
	}
	
	return (last);
}