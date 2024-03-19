#include <stdio.h>

int main(void)
{
	int n, i, s;

	scanf("%d", &n);

	s = 100000;

	for (i = 0; i < n; i++){
		s *= 1.05;
	}

	if (s % 10000 != 0){
			s = ((s / 10000) + 1) * 10000;
	}	
	

	printf("%d\n", s);

	return (0);
}