#include <stdio.h>
 
#define MASS_MAX 3
 
int main(void) {
	char mass[MASS_MAX];
	int i;
    int cnt = 0;
 
	scanf("%s", mass);
	for (i = 0; i < MASS_MAX; i++)
	{
		if (mass[i] == '1')
		{
			cnt++;
		}
	}
	printf("%d", cnt);
 
	return 0;
}