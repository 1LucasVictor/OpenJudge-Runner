#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main(void) {
	char i_str[1000];
	int i, len, tmp;

	while(1) {
		scanf("%s", i_str);
		if(*i_str=='0')	break;
		len = strlen(i_str);
		tmp=0;
		for(i=0;i<len;i++) {
			tmp+=i_str[i] - '0';
		}
		printf("%d\n", tmp);
	}

	return 0;
}