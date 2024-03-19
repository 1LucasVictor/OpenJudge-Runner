#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
const int N = 1300;
int main (void)
{
	char str[N];
	while(fgets(str, 1300 , stdin))
	{
		int sum = 0;
		if(str[0] == '0')
		{
			break;
		}
		for(int i = 0 ; i < strlen(str)-1 ; i++)
		{
			sum += str[i] - '0';
		}
		printf("%d\n" , sum);
	}
	return 0;
}
