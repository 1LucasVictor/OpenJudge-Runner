#include <stdio.h>

int main(void)
{
	int i;
	int c;
	int car[100];
	int out[100];
	
	i = c = 0;
	
	while (scanf("%d", &car[i]) != EOF){
		if(car[i] == 0){
			out[c] = car[i - 1];
			c++;
			i--;
			if (car[i - 1] != 0){
				i--;
			}
		}
		i++;
	}
	
	for (i = 0; i < c; i++){
		printf("%d\n", out[i]);
	}
	
	return (0);
}