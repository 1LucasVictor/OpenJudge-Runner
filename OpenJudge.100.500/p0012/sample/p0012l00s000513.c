#include <stdio.h>

int main(void)
{
	int i;
	int i2;
	int s[10];
	
	i2 = 0;
	do {
		scanf("%d", &i);
		if (i > 0){
			s[i2] = i;
			i2++;
		}else {
			i2--;
			printf("%d\n", s[i2]);
			s[i2] = 0;
		}
		
	} while (i2 != 0);
	
	return (0);
}