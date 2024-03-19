#include <stdio.h>

int main(void)
{
	int car[10];
	int i;
	int n;
	
	i = 0;
	while (scanf("%d", &n) != EOF){
		if (n == 0){
			i--;
			printf("%d\n", car[i]);
		}
		else {
			car[i] = n;
			i++;
		}
	}
	
	return (0);
}