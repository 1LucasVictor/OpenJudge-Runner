#include <stdio.h>
#include <string.h>

int main()
{
	char num[1000];
	int i, j, len, sum;
	
	i = 0;
	while (1){
		scanf("%s", num);
		len = strlen(num);
		
		if (num[0] == '0'){
			break;
		}
		i++;
		
		sum = 0;
		for (j = 0; j < len; j++){
			sum += num[j] - '0';
		}
		printf("%d\n", sum);
	}
	
	return 0;
}
