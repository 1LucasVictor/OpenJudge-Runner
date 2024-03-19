#include <stdio.h>

int main()
{
	char str[3];
	int i, sum;
	
	scanf("%s", str);
	
	sum = 0;
	for (i = 0; i < 3; i++){
		if (str[i] == '1'){
			sum++;
		}
	}
	
	printf("%d\n", sum);
	
	return 0;
}
