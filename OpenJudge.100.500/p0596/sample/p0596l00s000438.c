#include <stdio.h>
#include <string.h>

int main(void)
{
	
	int i;
	int min;
	int count_0 = 0;
	int count_1 = 0;
	char str[100001];
	int s;
	
	scanf("%s", str);
	
	for(i = 0; i < strlen(str); i++) {
		if(str[i] == '0') {
			count_0++;
		} else {
			count_1++;
		}
	}
	
	if(count_0 > count_1) {
		min = count_1;
	} else {
		min = count_0;
	}
	
	printf("%d", 2 * min);
	
	return 0;
}