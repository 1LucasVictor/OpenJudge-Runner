#include <stdio.h>

int main(void)
{
	int debt = 100000;
	int n;
	int i;
	
	scanf("%d", &n);
	i = 0;
	while (i != n){
		debt = debt + (debt * 0.05);
		debt = ((debt + 999) / 1000) * 1000;
		i++;
	}
	printf("%d\n", debt);
	
	return (0);
}