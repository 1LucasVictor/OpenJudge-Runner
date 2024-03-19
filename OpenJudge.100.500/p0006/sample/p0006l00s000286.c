#include <stdio.h>

int main(void)
{
	int n, s, i;

	scanf("%d", &n);

	i = 0;
	s = 100000;
	while (i < n){
		s = s + (s * 0.05);
		i++;
	}

	if (s % 10000 != 0){
		s = (s / 10000) + 1;
	}
	else {
		s = s / 10000;
	}
	printf("%d0000\n", s);	

	return (0);
}